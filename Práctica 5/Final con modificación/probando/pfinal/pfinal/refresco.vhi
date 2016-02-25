
-- VHDL Instantiation Created from source file refresco.vhd -- 16:06:10 05/11/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT refresco
	PORT(
		relojito : IN std_logic;          
		thor : OUT std_logic_vector(1 downto 0)
		);
	END COMPONENT;

	Inst_refresco: refresco PORT MAP(
		relojito => ,
		thor => 
	);


