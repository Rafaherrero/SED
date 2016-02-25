----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:26:22 05/11/2014 
-- Design Name: 
-- Module Name:    ledbonito - Behavioral 
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

entity ledbonito is
    Port ( ledce : in  STD_LOGIC;
           ledsalida : out  STD_LOGIC := '0' );
end ledbonito;

architecture Behavioral of ledbonito is

begin
process (ledce) begin
if (ledce = '1') then
ledsalida <= '0';
end if;
end process;
end Behavioral;

