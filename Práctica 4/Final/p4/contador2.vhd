----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:13:28 04/09/2014 
-- Design Name: 
-- Module Name:    contador2 - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity contador2 is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           ce : in  STD_LOGIC;
           count : out  STD_LOGIC_VECTOR (3 downto 0));
end contador2;

architecture Behavioral of contador2 is
signal int_count: STD_LOGIC_VECTOR (3 downto 0);
begin
process (clk, reset)

begin
if reset = '1' then
int_count <= (others => '0');
elsif clk = '1' and clk' event then

if ce = '1' then
int_count <= int_count +1;
end if;

end if;

if int_count <= 9 then
int_count <= "0000";
end if;

end process;
count <= int_count;

end Behavioral;

