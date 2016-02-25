----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:11:52 05/07/2014 
-- Design Name: 
-- Module Name:    multi - Behavioral 
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

entity multi is
    Port ( bahia0 : in  STD_LOGIC_VECTOR (3 downto 0);
           bahia1 : in  STD_LOGIC_VECTOR (3 downto 0);
           bahia2 : in  STD_LOGIC_VECTOR (3 downto 0);
           bahia3 : in  STD_LOGIC_VECTOR (3 downto 0);
           selec : in  STD_LOGIC_VECTOR (1 downto 0);
           playa : out  STD_LOGIC_VECTOR (3 downto 0));
end multi;

architecture Behavioral of multi is

begin

with selec select
      playa <= bahia0 when "00",
                bahia1 when "01",
					 bahia2 when "10",
					 bahia3 when "11",
                "0000" when others;

end Behavioral;

