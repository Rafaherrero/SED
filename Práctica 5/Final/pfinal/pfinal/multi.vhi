
-- VHDL Instantiation Created from source file multi.vhd -- 19:01:45 05/07/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

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

	Inst_multi: multi PORT MAP(
		bahia0 => ,
		bahia1 => ,
		bahia2 => ,
		bahia3 => ,
		selec => ,
		playa => 
	);


