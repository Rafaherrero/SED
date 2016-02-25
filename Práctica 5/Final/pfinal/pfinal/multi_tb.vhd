--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:25:47 05/07/2014
-- Design Name:   
-- Module Name:   C:/Users/Rafa/Desktop/pfinal/pfinal/multi_tb.vhd
-- Project Name:  pfinal
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multi
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
 
ENTITY multi_tb IS
END multi_tb;
 
ARCHITECTURE behavior OF multi_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multi
    PORT(
         bahia0 : IN  std_logic_vector(3 downto 0);
         bahia1 : IN  std_logic_vector(3 downto 0);
         bahia2 : IN  std_logic_vector(3 downto 0);
         bahia3 : IN  std_logic_vector(3 downto 0);
         selec : IN  std_logic_vector(1 downto 0);
         playa : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal bahia0 : std_logic_vector(3 downto 0) := (others => '0');
   signal bahia1 : std_logic_vector(3 downto 0) := (others => '0');
   signal bahia2 : std_logic_vector(3 downto 0) := (others => '0');
   signal bahia3 : std_logic_vector(3 downto 0) := (others => '0');
   signal selec : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal playa : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multi PORT MAP (
          bahia0 => bahia0,
          bahia1 => bahia1,
          bahia2 => bahia2,
          bahia3 => bahia3,
          selec => selec,
          playa => playa
        );

bahia0(0) <= not(bahia0(0)) after 10 ns;
bahia0(1) <= not(bahia0(1)) after 20 ns;
bahia0(2) <= not(bahia0(2)) after 40 ns;
bahia0(3) <= not(bahia0(3)) after 80 ns;

bahia1(0) <= not(bahia1(0)) after 160 ns;
bahia1(1) <= not(bahia1(1)) after 320 ns;
bahia1(2) <= not(bahia1(2)) after 640 ns;
bahia1(3) <= not(bahia1(3)) after 1280 ns;

bahia2(0) <= not(bahia2(0)) after 2560 ns;
bahia2(1) <= not(bahia2(1)) after 5120 ns;
bahia2(2) <= not(bahia2(2)) after 10240 ns;
bahia2(3) <= not(bahia2(3)) after 20480 ns;

bahia3(0) <= not(bahia3(0)) after 40960 ns;
bahia3(1) <= not(bahia3(1)) after 81920 ns;
bahia3(2) <= not(bahia3(2)) after 163840 ns;
bahia3(3) <= not(bahia3(3)) after 327680 ns;

selec(0) <= not (selec(0)) after 655360 ns;
selec(1) <= not (selec(1)) after 1310720 ns;




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
