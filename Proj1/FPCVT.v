`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:31:11 03/29/2021 
// Design Name: 
// Module Name:    FPCVT 
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
module FPCVT(
    input [12:0] D,
    output S,
    output [2:0] E,
    output [4:0] F
    );
	
	reg [2:0] exp;
	reg [4:0] sig;
	reg [12:0] mag;
	reg sixth;

	// Convert 2's complement to sign-magnitude
	// Get sign
	assign S = D[12];
	always @(*) begin
		// Get absolute value
		if (D[12] == 1'b1)
			mag[12:0] = ~D[12:0] + 1'b1;	
		else
			mag[12:0] = D[12:0];
			
		//Count Leading Zeroes/Extract Leading Bits
		casex(mag[12:5])
			{8'b00000000}: begin
				exp = 3'd0;
				sig = mag[4:0];
				sixth = 1'b0;
			end
			{8'b00000001}: begin
				exp = 3'd1;
				sig = mag[5:1];
				sixth = mag[0];
			end
			{8'b0000001x}: begin
				exp = 3'd2;
				sig = mag[6:2];
				sixth = mag[1];
			end
			{8'b000001xx}: begin
				exp = 3'd3;
				sig = mag[7:3];
				sixth = mag[2];
			end
			{8'b00001xxx}: begin
				exp = 3'd4;
				sig = mag[8:4];
				sixth = mag[3];
			end
			{8'b0001xxxx}: begin
				exp = 3'd5;
				sig = mag[9:5];
				sixth = mag[4];
			end
			{8'b001xxxxx}: begin
				exp = 3'd6;
				sig = mag[10:6];
				sixth = mag[5];
			end
			{8'b01xxxxxx}: begin
				exp = 3'd7;
				sig = mag[11:7];
				sixth = mag[6];
			end
			default: begin
				exp = 3'd7;
				sig = 5'b11111;
				sixth = 1'b0;
			end
		endcase
		
		// Optimize Outputs (Round and Edge Cases)
		if (sixth == 1'b1) begin
			// If significand overflows
			if (sig == 5'b11111) begin
				// If exponent overflows
				if (exp != 3'b111) begin
					sig = 5'b10000;
					exp[2:0] = exp[2:0] + 1'b1;
				end
				else begin
					sig = 5'b11111;
					exp = 3'b111;
				end
			end
			else begin
				sig[4:0] = sig[4:0] + 1'b1;
				exp = exp;
			end
		end
	end

	assign E = exp;
	assign F = sig;

endmodule
