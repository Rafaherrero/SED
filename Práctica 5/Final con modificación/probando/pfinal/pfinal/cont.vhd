--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:00:31 04/22/2014
-- Design Name:   
-- Module Name:   C:/Users/Rafa/Desktop/pfinal/pfinal/cont.vhd
-- Project Name:  pfinal
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cronometro
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
 
ENTITY cont IS
END cont;
 
ARCHITECTURE behavior OF cont IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cronometro
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         sd : OUT  std_logic_vector(7 downto 0);
         mux : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal sd : std_logic_vector(7 downto 0);
   signal mux : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cronometro PORT MAP (
          clk => clk,
          reset => reset,
          sd => sd,
          mux => mux
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
