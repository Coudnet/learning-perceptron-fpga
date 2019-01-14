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
use IEEE.std_logic_textio.all;
use IEEE.std_logic_arith.all;
use IEEE.numeric_bit.all;
use IEEE.numeric_std.all;
use IEEE.std_logic_signed.all;
use IEEE.std_logic_unsigned.all;
use IEEE.math_real.all;
use IEEE.math_complex.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Main is
    Port ( DATA : in  STD_LOGIC_VECTOR (14 downto 0);
			  CLK : in STD_LOGIC;
           START : in  STD_LOGIC;
           RES : in  STD_LOGIC;
           ENDC : out  STD_LOGIC);
end Main;

architecture Behavioral of Main is

COMPONENT Adder
  PORT (
    clk : IN STD_LOGIC;
    ce : IN STD_LOGIC;
    sclr : IN STD_LOGIC;
    a : IN STD_LOGIC_VECTOR(14 DOWNTO 0);
    b : IN STD_LOGIC_VECTOR(14 DOWNTO 0);
    s : OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
  );
END COMPONENT;

signal weight_t : STD_LOGIC_VECTOR(14 DOWNTO 0) := "111111111111111";
signal result_t : STD_LOGIC_VECTOR(15 DOWNTO 0);
signal sclr_t : STD_LOGIC := '0';
signal endc_t : STD_LOGIC;
signal ce_t : STD_LOGIC;

signal threshold : STD_LOGIC_VECTOR(15 DOWNTO 0) := "000000000000111";
signal active_t : STD_LOGIC;

type condition_type is (INIT, SUM, IDLE, COMPARE, ACTIVATION,  ENDCS, INC, DEC);
signal condition : condition_type := INIT;

signal counter_en : boolean := false;
signal counter_val : integer := 0;

begin

Adder_Inst : Adder
  PORT MAP (
    clk => CLK,
    ce => ce_t,
    sclr => sclr_t,
    a => DATA,
    b => weight_t,
    s => result_t
  );

process(CLK)
begin
	if(CLK'event and CLK = '1') then
		case condition is
			when INIT =>
				endc_t <= '0';
				if(START = '1') then
					condition <= SUM;
				end if;
				
			when SUM =>
				ce_t <= '1';
				counter_en <= true;
				condition <= IDLE;
				
			when IDLE =>
				ce_t <= '1';
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
					if(DATA(i) = '1') then
						weight_t(i) <= weight_t(i) + 1;
					end if;
				end loop;
				condition <= ENDCS;
				
			when DEC => 
				for i in 0 to 14 loop
					if(DATA(i) = '1') then
						weight_t(i) <= weight_t(i) - 1;
					end if;
				end loop;
				condition <= ENDCS;
				
			when ENDCS => 
				endc_t <= '1';
				condition <= INIT;
		end case;

		if(counter_en = true) then
			counter_val <= counter_val + 1;
		else 
			counter_val <= 0;
		end if;
	end if;
end process;

ENDC <= endc_t;

end Behavioral;

