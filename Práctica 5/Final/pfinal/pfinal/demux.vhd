----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:47:30 05/11/2014 
-- Design Name: 
-- Module Name:    demux - Behavioral 
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

entity demux is
    Port ( entr : in  STD_LOGIC;
           entr_selec : in  STD_LOGIC_VECTOR (1 downto 0);
           an0 : out  STD_LOGIC := '1';
           an1 : out  STD_LOGIC := '1';
           an2 : out  STD_LOGIC := '1';
           an3 : out  STD_LOGIC := '1');
end demux;

architecture Behavioral of demux is

begin

process (entr, entr_selec)
begin
case entr_selec is

when "00" => an0 <= entr; an1 <= '1'; an2 <= '1'; an3 <= '1';
when "01" => an0 <= '1'; an1 <= entr; an2 <= '1'; an3 <= '1';
when "10" => an0 <= '1'; an1 <= '1'; an2 <= entr; an3 <= '1';
when others => an0 <= '1'; an1 <= '1'; an2 <= '1'; an3 <= entr;
end case;
end process;
end Behavioral;

