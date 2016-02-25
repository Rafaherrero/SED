--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:19:02 05/07/2014
-- Design Name:   
-- Module Name:   C:/Users/Rafa/Desktop/pfinal/pfinal/multipeq_tb.vhd
-- Project Name:  pfinal
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multipequeno
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
 
ENTITY multipeq_tb IS
END multipeq_tb;
 
ARCHITECTURE behavior OF multipeq_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multipequeno
    PORT(
         coche0 : IN  std_logic;
         coche1 : IN  std_logic;
         coche2 : IN  std_logic;
         coche3 : IN  std_logic;
         selector : IN  std_logic_vector(1 downto 0);
         atasco : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal coche0 : std_logic := '0';
   signal coche1 : std_logic := '0';
   signal coche2 : std_logic := '0';
   signal coche3 : std_logic := '0';
   signal selector : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal atasco : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multipequeno PORT MAP (
          coche0 => coche0,
          coche1 => coche1,
          coche2 => coche2,
          coche3 => coche3,
          selector => selector,
          atasco => atasco
        );

coche0 <= not(coche0) after 10 ns;
coche1 <= not(coche1) after 20 ns;
coche2 <= not(coche2) after 40 ns;
coche3 <= not(coche3) after 80 ns;

selector(0) <= not (selector(0)) after 160 ns;
selector(1) <= not (selector(1)) after 320 ns;

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
-- 
--
--   -- Stimulus process
--   stim_proc: process
--   begin		
--      -- hold reset state for 100 ns.
--      wait for 100 ns;	
--
--      wait for <clock>_period*10;
--
--      -- insert stimulus here 
--
--      wait;
--   end process;

END;
