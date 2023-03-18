`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:53:20 03/31/2021
// Design Name:   vending_machine
// Module Name:   /home/ise/CSM152A/Proj3/testbench_205300889.v
// Project Name:  Proj3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vending_machine
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
	reg CLK;
	reg RESET;
	reg RELOAD;
	reg CARD_IN;
	reg [2:0] ITEM_CODE;
	reg KEY_PRESS;
	reg VALID_TRAN;

	// Outputs
	wire VEND;
	wire INVALID_SEL;
	wire [2:0] COST;
	wire FAILED_TRAN;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.RELOAD(RELOAD), 
		.CARD_IN(CARD_IN), 
		.ITEM_CODE(ITEM_CODE), 
		.KEY_PRESS(KEY_PRESS), 
		.VALID_TRAN(VALID_TRAN), 
		.VEND(VEND), 
		.INVALID_SEL(INVALID_SEL), 
		.COST(COST), 
		.FAILED_TRAN(FAILED_TRAN)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RESET = 0;
		RELOAD = 0;
		CARD_IN = 0;
		ITEM_CODE = 0;
		KEY_PRESS = 0;
		VALID_TRAN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		// Successful transaction
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		ITEM_CODE = 3'd4;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		VALID_TRAN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		VALID_TRAN = 0;
		#10
		CLK = 1;
		#100
				
		// Time-out during FIRST_IN_STATE
		CLK = 0;
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#100
		
		// Time-out during SECOND_IN_STATE
		CLK = 0;
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd2;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#100
		
		// Time-out during VEND_DISPLAY_STATE
		CLK = 0;
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd2;
		#10
		CLK = 1;
		#10
		CLK = 0;
		ITEM_CODE = 3'd1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#100
		
		// Invalid selection (code1)
		CLK = 0;
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd4;
		#10
		CLK = 1;
		#10
		CLK = 0;
		ITEM_CODE = 3'd1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#100
		
		// Invalid Selection (code2)
		CLK = 0;
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		ITEM_CODE = 3'd5;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#100
		
		// No more snacks
		CLK = 0;
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		ITEM_CODE = 3'd3;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#100
		
		//Successful transaction followed immediately by another transaction (CARD_IN left high)
		// First transaction
		CLK = 0;
		RESET = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RESET = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		RELOAD = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		ITEM_CODE = 3'd4;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		VALID_TRAN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		VALID_TRAN = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		CARD_IN = 0;
		KEY_PRESS = 1;
		ITEM_CODE = 3'd1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		ITEM_CODE = 3'd4;
		#10
		CLK = 1;
		#10
		CLK = 0;
		KEY_PRESS = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		VALID_TRAN = 1;
		#10
		CLK = 1;
		#10
		CLK = 0;
		VALID_TRAN = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		#10
		CLK = 0;
		#10
		CLK = 1;
		
	end
      
endmodule

