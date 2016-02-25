--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:19:57 05/11/2014
-- Design Name:   
-- Module Name:   C:/Users/Rafa/Desktop/probando/pfinal/pfinal/contador_tb.vhd
-- Project Name:  pfinal
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: contador
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
 
ENTITY contador_tb IS
END contador_tb;
 
ARCHITECTURE behavior OF contador_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT contador
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         ce : IN  std_logic;
         botons : IN  std_logic;
         botonm : IN  std_logic;
         counts : OUT  std_logic_vector(3 downto 0);
         countds : OUT  std_logic_vector(3 downto 0);
         countm : OUT  std_logic_vector(3 downto 0);
         countdm : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal ce : std_logic := '0';
   signal botons : std_logic := '1';
   signal botonm : std_logic := '0';

 	--Outputs
   signal counts : std_logic_vector(3 downto 0);
   signal countds : std_logic_vector(3 downto 0);
   signal countm : std_logic_vector(3 downto 0);
   signal countdm : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: contador PORT MAP (
          clk => clk,
          reset => reset,
          ce => ce,
          botons => botons,
          botonm => botonm,
          counts => counts,
          countds => countds,
          countm => countm,
          countdm => countdm
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
