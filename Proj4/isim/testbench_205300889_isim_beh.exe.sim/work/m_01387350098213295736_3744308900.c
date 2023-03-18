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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/CSM152A/Proj4/parking_meter.v";
static unsigned int ng1[] = {50U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {100U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {15U, 0U};
static unsigned int ng8[] = {16U, 0U};
static unsigned int ng9[] = {149U, 0U};
static unsigned int ng10[] = {150U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {59U, 0U};
static unsigned int ng13[] = {9999U, 0U};
static unsigned int ng14[] = {60U, 0U};
static unsigned int ng15[] = {4U, 0U};
static unsigned int ng16[] = {119U, 0U};
static unsigned int ng17[] = {120U, 0U};
static unsigned int ng18[] = {5U, 0U};
static unsigned int ng19[] = {179U, 0U};
static unsigned int ng20[] = {180U, 0U};
static unsigned int ng21[] = {6U, 0U};
static unsigned int ng22[] = {299U, 0U};
static unsigned int ng23[] = {300U, 0U};
static unsigned int ng24[] = {7U, 0U};
static unsigned int ng25[] = {8U, 0U};



static void Always_75_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 8912);
    *((int *)t2) = 1;
    t3 = (t0 + 7136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 3392U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t46, t6, 8);

LAB12:    t74 = (t46 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t46);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 6, t4, 6, t5, 6);
    t12 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 6, 0LL);

LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 5232);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t23 = (t20 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB16;

LAB13:    if (t34 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t22) = 1;

LAB16:    memset(t38, 0, 8);
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t22);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t39) != 0)
        goto LAB19;

LAB20:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t38);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = (t6 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t38) = 1;
    goto LAB20;

LAB19:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB20;

LAB21:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t6);
    t65 = (t64 & t63);
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t38);
    t69 = (t68 & t67);
    t70 = (~(t65));
    t71 = (~(t69));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    goto LAB23;

LAB24:    xsi_set_current_line(77, ng0);
    t80 = ((char*)((ng2)));
    t81 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t81, t80, 0, 0, 6, 0LL);
    goto LAB26;

}

static void Always_82_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t38[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 8928);
    *((int *)t2) = 1;
    t3 = (t0 + 7384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);

LAB5:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 3392U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t46, t6, 8);

LAB12:    t74 = (t46 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t46);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 7, t4, 7, t5, 7);
    t12 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t12, t6, 0, 0, 7, 0LL);

LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 5392);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    t23 = (t20 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB16;

LAB13:    if (t34 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t22) = 1;

LAB16:    memset(t38, 0, 8);
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t22);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t39) != 0)
        goto LAB19;

LAB20:    t47 = *((unsigned int *)t6);
    t48 = *((unsigned int *)t38);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = (t6 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t38) = 1;
    goto LAB20;

LAB19:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB20;

LAB21:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t6);
    t65 = (t64 & t63);
    t66 = *((unsigned int *)t61);
    t67 = (~(t66));
    t68 = *((unsigned int *)t38);
    t69 = (t68 & t67);
    t70 = (~(t65));
    t71 = (~(t69));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    goto LAB23;

LAB24:    xsi_set_current_line(84, ng0);
    t80 = ((char*)((ng2)));
    t81 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t81, t80, 0, 0, 7, 0LL);
    goto LAB26;

}

static void Always_89_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 8944);
    *((int *)t2) = 1;
    t3 = (t0 + 7632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 3392U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2912U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3072U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB14:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 5712);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(95, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 5712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    goto LAB14;

}

static void Always_100_3(char *t0)
{
    char t13[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 7848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 8960);
    *((int *)t2) = 1;
    t3 = (t0 + 7880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 3392U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6032);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(102, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 6032);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(104, ng0);
    t29 = (t0 + 6032);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t32) == 0)
        goto LAB16;

LAB18:    t38 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t38) = 1;

LAB19:    t39 = (t28 + 4);
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (~(t41));
    *((unsigned int *)t28) = t42;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB21;

LAB20:    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & 1U);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 & 1U);
    t49 = (t0 + 6032);
    xsi_vlogvar_wait_assign_value(t49, t28, 0, 0, 1, 0LL);
    goto LAB15;

LAB16:    *((unsigned int *)t28) = 1;
    goto LAB19;

LAB21:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t40);
    *((unsigned int *)t28) = (t43 | t44);
    t45 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t45 | t46);
    goto LAB20;

}

static void Always_109_4(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 8096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 8976);
    *((int *)t2) = 1;
    t3 = (t0 + 8128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 3392U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(111, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 6192);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(113, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 6192);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB15;

}

static void Always_118_5(char *t0)
{
    char t16[8];
    char t17[8];
    char t20[8];
    char t22[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 8344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 8992);
    *((int *)t2) = 1;
    t3 = (t0 + 8376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB5:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 5712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(120, ng0);

LAB26:    xsi_set_current_line(121, ng0);
    t9 = ((char*)((ng6)));
    t10 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 14, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(123, ng0);

LAB27:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);

LAB30:    goto LAB25;

LAB11:    xsi_set_current_line(129, ng0);

LAB31:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);

LAB34:    goto LAB25;

LAB13:    xsi_set_current_line(135, ng0);

LAB35:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t4, 14, t5, 14);
    t7 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t9 = (t20 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB58;

LAB57:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB58;

LAB61:    if (*((unsigned int *)t20) < *((unsigned int *)t7))
        goto LAB59;

LAB60:    memset(t17, 0, 8);
    t19 = (t22 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t22);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t19) != 0)
        goto LAB64;

LAB65:    t23 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t23);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB66;

LAB67:    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t34 = *((unsigned int *)t23);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t23) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t17) > 0)
        goto LAB72;

LAB73:    memcpy(t16, t33, 8);

LAB74:    t37 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t37, t16, 0, 0, 14, 0LL);

LAB38:    goto LAB25;

LAB15:    xsi_set_current_line(141, ng0);

LAB75:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t4, 14, t5, 14);
    t7 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t9 = (t20 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB98;

LAB97:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB98;

LAB101:    if (*((unsigned int *)t20) < *((unsigned int *)t7))
        goto LAB99;

LAB100:    memset(t17, 0, 8);
    t19 = (t22 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t22);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t19) != 0)
        goto LAB104;

LAB105:    t23 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t23);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB106;

LAB107:    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t34 = *((unsigned int *)t23);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t23) > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t17) > 0)
        goto LAB112;

LAB113:    memcpy(t16, t33, 8);

LAB114:    t37 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t37, t16, 0, 0, 14, 0LL);

LAB78:    goto LAB25;

LAB17:    xsi_set_current_line(147, ng0);

LAB115:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t4, 14, t5, 14);
    t7 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t9 = (t20 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB138;

LAB137:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB138;

LAB141:    if (*((unsigned int *)t20) < *((unsigned int *)t7))
        goto LAB139;

LAB140:    memset(t17, 0, 8);
    t19 = (t22 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t22);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t19) != 0)
        goto LAB144;

LAB145:    t23 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t23);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB146;

LAB147:    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t34 = *((unsigned int *)t23);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t23) > 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t17) > 0)
        goto LAB152;

LAB153:    memcpy(t16, t33, 8);

LAB154:    t37 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t37, t16, 0, 0, 14, 0LL);

LAB118:    goto LAB25;

LAB19:    xsi_set_current_line(153, ng0);

LAB155:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB156;

LAB157:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng23)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t4, 14, t5, 14);
    t7 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t9 = (t20 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB178;

LAB177:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB178;

LAB181:    if (*((unsigned int *)t20) < *((unsigned int *)t7))
        goto LAB179;

LAB180:    memset(t17, 0, 8);
    t19 = (t22 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t22);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t19) != 0)
        goto LAB184;

LAB185:    t23 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t23);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB186;

LAB187:    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    t34 = *((unsigned int *)t23);
    t35 = (t31 || t34);
    if (t35 > 0)
        goto LAB188;

LAB189:    if (*((unsigned int *)t23) > 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t17) > 0)
        goto LAB192;

LAB193:    memcpy(t16, t33, 8);

LAB194:    t37 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t37, t16, 0, 0, 14, 0LL);

LAB158:    goto LAB25;

LAB21:    xsi_set_current_line(160, ng0);

LAB195:    xsi_set_current_line(161, ng0);
    t3 = (t0 + 6192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB196;

LAB197:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 14, 0LL);

LAB198:    goto LAB25;

LAB23:    goto LAB21;

LAB28:    xsi_set_current_line(125, ng0);
    t9 = ((char*)((ng7)));
    t10 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 14, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(131, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 14, 0LL);
    goto LAB34;

LAB36:    xsi_set_current_line(137, ng0);
    t9 = (t0 + 5552);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = ((char*)((ng12)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t18, 14, t19, 14);
    t21 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t23 = (t20 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB40;

LAB39:    t24 = (t21 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t20) < *((unsigned int *)t21))
        goto LAB41;

LAB42:    memset(t17, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t26) != 0)
        goto LAB46;

LAB47:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB48;

LAB49:    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t33);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t33) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t17) > 0)
        goto LAB54;

LAB55:    memcpy(t16, t46, 8);

LAB56:    t47 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t47, t16, 0, 0, 14, 0LL);
    goto LAB38;

LAB40:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t22) = 1;
    goto LAB42;

LAB44:    *((unsigned int *)t17) = 1;
    goto LAB47;

LAB46:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB47;

LAB48:    t37 = (t0 + 5552);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng12)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t39, 14, t40, 14);
    goto LAB49;

LAB50:    t46 = ((char*)((ng13)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t46, 14);
    goto LAB56;

LAB54:    memcpy(t16, t41, 8);
    goto LAB56;

LAB58:    t18 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB60;

LAB59:    *((unsigned int *)t22) = 1;
    goto LAB60;

LAB62:    *((unsigned int *)t17) = 1;
    goto LAB65;

LAB64:    t21 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB65;

LAB66:    t24 = (t0 + 5552);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t32 = ((char*)((ng14)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t26, 14, t32, 14);
    goto LAB67;

LAB68:    t33 = ((char*)((ng13)));
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t33, 14);
    goto LAB74;

LAB72:    memcpy(t16, t41, 8);
    goto LAB74;

LAB76:    xsi_set_current_line(143, ng0);
    t9 = (t0 + 5552);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = ((char*)((ng16)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t18, 14, t19, 14);
    t21 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t23 = (t20 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB80;

LAB79:    t24 = (t21 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB80;

LAB83:    if (*((unsigned int *)t20) < *((unsigned int *)t21))
        goto LAB81;

LAB82:    memset(t17, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t26) != 0)
        goto LAB86;

LAB87:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB88;

LAB89:    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t33);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t33) > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t17) > 0)
        goto LAB94;

LAB95:    memcpy(t16, t46, 8);

LAB96:    t47 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t47, t16, 0, 0, 14, 0LL);
    goto LAB78;

LAB80:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB82;

LAB81:    *((unsigned int *)t22) = 1;
    goto LAB82;

LAB84:    *((unsigned int *)t17) = 1;
    goto LAB87;

LAB86:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB87;

LAB88:    t37 = (t0 + 5552);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng16)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t39, 14, t40, 14);
    goto LAB89;

LAB90:    t46 = ((char*)((ng13)));
    goto LAB91;

LAB92:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t46, 14);
    goto LAB96;

LAB94:    memcpy(t16, t41, 8);
    goto LAB96;

LAB98:    t18 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB100;

LAB99:    *((unsigned int *)t22) = 1;
    goto LAB100;

LAB102:    *((unsigned int *)t17) = 1;
    goto LAB105;

LAB104:    t21 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB105;

LAB106:    t24 = (t0 + 5552);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t32 = ((char*)((ng17)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t26, 14, t32, 14);
    goto LAB107;

LAB108:    t33 = ((char*)((ng13)));
    goto LAB109;

LAB110:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t33, 14);
    goto LAB114;

LAB112:    memcpy(t16, t41, 8);
    goto LAB114;

LAB116:    xsi_set_current_line(149, ng0);
    t9 = (t0 + 5552);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = ((char*)((ng19)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t18, 14, t19, 14);
    t21 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t23 = (t20 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB120;

LAB119:    t24 = (t21 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB120;

LAB123:    if (*((unsigned int *)t20) < *((unsigned int *)t21))
        goto LAB121;

LAB122:    memset(t17, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t26) != 0)
        goto LAB126;

LAB127:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB128;

LAB129:    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t33);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t33) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t17) > 0)
        goto LAB134;

LAB135:    memcpy(t16, t46, 8);

LAB136:    t47 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t47, t16, 0, 0, 14, 0LL);
    goto LAB118;

LAB120:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB122;

LAB121:    *((unsigned int *)t22) = 1;
    goto LAB122;

LAB124:    *((unsigned int *)t17) = 1;
    goto LAB127;

LAB126:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB127;

LAB128:    t37 = (t0 + 5552);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng19)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t39, 14, t40, 14);
    goto LAB129;

LAB130:    t46 = ((char*)((ng13)));
    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t46, 14);
    goto LAB136;

LAB134:    memcpy(t16, t41, 8);
    goto LAB136;

LAB138:    t18 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB140;

LAB139:    *((unsigned int *)t22) = 1;
    goto LAB140;

LAB142:    *((unsigned int *)t17) = 1;
    goto LAB145;

LAB144:    t21 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB145;

LAB146:    t24 = (t0 + 5552);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t32 = ((char*)((ng20)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t26, 14, t32, 14);
    goto LAB147;

LAB148:    t33 = ((char*)((ng13)));
    goto LAB149;

LAB150:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t33, 14);
    goto LAB154;

LAB152:    memcpy(t16, t41, 8);
    goto LAB154;

LAB156:    xsi_set_current_line(155, ng0);
    t9 = (t0 + 5552);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = ((char*)((ng22)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 14, t18, 14, t19, 14);
    t21 = ((char*)((ng13)));
    memset(t22, 0, 8);
    t23 = (t20 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB160;

LAB159:    t24 = (t21 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB160;

LAB163:    if (*((unsigned int *)t20) < *((unsigned int *)t21))
        goto LAB161;

LAB162:    memset(t17, 0, 8);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t26) != 0)
        goto LAB166;

LAB167:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB168;

LAB169:    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t33);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t33) > 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t17) > 0)
        goto LAB174;

LAB175:    memcpy(t16, t46, 8);

LAB176:    t47 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t47, t16, 0, 0, 14, 0LL);
    goto LAB158;

LAB160:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB162;

LAB161:    *((unsigned int *)t22) = 1;
    goto LAB162;

LAB164:    *((unsigned int *)t17) = 1;
    goto LAB167;

LAB166:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB167;

LAB168:    t37 = (t0 + 5552);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng22)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t39, 14, t40, 14);
    goto LAB169;

LAB170:    t46 = ((char*)((ng13)));
    goto LAB171;

LAB172:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t46, 14);
    goto LAB176;

LAB174:    memcpy(t16, t41, 8);
    goto LAB176;

LAB178:    t18 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB180;

LAB179:    *((unsigned int *)t22) = 1;
    goto LAB180;

LAB182:    *((unsigned int *)t17) = 1;
    goto LAB185;

LAB184:    t21 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB185;

LAB186:    t24 = (t0 + 5552);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t32 = ((char*)((ng23)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 14, t26, 14, t32, 14);
    goto LAB187;

LAB188:    t33 = ((char*)((ng13)));
    goto LAB189;

LAB190:    xsi_vlog_unsigned_bit_combine(t16, 14, t41, 14, t33, 14);
    goto LAB194;

LAB192:    memcpy(t16, t41, 8);
    goto LAB194;

LAB196:    xsi_set_current_line(162, ng0);
    t9 = (t0 + 5552);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    t19 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 14, t18, 14, t19, 14);
    t21 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t21, t16, 0, 0, 14, 0LL);
    goto LAB198;

}

static void Always_169_6(char *t0)
{
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t1 = (t0 + 8592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 9008);
    *((int *)t2) = 1;
    t3 = (t0 + 8624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(169, ng0);

LAB5:    xsi_set_current_line(170, ng0);
    t4 = (t0 + 5712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t3 = ((char*)((ng11)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 4);
    if (t18 == 1)
        goto LAB13;

LAB14:    t4 = ((char*)((ng15)));
    t19 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 4);
    if (t19 == 1)
        goto LAB15;

LAB16:    t5 = ((char*)((ng18)));
    t20 = xsi_vlog_unsigned_case_compare(t6, 4, t5, 4);
    if (t20 == 1)
        goto LAB17;

LAB18:    t7 = ((char*)((ng21)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t21 == 1)
        goto LAB19;

LAB20:    t9 = ((char*)((ng24)));
    t22 = xsi_vlog_unsigned_case_compare(t6, 4, t9, 4);
    if (t22 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(171, ng0);

LAB26:    xsi_set_current_line(172, ng0);
    t9 = (t0 + 2272U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 2592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB38:
LAB35:
LAB32:
LAB29:    goto LAB25;

LAB9:    xsi_set_current_line(188, ng0);

LAB39:    xsi_set_current_line(189, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 2592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 5872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB51:
LAB48:
LAB45:
LAB42:    goto LAB25;

LAB11:    goto LAB9;

LAB13:    goto LAB9;

LAB15:    goto LAB9;

LAB17:    goto LAB9;

LAB19:    goto LAB9;

LAB21:    xsi_set_current_line(200, ng0);

LAB52:    xsi_set_current_line(201, ng0);
    t10 = (t0 + 2272U);
    t16 = *((char **)t10);
    t10 = (t16 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t16);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 2592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t24, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB66;

LAB65:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB67;

LAB68:    t16 = (t24 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t24);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 5872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB72:
LAB64:
LAB61:
LAB58:
LAB55:    goto LAB25;

LAB23:    xsi_set_current_line(214, ng0);

LAB73:    xsi_set_current_line(215, ng0);
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 2592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t24, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t25 = (t14 ^ t15);
    t26 = (t13 | t25);
    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t9);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB89;

LAB86:    if (t29 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t24) = 1;

LAB89:    t16 = (t24 + 4);
    t32 = *((unsigned int *)t16);
    t33 = (~(t32));
    t34 = *((unsigned int *)t24);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 5872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB92:
LAB85:
LAB82:
LAB79:
LAB76:    goto LAB25;

LAB27:    xsi_set_current_line(173, ng0);
    t16 = ((char*)((ng11)));
    t17 = (t0 + 5872);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 4);
    goto LAB29;

LAB30:    xsi_set_current_line(175, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB32;

LAB33:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB35;

LAB36:    xsi_set_current_line(179, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB38;

LAB40:    xsi_set_current_line(190, ng0);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 5872);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB42;

LAB43:    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB45;

LAB46:    xsi_set_current_line(194, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB48;

LAB49:    xsi_set_current_line(196, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB51;

LAB53:    xsi_set_current_line(202, ng0);
    t17 = ((char*)((ng11)));
    t23 = (t0 + 5872);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 4);
    goto LAB55;

LAB56:    xsi_set_current_line(204, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB58;

LAB59:    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB61;

LAB62:    xsi_set_current_line(208, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB64;

LAB66:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t24) = 1;
    goto LAB68;

LAB70:    xsi_set_current_line(210, ng0);
    t17 = ((char*)((ng25)));
    t23 = (t0 + 5872);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 4);
    goto LAB72;

LAB74:    xsi_set_current_line(216, ng0);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 5872);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 4);
    goto LAB76;

LAB77:    xsi_set_current_line(218, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB79;

LAB80:    xsi_set_current_line(220, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB82;

LAB83:    xsi_set_current_line(222, ng0);
    t4 = ((char*)((ng21)));
    t5 = (t0 + 5872);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB85;

LAB88:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(224, ng0);
    t17 = ((char*)((ng4)));
    t23 = (t0 + 5872);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 4);
    goto LAB92;

}


extern void work_m_01387350098213295736_3744308900_init()
{
	static char *pe[] = {(void *)Always_75_0,(void *)Always_82_1,(void *)Always_89_2,(void *)Always_100_3,(void *)Always_109_4,(void *)Always_118_5,(void *)Always_169_6};
	xsi_register_didat("work_m_01387350098213295736_3744308900", "isim/testbench_205300889_isim_beh.exe.sim/work/m_01387350098213295736_3744308900.didat");
	xsi_register_executes(pe);
}
