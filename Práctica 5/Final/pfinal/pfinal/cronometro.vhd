----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:20:02 04/22/2014 
-- Design Name: 
-- Module Name:    cronometro - Behavioral 
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

entity cronometro is
PORT(
		clk   : IN  STD_LOGIC;
		reset : IN  STD_LOGIC;
		sd		: OUT STD_LOGIC_VECTOR(6 downto 0);
		an0 : OUT STD_LOGIC;
		an1 : OUT STD_LOGIC;
		an2 : OUT STD_LOGIC;
		an3 : OUT STD_LOGIC
	);
end cronometro;

architecture Behavioral of cronometro is

COMPONENT clkseg 
Port ( clk : in  STD_LOGIC;
           sali : out  STD_LOGIC;
			  refr : out STD_LOGIC);
END COMPONENT;
	
	component contador 
		Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  counts : out  STD_LOGIC_VECTOR (3 downto 0);
				countds : out  STD_LOGIC_VECTOR (3 downto 0);
			  countm : out  STD_LOGIC_VECTOR (3 downto 0);
			  countdm : out  STD_LOGIC_VECTOR (3 downto 0));
END COMPONENT;

COMPONENT multi
	PORT(
		bahia0 : IN std_logic_vector(3 downto 0);
		bahia1 : IN std_logic_vector(3 downto 0);
		bahia2 : IN std_logic_vector(3 downto 0);
		bahia3 : IN std_logic_vector(3 downto 0);
		selec : IN std_logic_vector(1 downto 0);          
		playa : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT refresco
	PORT(
		clk : IN std_logic;          
		thor : OUT std_logic_vector(1 downto 0)
		);
	END COMPONENT;
	
	COMPONENT decod
	PORT(
		bcd : IN std_logic_vector(3 downto 0);          
		led : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;
	
	COMPONENT demux 
    PORT ( entr : in  STD_LOGIC;
           entr_selec : in  STD_LOGIC_VECTOR (1 downto 0);
           an0 : out  STD_LOGIC := '1';
           an1 : out  STD_LOGIC := '1';
           an2 : out  STD_LOGIC := '1';
           an3 : out  STD_LOGIC := '1');
END COMPONENT demux;

signal seg_out : STD_LOGIC := '0';
signal refr_out : STD_LOGIC := '0';
signal S0, SS0, M0, MM0 : STD_LOGIC_VECTOR(3 downto 0);
signal vayavaya : STD_LOGIC_VECTOR (3 downto 0);
signal cocacola : STD_LOGIC_VECTOR (1 downto 0);
signal cerocero : STD_LOGIC := '0';

begin

	reloj: clkseg PORT MAP(
	clk => clk,
	sali => seg_out,
	refr => refr_out
	);
	
	cont: contador PORT MAP(
	clk => seg_out,
	reset => reset,
	counts => S0,
	countds => SS0, 
	countm => M0,
	countdm => MM0
	);
	
	Inst_multi: multi PORT MAP(
		bahia0 => S0,
		bahia1 => SS0,
		bahia2 => M0,
		bahia3 => MM0,
		selec => cocacola,
		playa => vayavaya
	);

	Inst_refresco: refresco PORT MAP(
		clk => refr_out,
		thor => cocacola
	);
	
	Inst_decodificador: decod PORT MAP(
		bcd => vayavaya,
		led => sd
	);
	
		Inst_demux: demux PORT MAP(
		entr => cerocero,
		entr_selec => cocacola,
		an0 => an0,
		an1 => an1,
		an2 => an2,
		an3 => an3
	);

		
end Behavioral;

