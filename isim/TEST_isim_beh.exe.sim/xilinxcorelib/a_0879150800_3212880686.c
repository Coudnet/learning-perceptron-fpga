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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
static const char *ng1 = "Function fn_bypass_sense ended without a return statement";
extern char *IEEE_P_0774719531;
extern char *IEEE_P_1242562249;

char *ieee_p_0774719531_sub_767632659_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3410769178_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


unsigned char xilinxcorelib_a_0879150800_3212880686_sub_653780843_3057020925(char *t1, int t2, int t3)
{
    char t4[72];
    char t5[16];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;

LAB0:    t6 = (t4 + 4U);
    t7 = ((IEEE_P_2592010699) + 1912);
    t8 = (t6 + 52U);
    *((char **)t8) = t7;
    t10 = (t6 + 36U);
    *((char **)t10) = t9;
    *((unsigned char *)t9) = (unsigned char)3;
    t11 = (t6 + 48U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t15 = (t2 == 0);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t3 == 0);
    t14 = t16;

LAB7:    if (t14 != 0)
        goto LAB2;

LAB4:    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)2;
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t0 = t14;

LAB1:    return t0;
LAB2:    t17 = (t6 + 36U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((unsigned char *)t17) = (unsigned char)3;
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t0 = t14;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    t14 = (unsigned char)1;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

static void xilinxcorelib_a_0879150800_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:
LAB3:    t1 = (t0 + 7188);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xilinxcorelib_a_0879150800_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:
LAB3:    t1 = (t0 + 7224);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void xilinxcorelib_a_0879150800_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = (t0 + 1524U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7260);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7080);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xilinxcorelib_a_0879150800_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:
LAB3:    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7296);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 7088);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xilinxcorelib_a_0879150800_3212880686_p_4(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:
LAB3:    t1 = (t0 + 1892U);
    t2 = *((char **)t1);
    t3 = (15 - 1);
    t4 = (t3 - 14);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 1892U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 2332);
    t13 = (t0 + 13464U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)99, t8, (char)97, t10, t13, (char)101);
    t14 = (1U + 15U);
    t15 = (16U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 7332);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 16U);
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 7096);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t14, 0);
    goto LAB6;

}

static void xilinxcorelib_a_0879150800_3212880686_p_5(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:
LAB3:    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    t3 = (15 - 1);
    t4 = (t3 - 14);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 1984U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 2332);
    t13 = (t0 + 13480U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)99, t8, (char)97, t10, t13, (char)101);
    t14 = (1U + 15U);
    t15 = (16U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 7368);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 16U);
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 7104);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t14, 0);
    goto LAB6;

}

static void xilinxcorelib_a_0879150800_3212880686_p_6(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:
LAB3:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 13512U);
    t4 = (t0 + 2260U);
    t5 = *((char **)t4);
    t4 = (t0 + 13528U);
    t6 = ieee_p_0774719531_sub_767632659_2162500114(IEEE_P_0774719531, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 7404);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 7112);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void xilinxcorelib_a_0879150800_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:
LAB3:    t1 = (t0 + 2352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4804U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (31 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 7440);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 30U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7120);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xilinxcorelib_a_0879150800_3212880686_p_8(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:
LAB3:    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 13608U);
    t4 = (t0 + 4736U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t4 = ieee_p_1242562249_sub_3410769178_1035706684(IEEE_P_1242562249, t1, t3, t2, t6);
    t7 = (t0 + 7476);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 48U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 7128);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xilinxcorelib_a_0879150800_3212880686_p_9(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 1408U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    t3 = (t0 + 2812U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2720U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    t3 = xsi_get_transient_memory(48U);
    memset(t3, 0, 48U);
    t7 = t3;
    memset(t7, (unsigned char)2, 48U);
    t8 = (t0 + 7512);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 48U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    t1 = (t0 + 2904U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 4396U);
    t7 = *((char **)t1);
    t13 = *((unsigned char *)t7);
    t14 = (t6 == t13);
    if (t14 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 2996U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 2444U);
    t3 = *((char **)t1);
    t1 = (t0 + 13560U);
    t4 = (t0 + 2536U);
    t7 = *((char **)t4);
    t4 = (t0 + 13576U);
    t8 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t15, t3, t1, t7, t4);
    t9 = (t15 + 12U);
    t16 = *((unsigned int *)t9);
    t17 = (1U * t16);
    t2 = (48U != t17);
    if (t2 == 1)
        goto LAB18;

LAB19:    t10 = (t0 + 7512);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t18 = (t12 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 48U);
    xsi_driver_first_trans_fast(t10);

LAB14:
LAB11:    goto LAB6;

LAB10:    t1 = (t0 + 2536U);
    t8 = *((char **)t1);
    t1 = (t0 + 7512);
    t9 = (t1 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 48U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    t1 = (t0 + 2444U);
    t4 = *((char **)t1);
    t1 = (t0 + 13560U);
    t7 = (t0 + 2536U);
    t8 = *((char **)t7);
    t7 = (t0 + 13576U);
    t9 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t15, t4, t1, t8, t7);
    t10 = (t15 + 12U);
    t16 = *((unsigned int *)t10);
    t17 = (1U * t16);
    t6 = (48U != t17);
    if (t6 == 1)
        goto LAB16;

LAB17:    t11 = (t0 + 7512);
    t12 = (t11 + 32U);
    t18 = *((char **)t12);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 48U);
    xsi_driver_first_trans_fast(t11);
    goto LAB14;

LAB16:    xsi_size_not_matching(48U, t17, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(48U, t17, 0);
    goto LAB19;

}

static void xilinxcorelib_a_0879150800_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:
LAB3:    t1 = (t0 + 2444U);
    t2 = *((char **)t1);
    t1 = (t0 + 4736U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (47 - t5);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 7548);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 16U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 7144);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void xilinxcorelib_a_0879150800_3212880686_init()
{
	static char *pe[] = {(void *)xilinxcorelib_a_0879150800_3212880686_p_0,(void *)xilinxcorelib_a_0879150800_3212880686_p_1,(void *)xilinxcorelib_a_0879150800_3212880686_p_2,(void *)xilinxcorelib_a_0879150800_3212880686_p_3,(void *)xilinxcorelib_a_0879150800_3212880686_p_4,(void *)xilinxcorelib_a_0879150800_3212880686_p_5,(void *)xilinxcorelib_a_0879150800_3212880686_p_6,(void *)xilinxcorelib_a_0879150800_3212880686_p_7,(void *)xilinxcorelib_a_0879150800_3212880686_p_8,(void *)xilinxcorelib_a_0879150800_3212880686_p_9,(void *)xilinxcorelib_a_0879150800_3212880686_p_10};
	static char *se[] = {(void *)xilinxcorelib_a_0879150800_3212880686_sub_653780843_3057020925};
	xsi_register_didat("xilinxcorelib_a_0879150800_3212880686", "isim/TEST_isim_beh.exe.sim/xilinxcorelib/a_0879150800_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
