----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:21:28 04/22/2014 
-- Design Name: 
-- Module Name:    clkseg - Behavioral 
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
use IEEE.NUMERIC_STD.all;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity clkseg is
    Port ( clk : in  STD_LOGIC;
           sali : out  STD_LOGIC;
			  refr : out STD_LOGIC);
end clkseg;

architecture Behavioral of clkseg is

signal temp: STD_LOGIC := '0';
signal contador: integer range 0 to 24999999 := 0;

signal temp_refr: STD_LOGIC := '0';
signal cont_refr: integer range 0 to 11499 := 0;

begin

 frecuencia: process (clk) begin
 
  if clk='1' and clk'event then
 
 contador <= contador + 1;
 cont_refr <= cont_refr + 1;
 
	if (contador = 24999999) then
	temp <= NOT(temp);
	contador <= 0;
		end if;
		
	if (cont_refr = 11499) then
	temp_refr <= NOT (temp_refr);
	cont_refr <= 0;
	end if;
	
 end if;
  sali <= temp;
  refr <= temp_refr;
 end process;
 
 
 -- Esta salida se activará cada segundo. Se únira a la entrada
 -- del contador en el programa principal.

 
 -- Esta salida se activará cada 25 fps. Refresco de leds.
 
 end Behavioral;

