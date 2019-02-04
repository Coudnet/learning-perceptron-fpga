----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:52:45 01/14/2019 
-- Design Name: 
-- Module Name:    Main - Behavioral 
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


use IEEE.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Main is
    Port ( DATAIN : in  STD_LOGIC_VECTOR (14 downto 0);
			  CLK : in STD_LOGIC;
           START : in  STD_LOGIC;
           RES : in  STD_LOGIC;
			  STARTREAD : in STD_LOGIC;
           ENDC : out  STD_LOGIC;
           DATA_READY : out  STD_LOGIC;
			  DATAOUT : out  STD_LOGIC_VECTOR (15 downto 0)
			  );
end Main;

architecture Behavioral of Main is

COMPONENT MULTIPLY
  PORT (
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    sclr : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    c : IN STD_LOGIC_VECTOR(19 DOWNTO 0);
    subtract : IN STD_LOGIC;
    p : OUT STD_LOGIC_VECTOR(19 DOWNTO 0);
    pcout : OUT STD_LOGIC_VECTOR(47 DOWNTO 0)
  );
END COMPONENT;

COMPONENT INCREMENT
  PORT (
    a : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    clk : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;

COMPONENT DECREMENT
  PORT (
    a : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    clk : IN STD_LOGIC;
    s : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;

signal result_t : STD_LOGIC_VECTOR(19 DOWNTO 0);

signal endc_t : STD_LOGIC;

type weights is array (15 DOWNTO 0) of STD_LOGIC_VECTOR(15 DOWNTO 0);
signal weights_t : weights;

signal threshold : STD_LOGIC_VECTOR(20 DOWNTO 0) := "000000000000000000111";
signal active_t : STD_LOGIC;

type condition_type is (INIT, SUM, IDLE, COMPARE, ACTIVATION,  ENDCS, INC, DEC, START_READ);
signal condition : condition_type := INIT;

signal counter_en : boolean := false;
signal counter_val : integer := 0;

signal weights_value_conter_t : integer := 0;
signal data_out_t : STD_LOGIC_VECTOR(15 DOWNTO 0);
signal data_ready_t : STD_LOGIC := '0';

signal multiply_clk_t : STD_LOGIC;
signal multiply_ce_t : STD_LOGIC := '1';
signal multiply_sclr_t : STD_LOGIC := '0';
signal multiply_a : STD_LOGIC_VECTOR(0 DOWNTO 0);
signal multiply_b : STD_LOGIC_VECTOR(15 DOWNTO 0);
signal multiply_c : STD_LOGIC_VECTOR(19 DOWNTO 0);
signal multiply_res : STD_LOGIC_VECTOR(19 DOWNTO 0);
signal multiply_pcout : STD_LOGIC_VECTOR(47 DOWNTO 0);
signal multiply_subtract : STD_LOGIC := '0';

signal inc_clk : STD_LOGIC;
signal inc_in : STD_LOGIC_VECTOR(15 DOWNTO 0);
signal inc_res : STD_LOGIC_VECTOR(15 DOWNTO 0);

signal dec_clk : STD_LOGIC;
signal dec_in : STD_LOGIC_VECTOR(15 DOWNTO 0);
signal dec_res : STD_LOGIC_VECTOR(15 DOWNTO 0);

begin

MULTIPLYINST : MULTIPLY
  PORT MAP (
	 clk => multiply_clk_t,
	 ce => multiply_ce_t,
	 sclr => multiply_sclr_t,
	 a => multiply_a,
	 b => multiply_b,
	 c => multiply_c,
	 subtract => multiply_subtract,
	 p => multiply_res,
	 pcout => multiply_pcout
  );
	  
INCREMENTINST : INCREMENT
	PORT MAP (
		a => inc_in,
		clk => inc_clk,
		s => inc_res
	);
	
DECREMENTINST : DECREMENT
	PORT MAP (
		a => dec_in,
		clk => dec_clk,
		s => dec_res
	);
	
process(CLK)
begin
	if(CLK'event and CLK = '1') then
		case condition is
			when INIT =>
				endc_t <= '0';
				data_ready_t <= '0';
				if(START = '1') then
					condition <= SUM;
				elsif(STARTREAD = '1') then
					condition <= START_READ;
				end if;
				
			when SUM =>
				result_t <= "00000000000000000000";
				for i in 0 to 14 loop
					multiply_a(0) <= DATAIN(i);
					multiply_b <= weights_t(i);
					multiply_c <= result_t;
					multiply_clk_t <= '1';
					multiply_clk_t <= '0';
					result_t <= multiply_res;
				end loop;
				condition <= ACTIVATION;
				
			when IDLE =>
				if(counter_val = 3) then 
					condition <= ACTIVATION;
				end if;
				
			when ACTIVATION =>
				if(result_t > threshold) then
					active_t <= '1';
				else 
					active_t <= '0';
				end if;
				condition <= COMPARE;
				
			when COMPARE =>
				if(RES = '0' and active_t = '0') then
					condition <= ENDCS;
				elsif(RES = '0' and active_t = '1') then
					condition <= DEC;
				elsif(RES = '1' and active_t = '0') then
					condition <= INC;
				elsif(RES = '1' and active_t = '1') then
					condition <= ENDCS;
				end if;
				
			when INC => 
				for i in 0 to 14 loop
					if(DATAIN(i) = '1') then
						inc_in <= weights_t(i);
						inc_clk <= '1';
						inc_clk <= '0';
						weights_t(i) <= inc_res;
					end if;
				end loop;
				condition <= ENDCS;
				
			when DEC => 
				for i in 0 to 14 loop
					if(DATAIN(i) = '1') then
						dec_in <= weights_t(i);
						dec_clk <= '1';
						dec_clk <= '0';
						weights_t(i) <= dec_res;
					end if;
				end loop;
				condition <= ENDCS;
				
			when ENDCS => 
				endc_t <= '1';
				condition <= INIT;
				
			when START_READ => 
				if(weights_value_conter_t = 15) then 
					weights_value_conter_t <= 0;
					condition <= INIT;
				else 
					data_out_t <= weights_t(weights_value_conter_t);
					weights_value_conter_t <= weights_value_conter_t + 1;
					data_ready_t <= '1';
					condition <= INIT;
				end if;
				
		end case;

		if(counter_en = true) then
			counter_val <= counter_val + 1;
		else 
			counter_val <= 0;
		end if;
	end if;
end process;

ENDC <= endc_t;
DATAOUT <= data_out_t;
DATA_READY <= data_ready_t;

end Behavioral;

