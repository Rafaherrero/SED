----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:54:42 02/23/2014 
-- Design Name: 
-- Module Name:    funciones - Behavioral 
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

entity funciones is
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           fnot : out  STD_LOGIC;
           fand : out  STD_LOGIC;
           ffor : out  STD_LOGIC;
           fnand : out  STD_LOGIC;
           fnor : out  STD_LOGIC);
end funciones;

architecture Behavioral of funciones is

begin

fnot <= not a;
fand <= a and b;
ffor <= a or b;
fnand <= a nand b;
fnor <= a nor b;

end Behavioral;

