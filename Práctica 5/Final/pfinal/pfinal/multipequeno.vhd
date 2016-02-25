----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:13:11 05/07/2014 
-- Design Name: 
-- Module Name:    multipequeno - Behavioral 
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

entity multipequeno is
    Port ( coche0 : in  STD_LOGIC;
           coche1 : in  STD_LOGIC;
           coche2 : in  STD_LOGIC;
           coche3 : in  STD_LOGIC;
           selector : in  STD_LOGIC_VECTOR (1 downto 0);
           atasco : out  STD_LOGIC);
end multipequeno;

architecture Behavioral of multipequeno is

begin

 with selector select
      atasco <= coche0 when "00",
                coche1 when "01",
					 coche2 when "10",
					 coche3 when "11",
                '0' when others;

end Behavioral;

