`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:31:59 05/23/2021 
// Design Name: 
// Module Name:    vending_machine 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vending_machine(
    input CLK,
    input RESET,
    input RELOAD,
    input CARD_IN,
    input [2:0] ITEM_CODE,
    input KEY_PRESS,
    input VALID_TRAN,
    output VEND,
    output INVALID_SEL,
    output [2:0] COST,
    output FAILED_TRAN
    );
	
	// Output Regs
	reg VEND_REG;
	reg INVALID_SEL_REG;
	reg [2:0] COST_REG;
	reg FAILED_TRAN_REG;
	
	// States
	reg [3:0] current_state;
	reg [3:0] next_state;
	parameter IDLE_STATE = 4'd1;
	parameter RELOAD_STATE = 4'd2;
	parameter RST_STATE = 4'd3;
	parameter FIRST_IN_STATE = 4'd4;
	parameter SECOND_IN_STATE = 4'd5;
	parameter VEND_WAIT_STATE = 4'd6;
	parameter FAILED_TRAN_STATE = 4'd7;
	parameter VEND_STATE = 4'd8;
	parameter INVALID_SEL_STATE = 4'd9;
	parameter VEND_DISPLAY_STATE = 4'd10;
	parameter FIRST_IN_STATE_RST = 4'd11;
	parameter SECOND_IN_STATE_RST = 4'd12;
	parameter VEND_DISPLAY_STATE_RST = 4'd13;
	
	// Snack Counters
	reg [3:0] SC10;
	reg [3:0] SC11;
	reg [3:0] SC12;
	reg [3:0] SC13;
	reg [3:0] SC14;
	reg [3:0] SC20;
	reg [3:0] SC21;
	reg [3:0] SC22;
	reg [3:0] SC23;
	reg [3:0] SC24;
	
	// Time-Out Counter
	reg [2:0] code1;
	reg [2:0] code2;
	
	//Counter
	reg clk_rst;
	reg clk_inc;
	reg [2:0] counter;
	always @ (*) begin
		if (current_state == FIRST_IN_STATE_RST || current_state == SECOND_IN_STATE_RST || current_state == VEND_DISPLAY_STATE_RST)
			clk_rst = 1;
		else
			clk_rst = 0;
			
		if (current_state == FIRST_IN_STATE || current_state == SECOND_IN_STATE || current_state == VEND_DISPLAY_STATE)
			clk_inc = 1;
		else
			clk_inc = 0;
	end
	
	always @ (posedge CLK) begin
		if (clk_rst)
			counter <= 0;
		else if (clk_inc)
			counter <= counter + 3'd1;
	end
	
	// Handle Snack Counters
	always @ (posedge CLK) begin
		if (current_state == RST_STATE) begin
			SC10 <= 0;
			SC11 <= 0;
			SC12 <= 0;
			SC13 <= 0;
			SC14 <= 0;
			SC20 <= 0;
			SC21 <= 0;
			SC22 <= 0;
			SC23 <= 0;
			SC24 <= 0;
		end
		else if (current_state == RELOAD_STATE) begin
			SC10 <= 10;
			SC11 <= 10;
			SC12 <= 10;
			SC13 <= 10;
			SC14 <= 10;
			SC20 <= 10;
			SC21 <= 10;
			SC22 <= 10;
			SC23 <= 10;
			SC24 <= 10;
		end
		else if (current_state == VEND_STATE) begin
			if (code1 == 3'd1 && code2 == 3'd0) SC10 <= SC10 - 1;
			else if (code1 == 3'd1 && code2 == 3'd1) SC11 <= SC11 - 1;
			else if (code1 == 3'd1 && code2 == 3'd2) SC12 <= SC12 - 1;
			else if (code1 == 3'd1 && code2 == 3'd3) SC13 <= SC13 - 1;
			else if (code1 == 3'd1 && code2 == 3'd4) SC14 <= SC14 - 1;
			else if (code1 == 3'd2 && code2 == 3'd0) SC20 <= SC20 - 1;
			else if (code1 == 3'd2 && code2 == 3'd1) SC21 <= SC21 - 1;
			else if (code1 == 3'd2 && code2 == 3'd2) SC22 <= SC22 - 1;
			else if (code1 == 3'd2 && code2 == 3'd3) SC23 <= SC23 - 1;
			else if (code1 == 3'd2 && code2 == 3'd4) SC24 <= SC24 - 1;
		end
	end
	
	// Decide output based on current state
	always @ (*) begin
		case (current_state)
			IDLE_STATE,
			RELOAD_STATE,
			RST_STATE,
			FIRST_IN_STATE,
			SECOND_IN_STATE,
			VEND_WAIT_STATE,
			FIRST_IN_STATE_RST,
			SECOND_IN_STATE_RST: begin
				VEND_REG = 0;
				INVALID_SEL_REG = 0;
				COST_REG[2:0] = 3'd0;
				FAILED_TRAN_REG = 0;
			end
			FAILED_TRAN_STATE: begin
				FAILED_TRAN_REG = 1;
			end
			VEND_STATE: begin
				VEND_REG = 1;
			end
			INVALID_SEL_STATE: begin
				INVALID_SEL_REG = 1;
			end
			VEND_DISPLAY_STATE_RST,
			VEND_DISPLAY_STATE: begin
				if (code1 == 3'd1)
					COST_REG[2:0] = 3'd2;
				else if (code1 == 3'd2)
					COST_REG[2:0] = 3'd5;
			end
		endcase
	end
	
	// Decide next state based on inputs and current state
	always @ (*) begin
		case (current_state)
			IDLE_STATE: begin
				if (RELOAD) begin
					next_state = RELOAD_STATE;
				end
				else if (CARD_IN) begin
					next_state = FIRST_IN_STATE_RST;
				end
				else begin
					next_state = IDLE_STATE;
				end
			end
			RELOAD_STATE: begin
				next_state = IDLE_STATE;
			end
			RST_STATE: begin
				next_state = IDLE_STATE;
			end
			FIRST_IN_STATE: begin
				if (counter == 3'd3) begin
					next_state = IDLE_STATE;
				end
				else if (KEY_PRESS) begin
					code1[2:0] = ITEM_CODE[2:0];
					next_state = SECOND_IN_STATE_RST;
				end
				else begin
					next_state = FIRST_IN_STATE;
				end
			end
			SECOND_IN_STATE: begin
				if (counter == 3'd3) begin
					next_state = IDLE_STATE;
				end
				else if (KEY_PRESS) begin
					code2[2:0] = ITEM_CODE[2:0];
					next_state = VEND_WAIT_STATE;
				end
				else begin
					next_state = SECOND_IN_STATE;
				end
			end
			VEND_WAIT_STATE: begin
				if ((code1 == 1 && code2 == 0 && SC10 > 0) ||
					 (code1 == 1 && code2 == 1 && SC11 > 0) ||
					 (code1 == 1 && code2 == 2 && SC12 > 0) ||
					 (code1 == 1 && code2 == 3 && SC13 > 0) ||
					 (code1 == 1 && code2 == 4 && SC14 > 0) ||
					 (code1 == 2 && code2 == 0 && SC20 > 0) ||
					 (code1 == 2 && code2 == 1 && SC21 > 0) ||
					 (code1 == 2 && code2 == 2 && SC22 > 0) ||
					 (code1 == 2 && code2 == 3 && SC23 > 0) ||
					 (code1 == 2 && code2 == 4 && SC24 > 0)) begin
					next_state = VEND_DISPLAY_STATE_RST;
				end
				else begin
					next_state = INVALID_SEL_STATE;
				end
			end
			FAILED_TRAN_STATE: begin
				next_state = IDLE_STATE;
			end
			VEND_STATE: begin
				next_state = IDLE_STATE;
			end
			INVALID_SEL_STATE: begin
				next_state = IDLE_STATE;
			end
			VEND_DISPLAY_STATE: begin
				if (counter == 3'd2) begin
					next_state = FAILED_TRAN_STATE;
				end
				else if (VALID_TRAN) begin
					next_state = VEND_STATE;
				end
				else begin
					next_state = VEND_DISPLAY_STATE;
				end
			end
			FIRST_IN_STATE_RST: begin
				if (KEY_PRESS) begin
					code1[2:0] = ITEM_CODE[2:0];
					next_state = SECOND_IN_STATE_RST;
				end
				else begin
					next_state = FIRST_IN_STATE;
				end
			end
			SECOND_IN_STATE_RST: begin
				if (KEY_PRESS) begin
					code2[2:0] = ITEM_CODE[2:0];
					next_state = VEND_WAIT_STATE;
				end
				else begin
					next_state = SECOND_IN_STATE; 
				end
			end
			VEND_DISPLAY_STATE_RST: begin
				if (VALID_TRAN) begin
					next_state = VEND_STATE;
				end
				else begin
					next_state = VEND_DISPLAY_STATE;
				end
			end
		endcase
	end
	
	// Change state on posedge of the clock
	always @ (posedge CLK) begin
		if (RESET)
			current_state <= RST_STATE;
		else
			current_state <= next_state;
	end
	
	// Assign output regs to wires
	assign VEND = VEND_REG;
	assign INVALID_SEL = INVALID_SEL_REG;
	assign COST = COST_REG;
	assign FAILED_TRAN = FAILED_TRAN_REG;

endmodule
