----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:15:34 04/02/2014 
-- Design Name: 
-- Module Name:    contador - Behavioral 
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

entity contador is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  -- Contador de segundos (hasta 9)
           counts : out  STD_LOGIC_VECTOR (3 downto 0);
			  -- Contador de decenas de los segundos (hasta 5)
			  countds : out  STD_LOGIC_VECTOR (3 downto 0);
			  -- Contador de minutos (hasta 9)
			  countm : out  STD_LOGIC_VECTOR (3 downto 0);
			  -- Contador de decenas de minutos (hasta 5)
			  countdm : out  STD_LOGIC_VECTOR (3 downto 0));
end contador;

architecture Behavioral of contador is

	-- Utilizamos estas señales para ir contando los segundos,
	-- decenas de segundos, minutos, y decenas de minutos.
	signal s: UNSIGNED(3 downto 0) := "0000" ;
	signal ds: UNSIGNED(3 downto 0) := "0000";
	signal m: UNSIGNED(3 downto 0) := "0000" ;
	signal dm: UNSIGNED(3 downto 0) := "0000";
	signal apocalipsis: STD_LOGIC := '0';	
begin

cont: process (clk, reset) begin

-- Si el boton de reset vale 1, todo a 0
if (reset = '1') then -- or apocalipsis = '1') then
s <= "0000";
ds <= "0000";
m <= "0000";
dm <= "0000";

-- Cuando detecte señal del reloj, aumenta un segundo (ss)
elsif clk='1' and clk'event then
s <= s + 1;

-- Si se llega a 9, las decenas de segundo aumentan 1
if s = 9 then
ds <= ds + 1;
s <= "0000";
end if;

-- Si las decenas de segundo llegan a 5, los minutos aumentan 1
if ds = 5 and s = 9 then
m <= m + 1;
ds <= "0000";
end if;

-- Si los minutos llegan a 9, las decenas de minutos aumentan 1
if m = 9 and ds = 5 and s = 9 then
dm <= dm + 1;
m <= "0000";
end if;

if dm = 5 and m = 9 and ds = 5 and s = 9 then
dm <= "0000";
end if;

-- Si se llega a 59:59, vuelve a empezar el contador
if s = 0 and ds = 0 and m = 0 and dm = 0 then
apocalipsis <= '1';
end if;
end if;
end process; 

-- Tendremos que asignar los segundos y minutos a las salidas del modulo

counts <= STD_LOGIC_VECTOR (s);
countds <= STD_LOGIC_VECTOR (ds);
countm <= STD_LOGIC_VECTOR (m);
countdm <= STD_LOGIC_VECTOR (dm);

end Behavioral;

