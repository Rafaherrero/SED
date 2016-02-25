----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:12:01 05/07/2014 
-- Design Name: 
-- Module Name:    refresco - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity refresco is
    Port ( clk : in  STD_LOGIC;
           thor : out  STD_LOGIC_VECTOR (1 downto 0));
end refresco;

architecture Behavioral of refresco is

signal reinicio: STD_LOGIC;
signal conteo: UNSIGNED (1 downto 0) := "00";

begin
ref: process (clk) begin

if rising_edge(clk) then
conteo <= conteo + 1;
end if;
end process;

thor <= STD_LOGIC_VECTOR (conteo);
end Behavioral;

