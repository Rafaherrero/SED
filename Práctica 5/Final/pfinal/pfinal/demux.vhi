
-- VHDL Instantiation Created from source file demux.vhd -- 16:48:52 05/11/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT demux
	PORT(
		entr : IN std_logic;
		entr_selec : IN std_logic_vector(1 downto 0);          
		an0 : OUT std_logic;
		an1 : OUT std_logic;
		an2 : OUT std_logic;
		an3 : OUT std_logic
		);
	END COMPONENT;

	Inst_demux: demux PORT MAP(
		entr => ,
		entr_selec => ,
		an0 => ,
		an1 => ,
		an2 => ,
		an3 => 
	);


