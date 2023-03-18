`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:40:56 05/24/2021 
// Design Name: 
// Module Name:    parking_meter 
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
module parking_meter(
    input add1,
    input add2,
    input add3,
    input add4,
    input rst1,
    input rst2,
    input clk,
    input rst,
    output [6:0] led_seg,
    output a1,
    output a2,
    output a3,
    output a4,
    output [3:0] val1,
    output [3:0] val2,
    output [3:0] val3,
    output [3:0] val4
    );
	
	parameter INITIAL = 4'd0;
	parameter INITIAL16 = 4'd1;
	parameter INITIAL150 = 4'd2;
	parameter ADD60 = 4'd3;
	parameter ADD120 = 4'd4;
	parameter ADD180 = 4'd5;
	parameter ADD300 = 4'd6;
	parameter WAIT = 4'd7;
	parameter FLASHSLOW = 4'd8;
	
	reg [5:0] count50;
	reg [6:0] count100;
	reg [13:0] time_disp;
	reg [3:0] current_state;
	reg [3:0] next_state;
	reg flash;
	reg decrement;
		
	led_display led_disp(
		.clk(clk),
		.rst(rst),
		.time_disp(time_disp),
		.flash(flash),
		.led_seg(led_seg),
		.a1(a1),
		.a2(a2),
		.a3(a3),
		.a4(a4),
		.val1(val1),
		.val2(val2),
		.val3(val3),
		.val4(val4)
	);
	
	always @ (posedge clk) begin
		if (rst || count50 == 6'd50)
			count50 <= 6'd1;
		else
			count50 <= count50 + 6'd1;
	end
	
	always @ (posedge clk) begin
		if (rst || count100 == 7'd100)
			count100 <= 7'd1;
		else
			count100 <= count100 + 7'd1;
	end
	
	always @ (posedge clk) begin
		if (rst)
			current_state <= INITIAL;
		else if (rst1)
			current_state <= INITIAL16;
		else if (rst2)
			current_state <= INITIAL150;
		else
			current_state <= next_state;
	end
	
	always @ (posedge clk) begin
		if (rst)
			flash <= 1'b1;
		else if (count50 == 6'd50)
			flash <= ~flash;
		else
			flash <= flash;
	end
	
	always @ (posedge clk) begin
		if (rst)
			decrement <= 1'b0;
		else if (count100 == 7'd100)
			decrement <= 1'b1;
		else
			decrement <= 1'b0;
	end
	
	always @ (posedge clk) begin
		case(current_state)
			INITIAL: begin
				time_disp <= 0;
			end
			INITIAL16: begin
				if (decrement)
					time_disp <= 14'd15;
				else
					time_disp <= 14'd16;
			end
			INITIAL150: begin
				if (decrement)
					time_disp <= 14'd149;
				else
					time_disp <= 14'd150;
			end
			ADD60: begin
				if (decrement)
					time_disp <= time_disp + 14'd59 < 14'd9999 ? time_disp + 14'd59 : 14'd9999;
				else
					time_disp <= time_disp + 14'd60 < 14'd9999 ? time_disp + 14'd60 : 14'd9999;
			end
			ADD120: begin
				if (decrement)
					time_disp <= time_disp + 14'd119 < 14'd9999 ? time_disp + 14'd119 : 14'd9999;
				else
					time_disp <= time_disp + 14'd120 < 14'd9999 ? time_disp + 14'd120 : 14'd9999;
			end
			ADD180: begin
				if (decrement)
					time_disp <= time_disp + 14'd179 < 14'd9999 ? time_disp + 14'd179 : 14'd9999;
				else
					time_disp <= time_disp + 14'd180 < 14'd9999 ? time_disp + 14'd180 : 14'd9999;
			end
			ADD300: begin
				if (decrement)
					time_disp <= time_disp + 14'd299 < 14'd9999 ? time_disp + 14'd299 : 14'd9999;
				else
					time_disp <= time_disp + 14'd300 < 14'd9999 ? time_disp + 14'd300 : 14'd9999;
			end
			WAIT,
			FLASHSLOW: begin
				if (decrement)
					time_disp <= time_disp - 14'd1;
				else
					time_disp <= time_disp;
			end
		endcase
	end
	
	always @ (*) begin
		case(current_state)
			INITIAL: begin
				if (add1)
					next_state = ADD60;
				else if (add2)
					next_state = ADD120;
				else if (add3)
					next_state = ADD180;
				else if (add4)
					next_state = ADD300;
				else
					next_state = INITIAL;
			end
			INITIAL16,
			INITIAL150,
			ADD60,
			ADD120,
			ADD180,
			ADD300: begin
				if (add1)
					next_state = ADD60;
				else if (add2)
					next_state = ADD120;
				else if (add3)
					next_state = ADD180;
				else if (add4)
					next_state = ADD300;
				else
					next_state = WAIT;
			end
			WAIT: begin
				if (add1)
					next_state = ADD60;
				else if (add2)
					next_state = ADD120;
				else if (add3)
					next_state = ADD180;
				else if (add4)
					next_state = ADD300;
				else if (time_disp < 14'd180)
					next_state = FLASHSLOW;
				else
					next_state = WAIT;
			end
			FLASHSLOW: begin
				if(add1)
					next_state = ADD60;
				else if(add2)
					next_state = ADD120;
				else if(add3)
					next_state = ADD180;
				else if(add4)
					next_state = ADD300;
				else if(time_disp == 14'd0)
					next_state = INITIAL;
				else
					next_state = FLASHSLOW;
			end
		endcase
	end
	
endmodule

module led_display(
	input clk,
	input rst,
	input [13:0] time_disp,
	input flash,
	output [6:0] led_seg,
	output a1,
	output a2,
	output a3,
	output a4,
	output [3:0] val1,
   output [3:0] val2,
   output [3:0] val3,
   output [3:0] val4
	);
	
	reg [6:0] led_reg;
	reg rega1;
	reg rega2;
	reg rega3;
	reg rega4;
	
	assign val1 = time_disp / 1000;
	assign val2 = (time_disp % 1000) / 100;
	assign val3 = (time_disp % 100) / 10;
	assign val4 = time_disp % 10;
	
	reg [6:0] led_seg1;
	reg [6:0] led_seg2;
	reg [6:0] led_seg3;
	reg [6:0] led_seg4;
	
	always @ (*) begin
		case (val1)
			4'd0: led_seg1 = 7'b0000001;
			4'd1: led_seg1 = 7'b1001111;
			4'd2: led_seg1 = 7'b0010010;
			4'd3: led_seg1 = 7'b0000110;
			4'd4: led_seg1 = 7'b1001100;
			4'd5: led_seg1 = 7'b0100100;
			4'd6: led_seg1 = 7'b0100000;
			4'd7: led_seg1 = 7'b0001111;
			4'd8: led_seg1 = 7'b0000000;
			4'd9: led_seg1 = 7'b0000100;
			default: led_seg1 = 7'b0000001;
		endcase
	end
	
	always @ (*) begin
		case (val2)
			4'd0: led_seg2 = 7'b0000001;
			4'd1: led_seg2 = 7'b1001111;
			4'd2: led_seg2 = 7'b0010010;
			4'd3: led_seg2 = 7'b0000110;
			4'd4: led_seg2 = 7'b1001100;
			4'd5: led_seg2 = 7'b0100100;
			4'd6: led_seg2 = 7'b0100000;
			4'd7: led_seg2 = 7'b0001111;
			4'd8: led_seg2 = 7'b0000000;
			4'd9: led_seg2 = 7'b0000100;
			default: led_seg2 = 7'b0000001;
		endcase
	end
	
	always @ (*) begin
		case (val3)
			4'd0: led_seg3 = 7'b0000001;
			4'd1: led_seg3 = 7'b1001111;
			4'd2: led_seg3 = 7'b0010010;
			4'd3: led_seg3 = 7'b0000110;
			4'd4: led_seg3 = 7'b1001100;
			4'd5: led_seg3 = 7'b0100100;
			4'd6: led_seg3 = 7'b0100000;
			4'd7: led_seg3 = 7'b0001111;
			4'd8: led_seg3 = 7'b0000000;
			4'd9: led_seg3 = 7'b0000100;
			default: led_seg3 = 7'b0000001;
		endcase
	end
	
	always @ (*) begin
		case (val4)
			4'd0: led_seg4 = 7'b0000001;
			4'd1: led_seg4 = 7'b1001111;
			4'd2: led_seg4 = 7'b0010010;
			4'd3: led_seg4 = 7'b0000110;
			4'd4: led_seg4 = 7'b1001100;
			4'd5: led_seg4 = 7'b0100100;
			4'd6: led_seg4 = 7'b0100000;
			4'd7: led_seg4 = 7'b0001111;
			4'd8: led_seg4 = 7'b0000000;
			4'd9: led_seg4 = 7'b0000100;
			default: led_seg4 = 7'b0000001;
		endcase
	end
	
	reg [3:0] ind;
	always @ (posedge clk) begin
		if (rst)
			ind <= 4'b0001;
		else
			ind <= {ind[2:0], ind[3]};
	end
	
	always @ (posedge clk) begin
		if (time_disp == 0) begin
			if (flash) begin
				if (ind[0]) begin
					led_reg <= led_seg1;
					rega1 <= 0;
					rega2 <= 1;
					rega3 <= 1;
					rega4 <= 1;
				end
				else if (ind[1]) begin
					led_reg <= led_seg2;
					rega1 <= 1;
					rega2 <= 0;
					rega3 <= 1;
					rega4 <= 1;
				end
				else if (ind[2]) begin
					led_reg <= led_seg3;
					rega1 <= 1;
					rega2 <= 1;
					rega3 <= 0;
					rega4 <= 1;
				end
				else if (ind[3]) begin
					led_reg <= led_seg4;
					rega1 <= 1;
					rega2 <= 1;
					rega3 <= 1;
					rega4 <= 0;
				end
			end
			else begin
				rega1 <= 1;
				rega2 <= 1;
				rega3 <= 1;
				rega4 <= 1;
			end
		end
		else if (time_disp >= 180) begin
			if (ind[0]) begin
				led_reg <= led_seg1;
				rega1 <= 0;
				rega2 <= 1;
				rega3 <= 1;
				rega4 <= 1;
			end
			else if (ind[1]) begin
				led_reg <= led_seg2;
				rega1 <= 1;
				rega2 <= 0;
				rega3 <= 1;
				rega4 <= 1;
			end
			else if (ind[2]) begin
				led_reg <= led_seg3;
				rega1 <= 1;
				rega2 <= 1;
				rega3 <= 0;
				rega4 <= 1;
			end
			else if (ind[3]) begin
				led_reg <= led_seg4;
				rega1 <= 1;
				rega2 <= 1;
				rega3 <= 1;
				rega4 <= 0;
			end
		end
		else begin
			if (time_disp % 2 == 0) begin
				if (ind[0]) begin
					led_reg <= led_seg1;
					rega1 <= 0;
					rega2 <= 1;
					rega3 <= 1;
					rega4 <= 1;
				end
				else if (ind[1]) begin
					led_reg <= led_seg2;
					rega1 <= 1;
					rega2 <= 0;
					rega3 <= 1;
					rega4 <= 1;
				end
				else if (ind[2]) begin
					led_reg <= led_seg3;
					rega1 <= 1;
					rega2 <= 1;
					rega3 <= 0;
					rega4 <= 1;
				end
				else if (ind[3]) begin
					led_reg <= led_seg4;
					rega1 <= 1;
					rega2 <= 1;
					rega3 <= 1;
					rega4 <= 0;
				end
			end
			else begin
				rega1 <= 1;
				rega2 <= 1;
				rega3 <= 1;
				rega4 <= 1;
			end
		end
	end
	
	assign led_seg = led_reg;
	assign a1 = rega1;
	assign a2 = rega2;
	assign a3 = rega3;
	assign a4 = rega4;

endmodule
