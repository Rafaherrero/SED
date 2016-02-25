
-- VHDL Instantiation Created from source file cronometro.vhd -- 16:06:04 05/11/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT cronometro
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		ce : IN std_logic;          
		sd : OUT std_logic_vector(7 downto 0);
		mux : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_cronometro: cronometro PORT MAP(
		clk => ,
		reset => ,
		ce => ,
		sd => ,
		mux => 
	);


