`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:04:58 03/30/2021 
// Design Name: 
// Module Name:    clock_gen 
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
module clock_gen(
    input clk_in,
    input rst,
    output clk_div_2,
    output clk_div_4,
    output clk_div_8,
    output clk_div_16,
    output clk_div_32,
    output clk_div_26,
    output clk_div_3,
    output clk_pos,
    output clk_neg,
    output clk_div_5,
    output clk_div,
    output [0:0] toggle_counter
    );
	 
	clock_div_two task1(
	 .clk_in (clk_in),
	 .rst (rst),
	 .clk_div_2(clk_div_2),
	 .clk_div_4(clk_div_4),
	 .clk_div_8(clk_div_8),
	 .clk_div_16(clk_div_16)
	);
	 
	clock_div_thirty_two task2 (
	 .clk_in(clk_in),
	 .rst(rst),
	 .clk_div_32(clk_div_32)
	);

	clock_div_twenty_six task3(
	 .clk_in (clk_in),
	 .rst (rst),
	 .clk_div_26 (clk_div_26)
	);
	
	clock_div_three task456(
	 .clk_in(clk_in),
	 .rst(rst),
	 .clk_div_3(clk_div_3),
	 .clk_pos(clk_pos),
	 .clk_neg(clk_neg)
	);

	clock_div_five task7(
	 .clk_in (clk_in),
	 .rst (rst),
	 .clk_div_5 (clk_div_5)
	);
	
	clock_pulse task8(
	 .clk_in(clk_in),
	 .rst(rst),
	 .clk_div(clk_div)
	);
	
	clock_strobe task9(
	 .clk_in (clk_in),
	 .rst (rst),
	 .toggle_counter (toggle_counter)
	);
endmodule

// task 1
module clock_div_two(clk_in, rst, clk_div_2, clk_div_4,
clk_div_8, clk_div_16);
	input clk_in, rst;
	output clk_div_2, clk_div_4, clk_div_8, clk_div_16;
	
	reg [3:0] count;
	
	always @(posedge clk_in) begin
		if (rst) begin
			count <= 4'b0000;
		end
		else begin
			count <= count + 1'b1;
		end
	end
	
	assign clk_div_2 = count[0];
	assign clk_div_4 = count[1];
	assign clk_div_8 = count[2];
	assign clk_div_16 = count[3];
	
endmodule

// task 2
module clock_div_thirty_two(clk_in, rst, clk_div_32);
	input clk_in, rst;
	output reg clk_div_32;
	
	reg clk_out;
	reg [3:0] count;
	
	always @(posedge clk_in) begin
		if (rst) begin
			clk_out <= 1'b0;
			count <= 4'b0000;
		end
		else if (count== 4'b1111) begin
			clk_out = ~clk_out;
			count <= count + 1'b1;
		end
		else begin
			count <= count + 1'b1;
		end
	end
	
	assign clk_div_32 = clk_out;
	
endmodule

// task 3
module clock_div_twenty_six(clk_in, rst, clk_div_26);
	input clk_in, rst;
	output reg clk_div_26;
	
	reg clk_out;
	reg [4:0] count;
	
	always @(posedge clk) begin
		if (rst) begin
			clk_out <= 0;
			count <= 0;
		end
		else if (count == 5'd27) begin
			clk_out <= ~clk_out;
			count <= 0;
		else begin
			count <= count + 1;
		end
	end
	
	assign clk_div_26 = clk_out;
			
endmodule

// task 4, 5, 6
module clock_div_three(clk_in, rst, clk_div_3, clk_pos,
clk_neg);
	input clk_in, rst;
	output clk_div_3;
	output reg clk_pos, clk_neg;
	
	reg [2:0] pos_count;
	reg [2:0] neg_count;
	
	always @(posedge clk_in) begin
		if (rst) begin
			pos_count <= 3'b001;
		end
		else begin
			pos_count <= {pos_count[0], pos_count[2:1]};
		end
	end
	
	assign clk_pos = pos_count[0];
	
	always @(negedge clk_in) begin
		if (rst) begin
			neg_count <= 3'b001;
		end
		else
			neg_count <= {neg_count[0], neg_count[2:1]};
		end
	end
	
	assign clk_neg = neg_count[0];
	
	assign clk_div_3 = clk_pos || clk_neg;
	
endmodule

// task 7
module clock_div_five(clk_in, rst, clk_div_5);
	input clk_in, rst;
	output clk_div_5;
	
	reg [4:0] pos_count;
	reg [4:0] neg_count;
	
	always @(posedge clk_in) begin
		if (rst) begin
			pos_count <= 5'b00011;
		end
		else begin
			pos_count <= {pos_count[0], pos_count[4:1]}; 
		end
	end
	
	always @(negedge clk_in) begin
		if (rst) begin
			neg_count <= 5'b00001;
		end
		else
			neg_count <= {neg_count[0], neg_count[4:1]};
		end
	end
	
	assign clk_div_5 = pos_count[0] || neg_count[0];
	
endmodule

// task 8
module clock_pulse(clk_in, rst, clk_div);
	input clk_in, rst;
	output reg clk_div;
	
	reg [99:0] count;
	
	always @(posedge clk_in) begin
		if (rst) begin
			rst <= 100'd0;
		end
		else begin
			count <= {count[0], count[99:1]};
		end
	end
	
	always @(posedge clk_in) begin
		if (rst) begin
			clk_div <= 1'b1;
		end
		else begin
			clk_div <= ~clk_div;
		end
	end
	
endmodule

// task 9
module clock_strobe(clk_in, rst, toggle_counter);
	input clk_in, rst;
	output reg [7:0] toggle_counter;
	
	reg [3:0] strobe;
	reg [7:0] count;
	
	always @(posedge clk_in) begin
		if (rst) begin
			strobe <= 4'b0001;
		end
		else begin
			strobe <= {strobe[0], strobe[2:0]};
		end
	end
	
	always @(posedge clk_in) begin
		if (rst) begin
			toggle_counter <= 4'b0001;
		end
		else if (strobe[0] == 1'b1) begin
			toggle_counter <= count - 5;
		end
		else begin
			toggle_counter <= count + 3;
		end
	end
	
endmodule
