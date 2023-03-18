`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:30:25 03/29/2021 
// Design Name: 
// Module Name:    fourBitCounterAlt 
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
module fourBitCounterAlt(
	 input rst,
    output a[3:0]
    );
	
	// Example Verilog code for the counter
	reg [3:0] a;
	always @ (posedge clk)
	 if (rst)
		a <= 4’b0000;
	 else
		a <= a + 1’b1;

endmodule
