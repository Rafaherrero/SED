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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Rafa/Desktop/Final/pfinal/pfinal/contador/contador.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );


static void work_a_2187592342_3212880686_p_0(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned char t25;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 8551);
    t6 = (t0 + 5248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 8555);
    t5 = (t0 + 5312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 8559);
    t5 = (t0 + 5376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 8563);
    t5 = (t0 + 5440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t5 = (t0 + 8460U);
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t6, t5, 1);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t16 = (4U != t15);
    if (t16 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 5248);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 8460U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 9);
    if (t3 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 8476U);
    t4 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 5);
    if (t4 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8492U);
    t11 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 9);
    if (t11 == 1)
        goto LAB31;

LAB32:    t4 = (unsigned char)0;

LAB33:    if (t4 == 1)
        goto LAB28;

LAB29:    t3 = (unsigned char)0;

LAB30:    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8508U);
    t12 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 5);
    if (t12 == 1)
        goto LAB45;

LAB46:    t11 = (unsigned char)0;

LAB47:    if (t11 == 1)
        goto LAB42;

LAB43:    t4 = (unsigned char)0;

LAB44:    if (t4 == 1)
        goto LAB39;

LAB40:    t3 = (unsigned char)0;

LAB41:    if (t3 != 0)
        goto LAB36;

LAB38:
LAB37:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 8460U);
    t12 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 0);
    if (t12 == 1)
        goto LAB57;

LAB58:    t11 = (unsigned char)0;

LAB59:    if (t11 == 1)
        goto LAB54;

LAB55:    t4 = (unsigned char)0;

LAB56:    if (t4 == 1)
        goto LAB51;

LAB52:    t3 = (unsigned char)0;

LAB53:    if (t3 != 0)
        goto LAB48;

LAB50:
LAB49:    goto LAB3;

LAB7:    t1 = (t0 + 992U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(4U, t15, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 8476U);
    t7 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t6, t5, 1);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t4 = (4U != t15);
    if (t4 == 1)
        goto LAB15;

LAB16:    t9 = (t0 + 5312);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 8567);
    t5 = (t0 + 5248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB13;

LAB15:    xsi_size_not_matching(4U, t15, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(79, ng0);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 8492U);
    t9 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t8, t7, 1);
    t10 = (t13 + 12U);
    t14 = *((unsigned int *)t10);
    t15 = (1U * t14);
    t12 = (4U != t15);
    if (t12 == 1)
        goto LAB23;

LAB24:    t17 = (t0 + 5376);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 8571);
    t5 = (t0 + 5312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB18;

LAB20:    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t5 = (t0 + 8460U);
    t11 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t6, t5, 9);
    t3 = t11;
    goto LAB22;

LAB23:    xsi_size_not_matching(4U, t15, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(85, ng0);
    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t9 = (t0 + 8508U);
    t17 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t10, t9, 1);
    t18 = (t13 + 12U);
    t14 = *((unsigned int *)t18);
    t15 = (1U * t14);
    t22 = (4U != t15);
    if (t22 == 1)
        goto LAB34;

LAB35:    t19 = (t0 + 5440);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t17, 4U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 8575);
    t5 = (t0 + 5376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB26;

LAB28:    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t7 = (t0 + 8460U);
    t16 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t8, t7, 9);
    t3 = t16;
    goto LAB30;

LAB31:    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 8476U);
    t12 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t6, t5, 5);
    t4 = t12;
    goto LAB33;

LAB34:    xsi_size_not_matching(4U, t15, 0);
    goto LAB35;

LAB36:    xsi_set_current_line(90, ng0);
    t17 = (t0 + 8579);
    t19 = (t0 + 5440);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t17, 4U);
    xsi_driver_first_trans_fast(t19);
    goto LAB37;

LAB39:    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t9 = (t0 + 8460U);
    t25 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t10, t9, 9);
    t3 = t25;
    goto LAB41;

LAB42:    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t7 = (t0 + 8476U);
    t22 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t8, t7, 5);
    t4 = t22;
    goto LAB44;

LAB45:    t5 = (t0 + 2312U);
    t6 = *((char **)t5);
    t5 = (t0 + 8492U);
    t16 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t6, t5, 9);
    t11 = t16;
    goto LAB47;

LAB48:    xsi_set_current_line(95, ng0);
    t17 = (t0 + 5504);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB49;

LAB51:    t9 = (t0 + 2472U);
    t10 = *((char **)t9);
    t9 = (t0 + 8508U);
    t25 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t10, t9, 0);
    t3 = t25;
    goto LAB53;

LAB54:    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t7 = (t0 + 8492U);
    t22 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t8, t7, 0);
    t4 = t22;
    goto LAB56;

LAB57:    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 8476U);
    t16 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t6, t5, 0);
    t11 = t16;
    goto LAB59;

}

static void work_a_2187592342_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(102, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5568);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5120);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2187592342_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(103, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5632);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5136);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2187592342_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(104, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5696);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5152);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2187592342_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(105, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5168);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2187592342_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2187592342_3212880686_p_0,(void *)work_a_2187592342_3212880686_p_1,(void *)work_a_2187592342_3212880686_p_2,(void *)work_a_2187592342_3212880686_p_3,(void *)work_a_2187592342_3212880686_p_4};
	xsi_register_didat("work_a_2187592342_3212880686", "isim/cronometro_tb_isim_beh.exe.sim/work/a_2187592342_3212880686.didat");
	xsi_register_executes(pe);
}
