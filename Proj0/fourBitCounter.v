`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:39:10 03/29/2021 
// Design Name: 
// Module Name:    fourBitCounter 
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
module fourBitCounter(
	 input rst,
    output a0,
    output a1,
    output a2,
    output a3
    );

	always @ (posedge clk)
		if (rst)
			a0 <= 1'b0;
			a1 <= 1'b0;
			a2 <= 1'b0;
			a3 <= 1'b0;
		else
			if a0 == 1'b1
				if a1 == 1'b1
					if a2 == 1'b1
						a3 <= ~a3;
					a2 <= ~a2;
				a1 <= ~a1;
			a0 <= ~a0;
			

endmodule
