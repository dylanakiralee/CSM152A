`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:30:26 06/06/2021
// Design Name:   parking_meter
// Module Name:   /home/ise/CSM152A/Proj4/testbench_205300889.v
// Project Name:  Proj4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parking_meter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench_205300889;

	// Inputs
	reg add1;
	reg add2;
	reg add3;
	reg add4;
	reg rst1;
	reg rst2;
	reg clk;
	reg rst;

	// Outputs
	wire [6:0] led_seg;
	wire a1;
	wire a2;
	wire a3;
	wire a4;
	wire [3:0] val1;
	wire [3:0] val2;
	wire [3:0] val3;
	wire [3:0] val4;
	
	integer i;

	// Instantiate the Unit Under Test (UUT)
	parking_meter uut (
		.add1(add1), 
		.add2(add2), 
		.add3(add3), 
		.add4(add4), 
		.rst1(rst1), 
		.rst2(rst2), 
		.clk(clk), 
		.rst(rst), 
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

	initial begin
		// Initialize Inputs
		add1 = 0;
		add2 = 0;
		add3 = 0;
		add4 = 0;
		rst1 = 0;
		rst2 = 0;
		clk = 0;
		rst = 0;

		// clk is 100 Hz, but we'll use a faster clock for simulation purposes
		// Reset
		#10;
      rst = 1;
		#10;
		clk = 1;
		#10;
		clk = 0;
		rst = 0;
		#10;
		#10;
		
		// add1
		add1 = 1;
		#10;
		clk = 1;
		#10;
		clk = 0;
		add1 = 0;
		for (i = 0; i < 6500; i = i + 1) begin
			clk = ~clk;
			#10;
		end
		#10;
		#10;
		
		// add2
		add2 = 1;
		#10;
		clk = 1;
		#10;
		clk = 0;
		add2 = 0;
		for (i = 0; i < 6500; i = i + 1) begin
			clk = ~clk;
			#10;
		end
		#10;
		#10;
		
		// add3
		add3 = 1;
		#10;
		clk = 1;
		#10;
		clk = 0;
		add3 = 0;
		for (i = 0; i < 6500; i = i + 1) begin
			clk = ~clk;
			#10;
		end
		#10;
		#10;
		
		// add4
		add4 = 1;
		#10;
		clk = 1;
		#10;
		clk = 0;
		add4 = 0;
		for (i = 0; i < 6500; i = i + 1) begin
			clk = ~clk;
			#10;
		end
		#10;
		#10;
		
		// rst1
		rst1 = 1;
		#10;
		clk = 1;
		#10;
		clk = 0;
		rst1 = 0;
		for (i = 0; i < 3000; i = i + 1) begin
			clk = ~clk;
			#10;
		end
		#10;
		#10;
		
		// rst2
		rst2 = 1;
		#10;
		clk = 1;
		#10;
		clk = 0;
		rst2 = 0;
		for (i = 0; i < 6500; i = i + 1) begin
			clk = ~clk;
			#10;
		end
		#10;
		#10;
		
		// Have time exceed 9999
		for (i = 0; i < 40; i = i + 1) begin
			add4 = 1;
			#10;
			clk = 1;
			#10;
			clk = 0;
		end
		#10;
		#10;
	end
      
endmodule

