
-- VHDL Instantiation Created from source file contador.vhd -- 19:48:35 04/02/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT contador
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		ce : IN std_logic;          
		count : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_contador: contador PORT MAP(
		clk => ,
		reset => ,
		ce => ,
		count => 
	);


