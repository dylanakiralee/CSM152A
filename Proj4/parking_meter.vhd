----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:37:10 05/24/2021 
-- Design Name: 
-- Module Name:    parking_meter - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity parking_meter is
    Port ( add1 : in  STD_LOGIC;
           add2 : in  STD_LOGIC;
           add3 : in  STD_LOGIC;
           add4 : in  STD_LOGIC;
           rst1 : in  STD_LOGIC;
           rst2 : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           led_seg : out  STD_LOGIC_VECTOR (6 downto 0);
           a1 : out  STD_LOGIC;
           a2 : out  STD_LOGIC;
           a3 : out  STD_LOGIC;
           a4 : out  STD_LOGIC;
           val1 : out  STD_LOGIC_VECTOR (3 downto 0);
           val2 : out  STD_LOGIC_VECTOR (3 downto 0);
           val3 : out  STD_LOGIC_VECTOR (3 downto 0);
           val4 : out  STD_LOGIC_VECTOR (3 downto 0));
end parking_meter;

architecture Behavioral of parking_meter is

begin


end Behavioral;

