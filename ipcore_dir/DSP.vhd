--------------------------------------------------------------------------------
--     (c) Copyright 1995 - 2010 Xilinx, Inc. All rights reserved.            --
--                                                                            --
--     This file contains confidential and proprietary information            --
--     of Xilinx, Inc. and is protected under U.S. and                        --
--     international copyright and other intellectual property                --
--     laws.                                                                  --
--                                                                            --
--     DISCLAIMER                                                             --
--     This disclaimer is not a license and does not grant any                --
--     rights to the materials distributed herewith. Except as                --
--     otherwise provided in a valid license issued to you by                 --
--     Xilinx, and to the maximum extent permitted by applicable              --
--     law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND                --
--     WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES            --
--     AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING              --
--     BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-                 --
--     INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and               --
--     (2) Xilinx shall not be liable (whether in contract or tort,           --
--     including negligence, or under any other theory of                     --
--     liability) for any loss or damage of any kind or nature                --
--     related to, arising under or in connection with these                  --
--     materials, including for any direct, or any indirect,                  --
--     special, incidental, or consequential loss or damage                   --
--     (including loss of data, profits, goodwill, or any type of             --
--     loss or damage suffered as a result of any action brought              --
--     by a third party) even if such damage or loss was                      --
--     reasonably foreseeable or Xilinx had been advised of the               --
--     possibility of the same.                                               --
--                                                                            --
--     CRITICAL APPLICATIONS                                                  --
--     Xilinx products are not designed or intended to be fail-               --
--     safe, or for use in any application requiring fail-safe                --
--     performance, such as life-support or safety devices or                 --
--     systems, Class III medical devices, nuclear facilities,                --
--     applications related to the deployment of airbags, or any              --
--     other applications that could lead to death, personal                  --
--     injury, or severe property or environmental damage                     --
--     (individually and collectively, "Critical                              --
--     Applications"). Customer assumes the sole risk and                     --
--     liability of any use of Xilinx products in Critical                    --
--     Applications, subject only to applicable laws and                      --
--     regulations governing limitations on product liability.                --
--                                                                            --
--     THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS               --
--     PART OF THIS FILE AT ALL TIMES.                                        --
--------------------------------------------------------------------------------

--  Generated from component ID: xilinx.com:ip:cmpy:3.1


-- You must compile the wrapper file DSP.vhd when simulating
-- the core, DSP. When compiling the wrapper file, be sure to
-- reference the XilinxCoreLib VHDL simulation library. For detailed
-- instructions, please refer to the "CORE Generator Help".

-- The synthesis directives "translate_off/translate_on" specified
-- below are supported by Xilinx, Mentor Graphics and Synplicity
-- synthesis tools. Ensure they are correct for your synthesis tool(s).

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
-- synthesis translate_off
Library XilinxCoreLib;
-- synthesis translate_on
ENTITY DSP IS
	port (
	ar: in std_logic_vector(13 downto 0);
	ai: in std_logic_vector(13 downto 0);
	br: in std_logic_vector(13 downto 0);
	bi: in std_logic_vector(13 downto 0);
	clk: in std_logic;
	pr: out std_logic_vector(28 downto 0);
	pi: out std_logic_vector(28 downto 0));
END DSP;

ARCHITECTURE DSP_a OF DSP IS
-- synthesis translate_off
component wrapped_DSP
	port (
	ar: in std_logic_vector(13 downto 0);
	ai: in std_logic_vector(13 downto 0);
	br: in std_logic_vector(13 downto 0);
	bi: in std_logic_vector(13 downto 0);
	clk: in std_logic;
	pr: out std_logic_vector(28 downto 0);
	pi: out std_logic_vector(28 downto 0));
end component;

-- Configuration specification 
	for all : wrapped_DSP use entity XilinxCoreLib.cmpy_v3_1(behavioral)
		generic map(
			c_a_width => 14,
			c_ce_overrides_sclr => 0,
			has_negate => 0,
			c_has_sclr => 0,
			c_out_high => 28,
			c_verbosity => 0,
			c_mult_type => 1,
			c_latency => 6,
			c_xdevice => "xc6slx4",
			c_has_ce => 0,
			single_output => 0,
			round => 0,
			use_dsp_cascades => 1,
			c_optimize_goal => 0,
			c_xdevicefamily => "spartan6",
			c_out_low => 0,
			c_b_width => 14);
-- synthesis translate_on
BEGIN
-- synthesis translate_off
U0 : wrapped_DSP
		port map (
			ar => ar,
			ai => ai,
			br => br,
			bi => bi,
			clk => clk,
			pr => pr,
			pi => pi);
-- synthesis translate_on

END DSP_a;

