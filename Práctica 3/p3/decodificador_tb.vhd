--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:08:09 03/19/2014
-- Design Name:   
-- Module Name:   C:/p3/p3/decodificador_tb.vhd
-- Project Name:  p3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: decodificador
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY decodificador_tb IS
END decodificador_tb;
 
ARCHITECTURE behavior OF decodificador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT decodificador
    PORT(
         bcd : IN  std_logic_vector(3 downto 0);
         led : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal bcd : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal led : std_logic_vector(6 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   -- constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: decodificador PORT MAP (
          bcd => bcd,
          led => led
        );
		  
bcd(0) <= not(bcd(0)) after 10 ns;
bcd(1) <= not(bcd(1)) after 20 ns;
bcd(2) <= not(bcd(2)) after 40 ns;
bcd(3) <= not(bcd(3)) after 80 ns;

END;
