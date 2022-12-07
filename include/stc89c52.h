#ifdef __SDCC

#include <mcs51/8052.h>

#else

#include <stdbool.h>
#include <mcs51/compiler.h>

/*  BYTE Register  */
SFR(P0,0x80);
SFR(SP,0x81);
SFR(DPL,0x82);
SFR(DPH,0x83);
SFR(PCON,0x87);
SFR(TCON,0x88);
SFR(TMOD,0x89);
SFR(TL0,0x8A);
SFR(TL1,0x8B);
SFR(TH0,0x8C);
SFR(TH1,0x8D);
SFR(P1,0x90);
SFR(SCON,0x98);
SFR(SBUF,0x99);
SFR(P2,0xA0);
SFR(IE,0xA8);
SFR(P3,0xB0);
SFR(IP,0xB8);
SFR(PSW,0xD0);
SFR(ACC,0xE0);
SFR(B,0xF0);

/*  BIT Register  */
/* P0 */
SBIT (P0_0,0x80,0);
SBIT (P0_1,0x80,1);
SBIT (P0_2,0x80,2);
SBIT (P0_3,0x80,3);
SBIT (P0_4,0x80,4);
SBIT (P0_5,0x80,5);
SBIT (P0_6,0x80,6);
SBIT (P0_7,0x80,7);

/*  TCON  */
SBIT (IT0,0x88,0);
SBIT (IE0,0x88,1);
SBIT (IT1,0x88,2);
SBIT (IE1,0x88,3);
SBIT (TR0,0x88,4);
SBIT (TF0,0x88,5);
SBIT (TR1,0x88,6);
SBIT (TF1,0x88,7);

/* P1 */
SBIT (P1_0,0x90,0);
SBIT (P1_1,0x90,1);
SBIT (P1_2,0x90,2);
SBIT (P1_3,0x90,3);
SBIT (P1_4,0x90,4);
SBIT (P1_5,0x90,5);
SBIT (P1_6,0x90,6);
SBIT (P1_7,0x90,7);

/*  SCON  */
SBIT (RI,0x98,0);
SBIT (TI,0x98,1);
SBIT (RB8,0x98,2);
SBIT (TB8,0x98,3);
SBIT (REN,0x98,4);
SBIT (SM2,0x98,4);
SBIT (SM1,0x98,4);
SBIT (SM0,0x98,4);

/* P2 */
SBIT (P2_0,0xA0,0);
SBIT (P2_1,0xA0,1);
SBIT (P2_2,0xA0,2);
SBIT (P2_3,0xA0,3);
SBIT (P2_4,0xA0,4);
SBIT (P2_5,0xA0,5);
SBIT (P2_6,0xA0,6);
SBIT (P2_7,0xA0,7);

/*  IE   */
SBIT (EX0,0xA8,0);
SBIT (ET0,0xA8,1);
SBIT (EX1,0xAA,2);
SBIT (ET1,0xAB,3);
SBIT (ES,0xAC,4);
SBIT (EA,0xAF,5);

/*  P3  */
SBIT (P3_0,0xB0,0);
SBIT (P3_1,0xB0,1);
SBIT (P3_2,0xB0,2);
SBIT (P3_3,0xB0,3);
SBIT (P3_4,0xB0,4);
SBIT (P3_5,0xB0,5);
SBIT (P3_6,0xB0,6);
SBIT (P3_7,0xB0,7);

SBIT (RXD,0xB0,0);
SBIT (TXD,0xB0,1);
SBIT (INT0,0xB0,2);
SBIT (INT1,0xB0,3);
SBIT (T0,0xB0,4);
SBIT (T1,0xB0,5);
SBIT (WR,0xB0,6);
SBIT (RD,0xB0,7);

/*  IP   */
SBIT (PX0,0xB8,0);
SBIT (PT0,0xB8,1);
SBIT (PX1,0xB8,2);
SBIT (PT1,0xB8,3);
SBIT (PS,0xB8,4);

/*  PSW   */
SBIT (P,0xD0,0);
SBIT (F1,0xD0,1);
SBIT (OV,0xD0,2);
SBIT (RS0,0xD0,3);
SBIT (RS1,0xD0,4);
SBIT (F0,0xD0,5);
SBIT (AC,0xD0,6);
SBIT (CY,0xD0,7);

/* BIT definitions for bits that are not directly accessible */
/* PCON bits */
#define IDL             0x01
#define PD              0x02
#define GF0             0x04
#define GF1             0x08
#define SMOD            0x80

/* TMOD bits */
#define T0_M0           0x01
#define T0_M1           0x02
#define T0_CT           0x04
#define T0_GATE         0x08
#define T1_M0           0x10
#define T1_M1           0x20
#define T1_CT           0x40
#define T1_GATE         0x80

#define T0_MASK         0x0F
#define T1_MASK         0xF0

/* Interrupt numbers: address = (number * 8) + 3 */
#define IE0_VECTOR      0       /* 0x03 external interrupt 0 */
#define TF0_VECTOR      1       /* 0x0b timer 0 */
#define IE1_VECTOR      2       /* 0x13 external interrupt 1 */
#define TF1_VECTOR      3       /* 0x1b timer 1 */
#define SI0_VECTOR      4       /* 0x23 serial port 0 */

/* T2CON */
SFR (T2CON,0xC8);

/* RCAP2 L & H */
SFR (RCAP2L,0xCA)  ;
SFR (RCAP2H,0xCB)  ;
SFR (TL2,0xCC)     ;
SFR (TH2,0xCD)     ;

/*  IE  */
SBIT (ET2,0xAD,0)    ; /* Enable timer2 interrupt */

/*  IP  */
SBIT (PT2,0xBD,0)    ; /* T2 interrupt priority bit */

/* T2CON bits */
SBIT (T2CON_0,0xC8,0);
SBIT (T2CON_1,0xC8,1);
SBIT (T2CON_2,0xC8,2);
SBIT (T2CON_3,0xC8,3);
SBIT (T2CON_4,0xC8,4);
SBIT (T2CON_5,0xC8,5);
SBIT (T2CON_6,0xC8,6);
SBIT (T2CON_7,0xC8,7);

SBIT (CP_RL2,0xC8,0);
SBIT (C_T2,0xC8,1);
SBIT (TR2,0xC8,2);
SBIT (EXEN2,0xC8,3);
SBIT (TCLK,0xC8,4);
SBIT (RCLK,0xC8,5);
SBIT (EXF2,0xC8,6);
SBIT (TF2,0xC8,7);

#endif
