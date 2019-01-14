/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *XILINXCORELIB_P_1837083571;
char *XILINXCORELIB_P_3381355550;
char *XILINXCORELIB_P_3743709326;
char *IEEE_P_3620187407;
char *XILINXCORELIB_P_1419404220;
char *XILINXCORELIB_P_2342578331;
char *XILINXCORELIB_P_2201174634;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    ieee_p_1242562249_init();
    std_textio_init();
    xilinxcorelib_p_1837083571_init();
    xilinxcorelib_p_3381355550_init();
    xilinxcorelib_p_3743709326_init();
    ieee_p_3620187407_init();
    xilinxcorelib_p_1419404220_init();
    xilinxcorelib_p_2342578331_init();
    xilinxcorelib_p_2201174634_init();
    xilinxcorelib_a_2324210738_3212880686_init();
    xilinxcorelib_a_0879150800_3212880686_init();
    work_a_1153420228_1269452356_init();
    work_a_1774854872_3212880686_init();
    work_a_1985558087_2372691052_init();


    xsi_register_tops("work_a_1985558087_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    XILINXCORELIB_P_1837083571 = xsi_get_engine_memory("xilinxcorelib_p_1837083571");
    XILINXCORELIB_P_3381355550 = xsi_get_engine_memory("xilinxcorelib_p_3381355550");
    XILINXCORELIB_P_3743709326 = xsi_get_engine_memory("xilinxcorelib_p_3743709326");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    XILINXCORELIB_P_1419404220 = xsi_get_engine_memory("xilinxcorelib_p_1419404220");
    XILINXCORELIB_P_2342578331 = xsi_get_engine_memory("xilinxcorelib_p_2342578331");
    XILINXCORELIB_P_2201174634 = xsi_get_engine_memory("xilinxcorelib_p_2201174634");

    return xsi_run_simulation(argc, argv);

}
