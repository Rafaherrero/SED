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
static const char *ng0 = "C:/Users/Rafa/Desktop/probando/pfinal/pfinal/contador/contador.vhd";
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );


static void work_a_2187592342_3212880686_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned char t25;

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB37;

LAB39:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t6 = (t4 == (unsigned char)3);
    if (t6 == 1)
        goto LAB42;

LAB43:    t3 = (unsigned char)0;

LAB44:    if (t3 != 0)
        goto LAB40;

LAB41:
LAB38:
LAB3:    t1 = (t0 + 5424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8960U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 9);
    if (t3 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8976U);
    t4 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 5);
    if (t4 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 8992U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 9);
    if (t3 != 0)
        goto LAB26;

LAB28:
LAB27:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 9008U);
    t4 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 5);
    if (t4 == 1)
        goto LAB34;

LAB35:    t3 = (unsigned char)0;

LAB36:    if (t3 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2472U);
    t9 = *((char **)t1);
    t1 = (t0 + 8960U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t9, t1, 1);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 5568);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB6;

LAB8:    xsi_size_not_matching(4U, t13, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 8992U);
    t9 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t5, t1, 1);
    t10 = (t8 + 12U);
    t12 = *((unsigned int *)t10);
    t13 = (1U * t12);
    t6 = (4U != t13);
    if (t6 == 1)
        goto LAB13;

LAB14:    t11 = (t0 + 5632);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB11;

LAB13:    xsi_size_not_matching(4U, t13, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(84, ng0);
    t5 = (t0 + 2632U);
    t9 = *((char **)t5);
    t5 = (t0 + 8976U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t9, t5, 1);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t4 = (4U != t13);
    if (t4 == 1)
        goto LAB18;

LAB19:    t15 = (t0 + 5696);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 9053);
    t5 = (t0 + 5568);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB16;

LAB18:    xsi_size_not_matching(4U, t13, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(89, ng0);
    t10 = (t0 + 9057);
    t15 = (t0 + 5696);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB21;

LAB23:    t5 = (t0 + 2472U);
    t9 = *((char **)t5);
    t5 = (t0 + 8960U);
    t6 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t9, t5, 9);
    t3 = t6;
    goto LAB25;

LAB26:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 2952U);
    t9 = *((char **)t5);
    t5 = (t0 + 9008U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t9, t5, 1);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t4 = (4U != t13);
    if (t4 == 1)
        goto LAB29;

LAB30:    t15 = (t0 + 5760);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 9061);
    t5 = (t0 + 5632);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB27;

LAB29:    xsi_size_not_matching(4U, t13, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(98, ng0);
    t10 = (t0 + 9065);
    t15 = (t0 + 5760);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB32;

LAB34:    t5 = (t0 + 2792U);
    t9 = *((char **)t5);
    t5 = (t0 + 8992U);
    t6 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t9, t5, 9);
    t3 = t6;
    goto LAB36;

LAB37:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 9069);
    t9 = (t0 + 5568);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 9073);
    t5 = (t0 + 5696);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 9077);
    t5 = (t0 + 5632);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 9081);
    t5 = (t0 + 5760);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB38;

LAB40:    xsi_set_current_line(111, ng0);
    t5 = (t0 + 2472U);
    t9 = *((char **)t5);
    t5 = (t0 + 8960U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t9, t5, 1);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB45;

LAB46:    t15 = (t0 + 5568);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 8960U);
    t3 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 9);
    if (t3 != 0)
        goto LAB47;

LAB49:
LAB48:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 8976U);
    t4 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 5);
    if (t4 == 1)
        goto LAB55;

LAB56:    t3 = (unsigned char)0;

LAB57:    if (t3 != 0)
        goto LAB52;

LAB54:
LAB53:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 8992U);
    t6 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 9);
    if (t6 == 1)
        goto LAB66;

LAB67:    t4 = (unsigned char)0;

LAB68:    if (t4 == 1)
        goto LAB63;

LAB64:    t3 = (unsigned char)0;

LAB65:    if (t3 != 0)
        goto LAB60;

LAB62:
LAB61:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 9008U);
    t7 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t2, t1, 5);
    if (t7 == 1)
        goto LAB80;

LAB81:    t6 = (unsigned char)0;

LAB82:    if (t6 == 1)
        goto LAB77;

LAB78:    t4 = (unsigned char)0;

LAB79:    if (t4 == 1)
        goto LAB74;

LAB75:    t3 = (unsigned char)0;

LAB76:    if (t3 != 0)
        goto LAB71;

LAB73:
LAB72:    goto LAB38;

LAB42:    t1 = (t0 + 992U);
    t7 = xsi_signal_has_event(t1);
    t3 = t7;
    goto LAB44;

LAB45:    xsi_size_not_matching(4U, t13, 0);
    goto LAB46;

LAB47:    xsi_set_current_line(115, ng0);
    t5 = (t0 + 2632U);
    t9 = *((char **)t5);
    t5 = (t0 + 8976U);
    t10 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t9, t5, 1);
    t11 = (t8 + 12U);
    t12 = *((unsigned int *)t11);
    t13 = (1U * t12);
    t4 = (4U != t13);
    if (t4 == 1)
        goto LAB50;

LAB51:    t15 = (t0 + 5696);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 9085);
    t5 = (t0 + 5568);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB48;

LAB50:    xsi_size_not_matching(4U, t13, 0);
    goto LAB51;

LAB52:    xsi_set_current_line(121, ng0);
    t10 = (t0 + 2792U);
    t11 = *((char **)t10);
    t10 = (t0 + 8992U);
    t15 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t11, t10, 1);
    t16 = (t8 + 12U);
    t12 = *((unsigned int *)t16);
    t13 = (1U * t12);
    t7 = (4U != t13);
    if (t7 == 1)
        goto LAB58;

LAB59:    t17 = (t0 + 5632);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 4U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 9089);
    t5 = (t0 + 5696);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB53;

LAB55:    t5 = (t0 + 2472U);
    t9 = *((char **)t5);
    t5 = (t0 + 8960U);
    t6 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t9, t5, 9);
    t3 = t6;
    goto LAB57;

LAB58:    xsi_size_not_matching(4U, t13, 0);
    goto LAB59;

LAB60:    xsi_set_current_line(127, ng0);
    t15 = (t0 + 2952U);
    t16 = *((char **)t15);
    t15 = (t0 + 9008U);
    t17 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t8, t16, t15, 1);
    t18 = (t8 + 12U);
    t12 = *((unsigned int *)t18);
    t13 = (1U * t12);
    t22 = (4U != t13);
    if (t22 == 1)
        goto LAB69;

LAB70:    t19 = (t0 + 5760);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t17, 4U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 9093);
    t5 = (t0 + 5632);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB61;

LAB63:    t10 = (t0 + 2472U);
    t11 = *((char **)t10);
    t10 = (t0 + 8960U);
    t14 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t11, t10, 9);
    t3 = t14;
    goto LAB65;

LAB66:    t5 = (t0 + 2632U);
    t9 = *((char **)t5);
    t5 = (t0 + 8976U);
    t7 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t9, t5, 5);
    t4 = t7;
    goto LAB68;

LAB69:    xsi_size_not_matching(4U, t13, 0);
    goto LAB70;

LAB71:    xsi_set_current_line(132, ng0);
    t17 = (t0 + 9097);
    t19 = (t0 + 5760);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t17, 4U);
    xsi_driver_first_trans_fast(t19);
    goto LAB72;

LAB74:    t15 = (t0 + 2472U);
    t16 = *((char **)t15);
    t15 = (t0 + 8960U);
    t25 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t16, t15, 9);
    t3 = t25;
    goto LAB76;

LAB77:    t10 = (t0 + 2632U);
    t11 = *((char **)t10);
    t10 = (t0 + 8976U);
    t22 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t11, t10, 5);
    t4 = t22;
    goto LAB79;

LAB80:    t5 = (t0 + 2792U);
    t9 = *((char **)t5);
    t5 = (t0 + 8992U);
    t14 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t9, t5, 9);
    t6 = t14;
    goto LAB82;

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

LAB0:    xsi_set_current_line(143, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5824);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5440);
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

LAB0:    xsi_set_current_line(144, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5888);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5456);
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

LAB0:    xsi_set_current_line(145, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 5952);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5472);
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

LAB0:    xsi_set_current_line(146, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 6016);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5488);
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
