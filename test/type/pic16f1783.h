#ifndef _PIC16F1783_H_
#define _PIC16F1783_H_

/*
 * C Header file for the Microchip PIC Microcontroller
 * PIC16F1783
 */

/*
 * Register Definitions
 */

// Register: INDF0
unsigned char           INDF0               ; //SWAP 0x000;
#ifndef _LIB_BUILD
asm("INDF0 equ 00h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF0                  :8;
    };
} INDF0bits_t;
INDF0bits_t INDF0bits ; //SWAP 0x000;
// bitfield macros
#define _INDF0_INDF0_POSN                                   0x0
#define _INDF0_INDF0_POSITION                               0x0
#define _INDF0_INDF0_SIZE                                   0x8
#define _INDF0_INDF0_LENGTH                                 0x8
#define _INDF0_INDF0_MASK                                   0xFF

// Register: INDF1
unsigned char           INDF1               ; //SWAP 0x001;
#ifndef _LIB_BUILD
asm("INDF1 equ 01h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INDF1                  :8;
    };
} INDF1bits_t;
INDF1bits_t INDF1bits ; //SWAP 0x001;
// bitfield macros
#define _INDF1_INDF1_POSN                                   0x0
#define _INDF1_INDF1_POSITION                               0x0
#define _INDF1_INDF1_SIZE                                   0x8
#define _INDF1_INDF1_LENGTH                                 0x8
#define _INDF1_INDF1_MASK                                   0xFF

// Register: PCL
unsigned char           PCL                 ; //SWAP 0x002;
#ifndef _LIB_BUILD
asm("PCL equ 02h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCL                    :8;
    };
} PCLbits_t;
PCLbits_t PCLbits ; //SWAP 0x002;
// bitfield macros
#define _PCL_PCL_POSN                                       0x0
#define _PCL_PCL_POSITION                                   0x0
#define _PCL_PCL_SIZE                                       0x8
#define _PCL_PCL_LENGTH                                     0x8
#define _PCL_PCL_MASK                                       0xFF

// Register: STATUS
unsigned char           STATUS              ; //SWAP 0x003;
#ifndef _LIB_BUILD
asm("STATUS equ 03h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C                      :1;
        unsigned DC                     :1;
        unsigned Z                      :1;
        unsigned nPD                    :1;
        unsigned nTO                    :1;
    };
    struct {
        unsigned CARRY                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned ZERO                   :1;
    };
} STATUSbits_t;
STATUSbits_t STATUSbits ; //SWAP 0x003;
// bitfield macros
#define _STATUS_C_POSN                                      0x0
#define _STATUS_C_POSITION                                  0x0
#define _STATUS_C_SIZE                                      0x1
#define _STATUS_C_LENGTH                                    0x1
#define _STATUS_C_MASK                                      0x1
#define _STATUS_DC_POSN                                     0x1
#define _STATUS_DC_POSITION                                 0x1
#define _STATUS_DC_SIZE                                     0x1
#define _STATUS_DC_LENGTH                                   0x1
#define _STATUS_DC_MASK                                     0x2
#define _STATUS_Z_POSN                                      0x2
#define _STATUS_Z_POSITION                                  0x2
#define _STATUS_Z_SIZE                                      0x1
#define _STATUS_Z_LENGTH                                    0x1
#define _STATUS_Z_MASK                                      0x4
#define _STATUS_nPD_POSN                                    0x3
#define _STATUS_nPD_POSITION                                0x3
#define _STATUS_nPD_SIZE                                    0x1
#define _STATUS_nPD_LENGTH                                  0x1
#define _STATUS_nPD_MASK                                    0x8
#define _STATUS_nTO_POSN                                    0x4
#define _STATUS_nTO_POSITION                                0x4
#define _STATUS_nTO_SIZE                                    0x1
#define _STATUS_nTO_LENGTH                                  0x1
#define _STATUS_nTO_MASK                                    0x10
#define _STATUS_CARRY_POSN                                  0x0
#define _STATUS_CARRY_POSITION                              0x0
#define _STATUS_CARRY_SIZE                                  0x1
#define _STATUS_CARRY_LENGTH                                0x1
#define _STATUS_CARRY_MASK                                  0x1
#define _STATUS_ZERO_POSN                                   0x2
#define _STATUS_ZERO_POSITION                               0x2
#define _STATUS_ZERO_SIZE                                   0x1
#define _STATUS_ZERO_LENGTH                                 0x1
#define _STATUS_ZERO_MASK                                   0x4

// Register: FSR0
unsigned short          FSR0                ; //SWAP 0x004;

// Register: FSR0L
unsigned char           FSR0L               ; //SWAP 0x004;
#ifndef _LIB_BUILD
asm("FSR0L equ 04h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L                  :8;
    };
} FSR0Lbits_t;
FSR0Lbits_t FSR0Lbits ; //SWAP 0x004;
// bitfield macros
#define _FSR0L_FSR0L_POSN                                   0x0
#define _FSR0L_FSR0L_POSITION                               0x0
#define _FSR0L_FSR0L_SIZE                                   0x8
#define _FSR0L_FSR0L_LENGTH                                 0x8
#define _FSR0L_FSR0L_MASK                                   0xFF

// Register: FSR0H
unsigned char           FSR0H               ; //SWAP 0x005;
#ifndef _LIB_BUILD
asm("FSR0H equ 05h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0H                  :8;
    };
} FSR0Hbits_t;
FSR0Hbits_t FSR0Hbits ; //SWAP 0x005;
// bitfield macros
#define _FSR0H_FSR0H_POSN                                   0x0
#define _FSR0H_FSR0H_POSITION                               0x0
#define _FSR0H_FSR0H_SIZE                                   0x8
#define _FSR0H_FSR0H_LENGTH                                 0x8
#define _FSR0H_FSR0H_MASK                                   0xFF

// Register: FSR1
unsigned short          FSR1                ; //SWAP 0x006;

// Register: FSR1L
unsigned char           FSR1L               ; //SWAP 0x006;
#ifndef _LIB_BUILD
asm("FSR1L equ 06h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L                  :8;
    };
} FSR1Lbits_t;
FSR1Lbits_t FSR1Lbits ; //SWAP 0x006;
// bitfield macros
#define _FSR1L_FSR1L_POSN                                   0x0
#define _FSR1L_FSR1L_POSITION                               0x0
#define _FSR1L_FSR1L_SIZE                                   0x8
#define _FSR1L_FSR1L_LENGTH                                 0x8
#define _FSR1L_FSR1L_MASK                                   0xFF

// Register: FSR1H
unsigned char           FSR1H               ; //SWAP 0x007;
#ifndef _LIB_BUILD
asm("FSR1H equ 07h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1H                  :8;
    };
} FSR1Hbits_t;
FSR1Hbits_t FSR1Hbits ; //SWAP 0x007;
// bitfield macros
#define _FSR1H_FSR1H_POSN                                   0x0
#define _FSR1H_FSR1H_POSITION                               0x0
#define _FSR1H_FSR1H_SIZE                                   0x8
#define _FSR1H_FSR1H_LENGTH                                 0x8
#define _FSR1H_FSR1H_MASK                                   0xFF

// Register: BSR
unsigned char           BSR                 ; //SWAP 0x008;
#ifndef _LIB_BUILD
asm("BSR equ 08h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR0                   :1;
        unsigned BSR1                   :1;
        unsigned BSR2                   :1;
        unsigned BSR3                   :1;
        unsigned BSR4                   :1;
    };
    struct {
        unsigned BSR                    :5;
    };
} BSRbits_t;
BSRbits_t BSRbits ; //SWAP 0x008;
// bitfield macros
#define _BSR_BSR0_POSN                                      0x0
#define _BSR_BSR0_POSITION                                  0x0
#define _BSR_BSR0_SIZE                                      0x1
#define _BSR_BSR0_LENGTH                                    0x1
#define _BSR_BSR0_MASK                                      0x1
#define _BSR_BSR1_POSN                                      0x1
#define _BSR_BSR1_POSITION                                  0x1
#define _BSR_BSR1_SIZE                                      0x1
#define _BSR_BSR1_LENGTH                                    0x1
#define _BSR_BSR1_MASK                                      0x2
#define _BSR_BSR2_POSN                                      0x2
#define _BSR_BSR2_POSITION                                  0x2
#define _BSR_BSR2_SIZE                                      0x1
#define _BSR_BSR2_LENGTH                                    0x1
#define _BSR_BSR2_MASK                                      0x4
#define _BSR_BSR3_POSN                                      0x3
#define _BSR_BSR3_POSITION                                  0x3
#define _BSR_BSR3_SIZE                                      0x1
#define _BSR_BSR3_LENGTH                                    0x1
#define _BSR_BSR3_MASK                                      0x8
#define _BSR_BSR4_POSN                                      0x4
#define _BSR_BSR4_POSITION                                  0x4
#define _BSR_BSR4_SIZE                                      0x1
#define _BSR_BSR4_LENGTH                                    0x1
#define _BSR_BSR4_MASK                                      0x10
#define _BSR_BSR_POSN                                       0x0
#define _BSR_BSR_POSITION                                   0x0
#define _BSR_BSR_SIZE                                       0x5
#define _BSR_BSR_LENGTH                                     0x5
#define _BSR_BSR_MASK                                       0x1F

// Register: WREG
unsigned char           WREG                ; //SWAP 0x009;
#ifndef _LIB_BUILD
asm("WREG equ 09h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG0                  :8;
    };
} WREGbits_t;
WREGbits_t WREGbits ; //SWAP 0x009;
// bitfield macros
#define _WREG_WREG0_POSN                                    0x0
#define _WREG_WREG0_POSITION                                0x0
#define _WREG_WREG0_SIZE                                    0x8
#define _WREG_WREG0_LENGTH                                  0x8
#define _WREG_WREG0_MASK                                    0xFF

// Register: PCLATH
unsigned char           PCLATH              ; //SWAP 0x00A;
#ifndef _LIB_BUILD
asm("PCLATH equ 0Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH                 :7;
    };
} PCLATHbits_t;
PCLATHbits_t PCLATHbits ; //SWAP 0x00A;
// bitfield macros
#define _PCLATH_PCLATH_POSN                                 0x0
#define _PCLATH_PCLATH_POSITION                             0x0
#define _PCLATH_PCLATH_SIZE                                 0x7
#define _PCLATH_PCLATH_LENGTH                               0x7
#define _PCLATH_PCLATH_MASK                                 0x7F

// Register: INTCON
unsigned char           INTCON              ; //SWAP 0x00B;
#ifndef _LIB_BUILD
asm("INTCON equ 0Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCIF                  :1;
        unsigned INTF                   :1;
        unsigned TMR0IF                 :1;
        unsigned IOCIE                  :1;
        unsigned INTE                   :1;
        unsigned TMR0IE                 :1;
        unsigned PEIE                   :1;
        unsigned GIE                    :1;
    };
    struct {
        unsigned                        :2;
        unsigned T0IF                   :1;
        unsigned                        :2;
        unsigned T0IE                   :1;
    };
} INTCONbits_t;
INTCONbits_t INTCONbits ; //SWAP 0x00B;
// bitfield macros
#define _INTCON_IOCIF_POSN                                  0x0
#define _INTCON_IOCIF_POSITION                              0x0
#define _INTCON_IOCIF_SIZE                                  0x1
#define _INTCON_IOCIF_LENGTH                                0x1
#define _INTCON_IOCIF_MASK                                  0x1
#define _INTCON_INTF_POSN                                   0x1
#define _INTCON_INTF_POSITION                               0x1
#define _INTCON_INTF_SIZE                                   0x1
#define _INTCON_INTF_LENGTH                                 0x1
#define _INTCON_INTF_MASK                                   0x2
#define _INTCON_TMR0IF_POSN                                 0x2
#define _INTCON_TMR0IF_POSITION                             0x2
#define _INTCON_TMR0IF_SIZE                                 0x1
#define _INTCON_TMR0IF_LENGTH                               0x1
#define _INTCON_TMR0IF_MASK                                 0x4
#define _INTCON_IOCIE_POSN                                  0x3
#define _INTCON_IOCIE_POSITION                              0x3
#define _INTCON_IOCIE_SIZE                                  0x1
#define _INTCON_IOCIE_LENGTH                                0x1
#define _INTCON_IOCIE_MASK                                  0x8
#define _INTCON_INTE_POSN                                   0x4
#define _INTCON_INTE_POSITION                               0x4
#define _INTCON_INTE_SIZE                                   0x1
#define _INTCON_INTE_LENGTH                                 0x1
#define _INTCON_INTE_MASK                                   0x10
#define _INTCON_TMR0IE_POSN                                 0x5
#define _INTCON_TMR0IE_POSITION                             0x5
#define _INTCON_TMR0IE_SIZE                                 0x1
#define _INTCON_TMR0IE_LENGTH                               0x1
#define _INTCON_TMR0IE_MASK                                 0x20
#define _INTCON_PEIE_POSN                                   0x6
#define _INTCON_PEIE_POSITION                               0x6
#define _INTCON_PEIE_SIZE                                   0x1
#define _INTCON_PEIE_LENGTH                                 0x1
#define _INTCON_PEIE_MASK                                   0x40
#define _INTCON_GIE_POSN                                    0x7
#define _INTCON_GIE_POSITION                                0x7
#define _INTCON_GIE_SIZE                                    0x1
#define _INTCON_GIE_LENGTH                                  0x1
#define _INTCON_GIE_MASK                                    0x80
#define _INTCON_T0IF_POSN                                   0x2
#define _INTCON_T0IF_POSITION                               0x2
#define _INTCON_T0IF_SIZE                                   0x1
#define _INTCON_T0IF_LENGTH                                 0x1
#define _INTCON_T0IF_MASK                                   0x4
#define _INTCON_T0IE_POSN                                   0x5
#define _INTCON_T0IE_POSITION                               0x5
#define _INTCON_T0IE_SIZE                                   0x1
#define _INTCON_T0IE_LENGTH                                 0x1
#define _INTCON_T0IE_MASK                                   0x20

// Register: PORTA
unsigned char           PORTA               ; //SWAP 0x00C;
#ifndef _LIB_BUILD
asm("PORTA equ 0Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RA0                    :1;
        unsigned RA1                    :1;
        unsigned RA2                    :1;
        unsigned RA3                    :1;
        unsigned RA4                    :1;
        unsigned RA5                    :1;
        unsigned RA6                    :1;
        unsigned RA7                    :1;
    };
    struct {
        unsigned PORTA                  :8;
    };
} PORTAbits_t;
PORTAbits_t PORTAbits ; //SWAP 0x00C;
// bitfield macros
#define _PORTA_RA0_POSN                                     0x0
#define _PORTA_RA0_POSITION                                 0x0
#define _PORTA_RA0_SIZE                                     0x1
#define _PORTA_RA0_LENGTH                                   0x1
#define _PORTA_RA0_MASK                                     0x1
#define _PORTA_RA1_POSN                                     0x1
#define _PORTA_RA1_POSITION                                 0x1
#define _PORTA_RA1_SIZE                                     0x1
#define _PORTA_RA1_LENGTH                                   0x1
#define _PORTA_RA1_MASK                                     0x2
#define _PORTA_RA2_POSN                                     0x2
#define _PORTA_RA2_POSITION                                 0x2
#define _PORTA_RA2_SIZE                                     0x1
#define _PORTA_RA2_LENGTH                                   0x1
#define _PORTA_RA2_MASK                                     0x4
#define _PORTA_RA3_POSN                                     0x3
#define _PORTA_RA3_POSITION                                 0x3
#define _PORTA_RA3_SIZE                                     0x1
#define _PORTA_RA3_LENGTH                                   0x1
#define _PORTA_RA3_MASK                                     0x8
#define _PORTA_RA4_POSN                                     0x4
#define _PORTA_RA4_POSITION                                 0x4
#define _PORTA_RA4_SIZE                                     0x1
#define _PORTA_RA4_LENGTH                                   0x1
#define _PORTA_RA4_MASK                                     0x10
#define _PORTA_RA5_POSN                                     0x5
#define _PORTA_RA5_POSITION                                 0x5
#define _PORTA_RA5_SIZE                                     0x1
#define _PORTA_RA5_LENGTH                                   0x1
#define _PORTA_RA5_MASK                                     0x20
#define _PORTA_RA6_POSN                                     0x6
#define _PORTA_RA6_POSITION                                 0x6
#define _PORTA_RA6_SIZE                                     0x1
#define _PORTA_RA6_LENGTH                                   0x1
#define _PORTA_RA6_MASK                                     0x40
#define _PORTA_RA7_POSN                                     0x7
#define _PORTA_RA7_POSITION                                 0x7
#define _PORTA_RA7_SIZE                                     0x1
#define _PORTA_RA7_LENGTH                                   0x1
#define _PORTA_RA7_MASK                                     0x80
#define _PORTA_PORTA_POSN                                   0x0
#define _PORTA_PORTA_POSITION                               0x0
#define _PORTA_PORTA_SIZE                                   0x8
#define _PORTA_PORTA_LENGTH                                 0x8
#define _PORTA_PORTA_MASK                                   0xFF

// Register: PORTB
unsigned char           PORTB               ; //SWAP 0x00D;
#ifndef _LIB_BUILD
asm("PORTB equ 0Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RB0                    :1;
        unsigned RB1                    :1;
        unsigned RB2                    :1;
        unsigned RB3                    :1;
        unsigned RB4                    :1;
        unsigned RB5                    :1;
        unsigned RB6                    :1;
        unsigned RB7                    :1;
    };
    struct {
        unsigned PORTB                  :8;
    };
} PORTBbits_t;
PORTBbits_t PORTBbits ; //SWAP 0x00D;
// bitfield macros
#define _PORTB_RB0_POSN                                     0x0
#define _PORTB_RB0_POSITION                                 0x0
#define _PORTB_RB0_SIZE                                     0x1
#define _PORTB_RB0_LENGTH                                   0x1
#define _PORTB_RB0_MASK                                     0x1
#define _PORTB_RB1_POSN                                     0x1
#define _PORTB_RB1_POSITION                                 0x1
#define _PORTB_RB1_SIZE                                     0x1
#define _PORTB_RB1_LENGTH                                   0x1
#define _PORTB_RB1_MASK                                     0x2
#define _PORTB_RB2_POSN                                     0x2
#define _PORTB_RB2_POSITION                                 0x2
#define _PORTB_RB2_SIZE                                     0x1
#define _PORTB_RB2_LENGTH                                   0x1
#define _PORTB_RB2_MASK                                     0x4
#define _PORTB_RB3_POSN                                     0x3
#define _PORTB_RB3_POSITION                                 0x3
#define _PORTB_RB3_SIZE                                     0x1
#define _PORTB_RB3_LENGTH                                   0x1
#define _PORTB_RB3_MASK                                     0x8
#define _PORTB_RB4_POSN                                     0x4
#define _PORTB_RB4_POSITION                                 0x4
#define _PORTB_RB4_SIZE                                     0x1
#define _PORTB_RB4_LENGTH                                   0x1
#define _PORTB_RB4_MASK                                     0x10
#define _PORTB_RB5_POSN                                     0x5
#define _PORTB_RB5_POSITION                                 0x5
#define _PORTB_RB5_SIZE                                     0x1
#define _PORTB_RB5_LENGTH                                   0x1
#define _PORTB_RB5_MASK                                     0x20
#define _PORTB_RB6_POSN                                     0x6
#define _PORTB_RB6_POSITION                                 0x6
#define _PORTB_RB6_SIZE                                     0x1
#define _PORTB_RB6_LENGTH                                   0x1
#define _PORTB_RB6_MASK                                     0x40
#define _PORTB_RB7_POSN                                     0x7
#define _PORTB_RB7_POSITION                                 0x7
#define _PORTB_RB7_SIZE                                     0x1
#define _PORTB_RB7_LENGTH                                   0x1
#define _PORTB_RB7_MASK                                     0x80
#define _PORTB_PORTB_POSN                                   0x0
#define _PORTB_PORTB_POSITION                               0x0
#define _PORTB_PORTB_SIZE                                   0x8
#define _PORTB_PORTB_LENGTH                                 0x8
#define _PORTB_PORTB_MASK                                   0xFF

// Register: PORTC
unsigned char           PORTC               ; //SWAP 0x00E;
#ifndef _LIB_BUILD
asm("PORTC equ 0Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC0                    :1;
        unsigned RC1                    :1;
        unsigned RC2                    :1;
        unsigned RC3                    :1;
        unsigned RC4                    :1;
        unsigned RC5                    :1;
        unsigned RC6                    :1;
        unsigned RC7                    :1;
    };
    struct {
        unsigned PORTC                  :8;
    };
} PORTCbits_t;
PORTCbits_t PORTCbits ; //SWAP 0x00E;
// bitfield macros
#define _PORTC_RC0_POSN                                     0x0
#define _PORTC_RC0_POSITION                                 0x0
#define _PORTC_RC0_SIZE                                     0x1
#define _PORTC_RC0_LENGTH                                   0x1
#define _PORTC_RC0_MASK                                     0x1
#define _PORTC_RC1_POSN                                     0x1
#define _PORTC_RC1_POSITION                                 0x1
#define _PORTC_RC1_SIZE                                     0x1
#define _PORTC_RC1_LENGTH                                   0x1
#define _PORTC_RC1_MASK                                     0x2
#define _PORTC_RC2_POSN                                     0x2
#define _PORTC_RC2_POSITION                                 0x2
#define _PORTC_RC2_SIZE                                     0x1
#define _PORTC_RC2_LENGTH                                   0x1
#define _PORTC_RC2_MASK                                     0x4
#define _PORTC_RC3_POSN                                     0x3
#define _PORTC_RC3_POSITION                                 0x3
#define _PORTC_RC3_SIZE                                     0x1
#define _PORTC_RC3_LENGTH                                   0x1
#define _PORTC_RC3_MASK                                     0x8
#define _PORTC_RC4_POSN                                     0x4
#define _PORTC_RC4_POSITION                                 0x4
#define _PORTC_RC4_SIZE                                     0x1
#define _PORTC_RC4_LENGTH                                   0x1
#define _PORTC_RC4_MASK                                     0x10
#define _PORTC_RC5_POSN                                     0x5
#define _PORTC_RC5_POSITION                                 0x5
#define _PORTC_RC5_SIZE                                     0x1
#define _PORTC_RC5_LENGTH                                   0x1
#define _PORTC_RC5_MASK                                     0x20
#define _PORTC_RC6_POSN                                     0x6
#define _PORTC_RC6_POSITION                                 0x6
#define _PORTC_RC6_SIZE                                     0x1
#define _PORTC_RC6_LENGTH                                   0x1
#define _PORTC_RC6_MASK                                     0x40
#define _PORTC_RC7_POSN                                     0x7
#define _PORTC_RC7_POSITION                                 0x7
#define _PORTC_RC7_SIZE                                     0x1
#define _PORTC_RC7_LENGTH                                   0x1
#define _PORTC_RC7_MASK                                     0x80
#define _PORTC_PORTC_POSN                                   0x0
#define _PORTC_PORTC_POSITION                               0x0
#define _PORTC_PORTC_SIZE                                   0x8
#define _PORTC_PORTC_LENGTH                                 0x8
#define _PORTC_PORTC_MASK                                   0xFF

// Register: PORTE
unsigned char           PORTE               ; //SWAP 0x010;
#ifndef _LIB_BUILD
asm("PORTE equ 010h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned RE3                    :1;
    };
} PORTEbits_t;
PORTEbits_t PORTEbits ; //SWAP 0x010;
// bitfield macros
#define _PORTE_RE3_POSN                                     0x3
#define _PORTE_RE3_POSITION                                 0x3
#define _PORTE_RE3_SIZE                                     0x1
#define _PORTE_RE3_LENGTH                                   0x1
#define _PORTE_RE3_MASK                                     0x8

// Register: PIR1
unsigned char           PIR1                ; //SWAP 0x011;
#ifndef _LIB_BUILD
asm("PIR1 equ 011h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IF                 :1;
        unsigned TMR2IF                 :1;
        unsigned CCP1IF                 :1;
        unsigned SSP1IF                 :1;
        unsigned TXIF                   :1;
        unsigned RCIF                   :1;
        unsigned ADIF                   :1;
        unsigned TMR1GIF                :1;
    };
} PIR1bits_t;
PIR1bits_t PIR1bits ; //SWAP 0x011;
// bitfield macros
#define _PIR1_TMR1IF_POSN                                   0x0
#define _PIR1_TMR1IF_POSITION                               0x0
#define _PIR1_TMR1IF_SIZE                                   0x1
#define _PIR1_TMR1IF_LENGTH                                 0x1
#define _PIR1_TMR1IF_MASK                                   0x1
#define _PIR1_TMR2IF_POSN                                   0x1
#define _PIR1_TMR2IF_POSITION                               0x1
#define _PIR1_TMR2IF_SIZE                                   0x1
#define _PIR1_TMR2IF_LENGTH                                 0x1
#define _PIR1_TMR2IF_MASK                                   0x2
#define _PIR1_CCP1IF_POSN                                   0x2
#define _PIR1_CCP1IF_POSITION                               0x2
#define _PIR1_CCP1IF_SIZE                                   0x1
#define _PIR1_CCP1IF_LENGTH                                 0x1
#define _PIR1_CCP1IF_MASK                                   0x4
#define _PIR1_SSP1IF_POSN                                   0x3
#define _PIR1_SSP1IF_POSITION                               0x3
#define _PIR1_SSP1IF_SIZE                                   0x1
#define _PIR1_SSP1IF_LENGTH                                 0x1
#define _PIR1_SSP1IF_MASK                                   0x8
#define _PIR1_TXIF_POSN                                     0x4
#define _PIR1_TXIF_POSITION                                 0x4
#define _PIR1_TXIF_SIZE                                     0x1
#define _PIR1_TXIF_LENGTH                                   0x1
#define _PIR1_TXIF_MASK                                     0x10
#define _PIR1_RCIF_POSN                                     0x5
#define _PIR1_RCIF_POSITION                                 0x5
#define _PIR1_RCIF_SIZE                                     0x1
#define _PIR1_RCIF_LENGTH                                   0x1
#define _PIR1_RCIF_MASK                                     0x20
#define _PIR1_ADIF_POSN                                     0x6
#define _PIR1_ADIF_POSITION                                 0x6
#define _PIR1_ADIF_SIZE                                     0x1
#define _PIR1_ADIF_LENGTH                                   0x1
#define _PIR1_ADIF_MASK                                     0x40
#define _PIR1_TMR1GIF_POSN                                  0x7
#define _PIR1_TMR1GIF_POSITION                              0x7
#define _PIR1_TMR1GIF_SIZE                                  0x1
#define _PIR1_TMR1GIF_LENGTH                                0x1
#define _PIR1_TMR1GIF_MASK                                  0x80

// Register: PIR2
unsigned char           PIR2                ; //SWAP 0x012;
#ifndef _LIB_BUILD
asm("PIR2 equ 012h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IF                 :1;
        unsigned C3IF                   :1;
        unsigned                        :1;
        unsigned BCL1IF                 :1;
        unsigned EEIF                   :1;
        unsigned C1IF                   :1;
        unsigned C2IF                   :1;
        unsigned OSFIF                  :1;
    };
} PIR2bits_t;
PIR2bits_t PIR2bits ; //SWAP 0x012;
// bitfield macros
#define _PIR2_CCP2IF_POSN                                   0x0
#define _PIR2_CCP2IF_POSITION                               0x0
#define _PIR2_CCP2IF_SIZE                                   0x1
#define _PIR2_CCP2IF_LENGTH                                 0x1
#define _PIR2_CCP2IF_MASK                                   0x1
#define _PIR2_C3IF_POSN                                     0x1
#define _PIR2_C3IF_POSITION                                 0x1
#define _PIR2_C3IF_SIZE                                     0x1
#define _PIR2_C3IF_LENGTH                                   0x1
#define _PIR2_C3IF_MASK                                     0x2
#define _PIR2_BCL1IF_POSN                                   0x3
#define _PIR2_BCL1IF_POSITION                               0x3
#define _PIR2_BCL1IF_SIZE                                   0x1
#define _PIR2_BCL1IF_LENGTH                                 0x1
#define _PIR2_BCL1IF_MASK                                   0x8
#define _PIR2_EEIF_POSN                                     0x4
#define _PIR2_EEIF_POSITION                                 0x4
#define _PIR2_EEIF_SIZE                                     0x1
#define _PIR2_EEIF_LENGTH                                   0x1
#define _PIR2_EEIF_MASK                                     0x10
#define _PIR2_C1IF_POSN                                     0x5
#define _PIR2_C1IF_POSITION                                 0x5
#define _PIR2_C1IF_SIZE                                     0x1
#define _PIR2_C1IF_LENGTH                                   0x1
#define _PIR2_C1IF_MASK                                     0x20
#define _PIR2_C2IF_POSN                                     0x6
#define _PIR2_C2IF_POSITION                                 0x6
#define _PIR2_C2IF_SIZE                                     0x1
#define _PIR2_C2IF_LENGTH                                   0x1
#define _PIR2_C2IF_MASK                                     0x40
#define _PIR2_OSFIF_POSN                                    0x7
#define _PIR2_OSFIF_POSITION                                0x7
#define _PIR2_OSFIF_SIZE                                    0x1
#define _PIR2_OSFIF_LENGTH                                  0x1
#define _PIR2_OSFIF_MASK                                    0x80

// Register: PIR4
unsigned char           PIR4                ; //SWAP 0x014;
#ifndef _LIB_BUILD
asm("PIR4 equ 014h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1SIF               :1;
        unsigned PSMC2SIF               :1;
        unsigned                        :2;
        unsigned PSMC1TIF               :1;
        unsigned PSMC2TIF               :1;
    };
} PIR4bits_t;
PIR4bits_t PIR4bits ; //SWAP 0x014;
// bitfield macros
#define _PIR4_PSMC1SIF_POSN                                 0x0
#define _PIR4_PSMC1SIF_POSITION                             0x0
#define _PIR4_PSMC1SIF_SIZE                                 0x1
#define _PIR4_PSMC1SIF_LENGTH                               0x1
#define _PIR4_PSMC1SIF_MASK                                 0x1
#define _PIR4_PSMC2SIF_POSN                                 0x1
#define _PIR4_PSMC2SIF_POSITION                             0x1
#define _PIR4_PSMC2SIF_SIZE                                 0x1
#define _PIR4_PSMC2SIF_LENGTH                               0x1
#define _PIR4_PSMC2SIF_MASK                                 0x2
#define _PIR4_PSMC1TIF_POSN                                 0x4
#define _PIR4_PSMC1TIF_POSITION                             0x4
#define _PIR4_PSMC1TIF_SIZE                                 0x1
#define _PIR4_PSMC1TIF_LENGTH                               0x1
#define _PIR4_PSMC1TIF_MASK                                 0x10
#define _PIR4_PSMC2TIF_POSN                                 0x5
#define _PIR4_PSMC2TIF_POSITION                             0x5
#define _PIR4_PSMC2TIF_SIZE                                 0x1
#define _PIR4_PSMC2TIF_LENGTH                               0x1
#define _PIR4_PSMC2TIF_MASK                                 0x20

// Register: TMR0
unsigned char           TMR0                ; //SWAP 0x015;
#ifndef _LIB_BUILD
asm("TMR0 equ 015h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR0                   :8;
    };
} TMR0bits_t;
TMR0bits_t TMR0bits ; //SWAP 0x015;
// bitfield macros
#define _TMR0_TMR0_POSN                                     0x0
#define _TMR0_TMR0_POSITION                                 0x0
#define _TMR0_TMR0_SIZE                                     0x8
#define _TMR0_TMR0_LENGTH                                   0x8
#define _TMR0_TMR0_MASK                                     0xFF

// Register: TMR1
unsigned short          TMR1                ; //SWAP 0x016;
#ifndef _LIB_BUILD
asm("TMR1 equ 016h");
#endif

// Register: TMR1L
unsigned char           TMR1L               ; //SWAP 0x016;
#ifndef _LIB_BUILD
asm("TMR1L equ 016h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1L                  :8;
    };
} TMR1Lbits_t;
TMR1Lbits_t TMR1Lbits ; //SWAP 0x016;
// bitfield macros
#define _TMR1L_TMR1L_POSN                                   0x0
#define _TMR1L_TMR1L_POSITION                               0x0
#define _TMR1L_TMR1L_SIZE                                   0x8
#define _TMR1L_TMR1L_LENGTH                                 0x8
#define _TMR1L_TMR1L_MASK                                   0xFF

// Register: TMR1H
unsigned char           TMR1H               ; //SWAP 0x017;
#ifndef _LIB_BUILD
asm("TMR1H equ 017h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1H                  :8;
    };
} TMR1Hbits_t;
TMR1Hbits_t TMR1Hbits ; //SWAP 0x017;
// bitfield macros
#define _TMR1H_TMR1H_POSN                                   0x0
#define _TMR1H_TMR1H_POSITION                               0x0
#define _TMR1H_TMR1H_SIZE                                   0x8
#define _TMR1H_TMR1H_LENGTH                                 0x8
#define _TMR1H_TMR1H_MASK                                   0xFF

// Register: T1CON
unsigned char           T1CON               ; //SWAP 0x018;
#ifndef _LIB_BUILD
asm("T1CON equ 018h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1ON                 :1;
        unsigned                        :1;
        unsigned nT1SYNC                :1;
        unsigned T1OSCEN                :1;
        unsigned T1CKPS0                :1;
        unsigned T1CKPS1                :1;
        unsigned TMR1CS0                :1;
        unsigned TMR1CS1                :1;
    };
    struct {
        unsigned                        :4;
        unsigned T1CKPS                 :2;
        unsigned TMR1CS                 :2;
    };
} T1CONbits_t;
T1CONbits_t T1CONbits ; //SWAP 0x018;
// bitfield macros
#define _T1CON_TMR1ON_POSN                                  0x0
#define _T1CON_TMR1ON_POSITION                              0x0
#define _T1CON_TMR1ON_SIZE                                  0x1
#define _T1CON_TMR1ON_LENGTH                                0x1
#define _T1CON_TMR1ON_MASK                                  0x1
#define _T1CON_nT1SYNC_POSN                                 0x2
#define _T1CON_nT1SYNC_POSITION                             0x2
#define _T1CON_nT1SYNC_SIZE                                 0x1
#define _T1CON_nT1SYNC_LENGTH                               0x1
#define _T1CON_nT1SYNC_MASK                                 0x4
#define _T1CON_T1OSCEN_POSN                                 0x3
#define _T1CON_T1OSCEN_POSITION                             0x3
#define _T1CON_T1OSCEN_SIZE                                 0x1
#define _T1CON_T1OSCEN_LENGTH                               0x1
#define _T1CON_T1OSCEN_MASK                                 0x8
#define _T1CON_T1CKPS0_POSN                                 0x4
#define _T1CON_T1CKPS0_POSITION                             0x4
#define _T1CON_T1CKPS0_SIZE                                 0x1
#define _T1CON_T1CKPS0_LENGTH                               0x1
#define _T1CON_T1CKPS0_MASK                                 0x10
#define _T1CON_T1CKPS1_POSN                                 0x5
#define _T1CON_T1CKPS1_POSITION                             0x5
#define _T1CON_T1CKPS1_SIZE                                 0x1
#define _T1CON_T1CKPS1_LENGTH                               0x1
#define _T1CON_T1CKPS1_MASK                                 0x20
#define _T1CON_TMR1CS0_POSN                                 0x6
#define _T1CON_TMR1CS0_POSITION                             0x6
#define _T1CON_TMR1CS0_SIZE                                 0x1
#define _T1CON_TMR1CS0_LENGTH                               0x1
#define _T1CON_TMR1CS0_MASK                                 0x40
#define _T1CON_TMR1CS1_POSN                                 0x7
#define _T1CON_TMR1CS1_POSITION                             0x7
#define _T1CON_TMR1CS1_SIZE                                 0x1
#define _T1CON_TMR1CS1_LENGTH                               0x1
#define _T1CON_TMR1CS1_MASK                                 0x80
#define _T1CON_T1CKPS_POSN                                  0x4
#define _T1CON_T1CKPS_POSITION                              0x4
#define _T1CON_T1CKPS_SIZE                                  0x2
#define _T1CON_T1CKPS_LENGTH                                0x2
#define _T1CON_T1CKPS_MASK                                  0x30
#define _T1CON_TMR1CS_POSN                                  0x6
#define _T1CON_TMR1CS_POSITION                              0x6
#define _T1CON_TMR1CS_SIZE                                  0x2
#define _T1CON_TMR1CS_LENGTH                                0x2
#define _T1CON_TMR1CS_MASK                                  0xC0

// Register: T1GCON
unsigned char           T1GCON              ; //SWAP 0x019;
#ifndef _LIB_BUILD
asm("T1GCON equ 019h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T1GSS0                 :1;
        unsigned T1GSS1                 :1;
        unsigned T1GVAL                 :1;
        unsigned T1GGO                  :1;
        unsigned T1GSPM                 :1;
        unsigned T1GTM                  :1;
        unsigned T1GPOL                 :1;
        unsigned TMR1GE                 :1;
    };
    struct {
        unsigned T1GSS                  :2;
    };
} T1GCONbits_t;
T1GCONbits_t T1GCONbits ; //SWAP 0x019;
// bitfield macros
#define _T1GCON_T1GSS0_POSN                                 0x0
#define _T1GCON_T1GSS0_POSITION                             0x0
#define _T1GCON_T1GSS0_SIZE                                 0x1
#define _T1GCON_T1GSS0_LENGTH                               0x1
#define _T1GCON_T1GSS0_MASK                                 0x1
#define _T1GCON_T1GSS1_POSN                                 0x1
#define _T1GCON_T1GSS1_POSITION                             0x1
#define _T1GCON_T1GSS1_SIZE                                 0x1
#define _T1GCON_T1GSS1_LENGTH                               0x1
#define _T1GCON_T1GSS1_MASK                                 0x2
#define _T1GCON_T1GVAL_POSN                                 0x2
#define _T1GCON_T1GVAL_POSITION                             0x2
#define _T1GCON_T1GVAL_SIZE                                 0x1
#define _T1GCON_T1GVAL_LENGTH                               0x1
#define _T1GCON_T1GVAL_MASK                                 0x4
#define _T1GCON_T1GGO_POSN                                  0x3
#define _T1GCON_T1GGO_POSITION                              0x3
#define _T1GCON_T1GGO_SIZE                                  0x1
#define _T1GCON_T1GGO_LENGTH                                0x1
#define _T1GCON_T1GGO_MASK                                  0x8
#define _T1GCON_T1GSPM_POSN                                 0x4
#define _T1GCON_T1GSPM_POSITION                             0x4
#define _T1GCON_T1GSPM_SIZE                                 0x1
#define _T1GCON_T1GSPM_LENGTH                               0x1
#define _T1GCON_T1GSPM_MASK                                 0x10
#define _T1GCON_T1GTM_POSN                                  0x5
#define _T1GCON_T1GTM_POSITION                              0x5
#define _T1GCON_T1GTM_SIZE                                  0x1
#define _T1GCON_T1GTM_LENGTH                                0x1
#define _T1GCON_T1GTM_MASK                                  0x20
#define _T1GCON_T1GPOL_POSN                                 0x6
#define _T1GCON_T1GPOL_POSITION                             0x6
#define _T1GCON_T1GPOL_SIZE                                 0x1
#define _T1GCON_T1GPOL_LENGTH                               0x1
#define _T1GCON_T1GPOL_MASK                                 0x40
#define _T1GCON_TMR1GE_POSN                                 0x7
#define _T1GCON_TMR1GE_POSITION                             0x7
#define _T1GCON_TMR1GE_SIZE                                 0x1
#define _T1GCON_TMR1GE_LENGTH                               0x1
#define _T1GCON_TMR1GE_MASK                                 0x80
#define _T1GCON_T1GSS_POSN                                  0x0
#define _T1GCON_T1GSS_POSITION                              0x0
#define _T1GCON_T1GSS_SIZE                                  0x2
#define _T1GCON_T1GSS_LENGTH                                0x2
#define _T1GCON_T1GSS_MASK                                  0x3

// Register: TMR2
unsigned char           TMR2                ; //SWAP 0x01A;
#ifndef _LIB_BUILD
asm("TMR2 equ 01Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR2                   :8;
    };
} TMR2bits_t;
TMR2bits_t TMR2bits ; //SWAP 0x01A;
// bitfield macros
#define _TMR2_TMR2_POSN                                     0x0
#define _TMR2_TMR2_POSITION                                 0x0
#define _TMR2_TMR2_SIZE                                     0x8
#define _TMR2_TMR2_LENGTH                                   0x8
#define _TMR2_TMR2_MASK                                     0xFF

// Register: PR2
unsigned char           PR2                 ; //SWAP 0x01B;
#ifndef _LIB_BUILD
asm("PR2 equ 01Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PR2                    :8;
    };
} PR2bits_t;
PR2bits_t PR2bits ; //SWAP 0x01B;
// bitfield macros
#define _PR2_PR2_POSN                                       0x0
#define _PR2_PR2_POSITION                                   0x0
#define _PR2_PR2_SIZE                                       0x8
#define _PR2_PR2_LENGTH                                     0x8
#define _PR2_PR2_MASK                                       0xFF

// Register: T2CON
unsigned char           T2CON               ; //SWAP 0x01C;
#ifndef _LIB_BUILD
asm("T2CON equ 01Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned T2CKPS0                :1;
        unsigned T2CKPS1                :1;
        unsigned TMR2ON                 :1;
        unsigned T2OUTPS0               :1;
        unsigned T2OUTPS1               :1;
        unsigned T2OUTPS2               :1;
        unsigned T2OUTPS3               :1;
    };
    struct {
        unsigned T2CKPS                 :2;
        unsigned                        :1;
        unsigned T2OUTPS                :4;
    };
} T2CONbits_t;
T2CONbits_t T2CONbits ; //SWAP 0x01C;
// bitfield macros
#define _T2CON_T2CKPS0_POSN                                 0x0
#define _T2CON_T2CKPS0_POSITION                             0x0
#define _T2CON_T2CKPS0_SIZE                                 0x1
#define _T2CON_T2CKPS0_LENGTH                               0x1
#define _T2CON_T2CKPS0_MASK                                 0x1
#define _T2CON_T2CKPS1_POSN                                 0x1
#define _T2CON_T2CKPS1_POSITION                             0x1
#define _T2CON_T2CKPS1_SIZE                                 0x1
#define _T2CON_T2CKPS1_LENGTH                               0x1
#define _T2CON_T2CKPS1_MASK                                 0x2
#define _T2CON_TMR2ON_POSN                                  0x2
#define _T2CON_TMR2ON_POSITION                              0x2
#define _T2CON_TMR2ON_SIZE                                  0x1
#define _T2CON_TMR2ON_LENGTH                                0x1
#define _T2CON_TMR2ON_MASK                                  0x4
#define _T2CON_T2OUTPS0_POSN                                0x3
#define _T2CON_T2OUTPS0_POSITION                            0x3
#define _T2CON_T2OUTPS0_SIZE                                0x1
#define _T2CON_T2OUTPS0_LENGTH                              0x1
#define _T2CON_T2OUTPS0_MASK                                0x8
#define _T2CON_T2OUTPS1_POSN                                0x4
#define _T2CON_T2OUTPS1_POSITION                            0x4
#define _T2CON_T2OUTPS1_SIZE                                0x1
#define _T2CON_T2OUTPS1_LENGTH                              0x1
#define _T2CON_T2OUTPS1_MASK                                0x10
#define _T2CON_T2OUTPS2_POSN                                0x5
#define _T2CON_T2OUTPS2_POSITION                            0x5
#define _T2CON_T2OUTPS2_SIZE                                0x1
#define _T2CON_T2OUTPS2_LENGTH                              0x1
#define _T2CON_T2OUTPS2_MASK                                0x20
#define _T2CON_T2OUTPS3_POSN                                0x6
#define _T2CON_T2OUTPS3_POSITION                            0x6
#define _T2CON_T2OUTPS3_SIZE                                0x1
#define _T2CON_T2OUTPS3_LENGTH                              0x1
#define _T2CON_T2OUTPS3_MASK                                0x40
#define _T2CON_T2CKPS_POSN                                  0x0
#define _T2CON_T2CKPS_POSITION                              0x0
#define _T2CON_T2CKPS_SIZE                                  0x2
#define _T2CON_T2CKPS_LENGTH                                0x2
#define _T2CON_T2CKPS_MASK                                  0x3
#define _T2CON_T2OUTPS_POSN                                 0x3
#define _T2CON_T2OUTPS_POSITION                             0x3
#define _T2CON_T2OUTPS_SIZE                                 0x4
#define _T2CON_T2OUTPS_LENGTH                               0x4
#define _T2CON_T2OUTPS_MASK                                 0x78

// Register: TRISA
unsigned char           TRISA               ; //SWAP 0x08C;
#ifndef _LIB_BUILD
asm("TRISA equ 08Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISA0                 :1;
        unsigned TRISA1                 :1;
        unsigned TRISA2                 :1;
        unsigned TRISA3                 :1;
        unsigned TRISA4                 :1;
        unsigned TRISA5                 :1;
        unsigned TRISA6                 :1;
        unsigned TRISA7                 :1;
    };
    struct {
        unsigned TRISA                  :8;
    };
} TRISAbits_t;
TRISAbits_t TRISAbits ; //SWAP 0x08C;
// bitfield macros
#define _TRISA_TRISA0_POSN                                  0x0
#define _TRISA_TRISA0_POSITION                              0x0
#define _TRISA_TRISA0_SIZE                                  0x1
#define _TRISA_TRISA0_LENGTH                                0x1
#define _TRISA_TRISA0_MASK                                  0x1
#define _TRISA_TRISA1_POSN                                  0x1
#define _TRISA_TRISA1_POSITION                              0x1
#define _TRISA_TRISA1_SIZE                                  0x1
#define _TRISA_TRISA1_LENGTH                                0x1
#define _TRISA_TRISA1_MASK                                  0x2
#define _TRISA_TRISA2_POSN                                  0x2
#define _TRISA_TRISA2_POSITION                              0x2
#define _TRISA_TRISA2_SIZE                                  0x1
#define _TRISA_TRISA2_LENGTH                                0x1
#define _TRISA_TRISA2_MASK                                  0x4
#define _TRISA_TRISA3_POSN                                  0x3
#define _TRISA_TRISA3_POSITION                              0x3
#define _TRISA_TRISA3_SIZE                                  0x1
#define _TRISA_TRISA3_LENGTH                                0x1
#define _TRISA_TRISA3_MASK                                  0x8
#define _TRISA_TRISA4_POSN                                  0x4
#define _TRISA_TRISA4_POSITION                              0x4
#define _TRISA_TRISA4_SIZE                                  0x1
#define _TRISA_TRISA4_LENGTH                                0x1
#define _TRISA_TRISA4_MASK                                  0x10
#define _TRISA_TRISA5_POSN                                  0x5
#define _TRISA_TRISA5_POSITION                              0x5
#define _TRISA_TRISA5_SIZE                                  0x1
#define _TRISA_TRISA5_LENGTH                                0x1
#define _TRISA_TRISA5_MASK                                  0x20
#define _TRISA_TRISA6_POSN                                  0x6
#define _TRISA_TRISA6_POSITION                              0x6
#define _TRISA_TRISA6_SIZE                                  0x1
#define _TRISA_TRISA6_LENGTH                                0x1
#define _TRISA_TRISA6_MASK                                  0x40
#define _TRISA_TRISA7_POSN                                  0x7
#define _TRISA_TRISA7_POSITION                              0x7
#define _TRISA_TRISA7_SIZE                                  0x1
#define _TRISA_TRISA7_LENGTH                                0x1
#define _TRISA_TRISA7_MASK                                  0x80
#define _TRISA_TRISA_POSN                                   0x0
#define _TRISA_TRISA_POSITION                               0x0
#define _TRISA_TRISA_SIZE                                   0x8
#define _TRISA_TRISA_LENGTH                                 0x8
#define _TRISA_TRISA_MASK                                   0xFF

// Register: TRISB
unsigned char           TRISB               ; //SWAP 0x08D;
#ifndef _LIB_BUILD
asm("TRISB equ 08Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISB0                 :1;
        unsigned TRISB1                 :1;
        unsigned TRISB2                 :1;
        unsigned TRISB3                 :1;
        unsigned TRISB4                 :1;
        unsigned TRISB5                 :1;
        unsigned TRISB6                 :1;
        unsigned TRISB7                 :1;
    };
    struct {
        unsigned TRISB                  :8;
    };
} TRISBbits_t;
TRISBbits_t TRISBbits ; //SWAP 0x08D;
// bitfield macros
#define _TRISB_TRISB0_POSN                                  0x0
#define _TRISB_TRISB0_POSITION                              0x0
#define _TRISB_TRISB0_SIZE                                  0x1
#define _TRISB_TRISB0_LENGTH                                0x1
#define _TRISB_TRISB0_MASK                                  0x1
#define _TRISB_TRISB1_POSN                                  0x1
#define _TRISB_TRISB1_POSITION                              0x1
#define _TRISB_TRISB1_SIZE                                  0x1
#define _TRISB_TRISB1_LENGTH                                0x1
#define _TRISB_TRISB1_MASK                                  0x2
#define _TRISB_TRISB2_POSN                                  0x2
#define _TRISB_TRISB2_POSITION                              0x2
#define _TRISB_TRISB2_SIZE                                  0x1
#define _TRISB_TRISB2_LENGTH                                0x1
#define _TRISB_TRISB2_MASK                                  0x4
#define _TRISB_TRISB3_POSN                                  0x3
#define _TRISB_TRISB3_POSITION                              0x3
#define _TRISB_TRISB3_SIZE                                  0x1
#define _TRISB_TRISB3_LENGTH                                0x1
#define _TRISB_TRISB3_MASK                                  0x8
#define _TRISB_TRISB4_POSN                                  0x4
#define _TRISB_TRISB4_POSITION                              0x4
#define _TRISB_TRISB4_SIZE                                  0x1
#define _TRISB_TRISB4_LENGTH                                0x1
#define _TRISB_TRISB4_MASK                                  0x10
#define _TRISB_TRISB5_POSN                                  0x5
#define _TRISB_TRISB5_POSITION                              0x5
#define _TRISB_TRISB5_SIZE                                  0x1
#define _TRISB_TRISB5_LENGTH                                0x1
#define _TRISB_TRISB5_MASK                                  0x20
#define _TRISB_TRISB6_POSN                                  0x6
#define _TRISB_TRISB6_POSITION                              0x6
#define _TRISB_TRISB6_SIZE                                  0x1
#define _TRISB_TRISB6_LENGTH                                0x1
#define _TRISB_TRISB6_MASK                                  0x40
#define _TRISB_TRISB7_POSN                                  0x7
#define _TRISB_TRISB7_POSITION                              0x7
#define _TRISB_TRISB7_SIZE                                  0x1
#define _TRISB_TRISB7_LENGTH                                0x1
#define _TRISB_TRISB7_MASK                                  0x80
#define _TRISB_TRISB_POSN                                   0x0
#define _TRISB_TRISB_POSITION                               0x0
#define _TRISB_TRISB_SIZE                                   0x8
#define _TRISB_TRISB_LENGTH                                 0x8
#define _TRISB_TRISB_MASK                                   0xFF

// Register: TRISC
unsigned char           TRISC               ; //SWAP 0x08E;
#ifndef _LIB_BUILD
asm("TRISC equ 08Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TRISC0                 :1;
        unsigned TRISC1                 :1;
        unsigned TRISC2                 :1;
        unsigned TRISC3                 :1;
        unsigned TRISC4                 :1;
        unsigned TRISC5                 :1;
        unsigned TRISC6                 :1;
        unsigned TRISC7                 :1;
    };
    struct {
        unsigned TRISC                  :8;
    };
} TRISCbits_t;
TRISCbits_t TRISCbits ; //SWAP 0x08E;
// bitfield macros
#define _TRISC_TRISC0_POSN                                  0x0
#define _TRISC_TRISC0_POSITION                              0x0
#define _TRISC_TRISC0_SIZE                                  0x1
#define _TRISC_TRISC0_LENGTH                                0x1
#define _TRISC_TRISC0_MASK                                  0x1
#define _TRISC_TRISC1_POSN                                  0x1
#define _TRISC_TRISC1_POSITION                              0x1
#define _TRISC_TRISC1_SIZE                                  0x1
#define _TRISC_TRISC1_LENGTH                                0x1
#define _TRISC_TRISC1_MASK                                  0x2
#define _TRISC_TRISC2_POSN                                  0x2
#define _TRISC_TRISC2_POSITION                              0x2
#define _TRISC_TRISC2_SIZE                                  0x1
#define _TRISC_TRISC2_LENGTH                                0x1
#define _TRISC_TRISC2_MASK                                  0x4
#define _TRISC_TRISC3_POSN                                  0x3
#define _TRISC_TRISC3_POSITION                              0x3
#define _TRISC_TRISC3_SIZE                                  0x1
#define _TRISC_TRISC3_LENGTH                                0x1
#define _TRISC_TRISC3_MASK                                  0x8
#define _TRISC_TRISC4_POSN                                  0x4
#define _TRISC_TRISC4_POSITION                              0x4
#define _TRISC_TRISC4_SIZE                                  0x1
#define _TRISC_TRISC4_LENGTH                                0x1
#define _TRISC_TRISC4_MASK                                  0x10
#define _TRISC_TRISC5_POSN                                  0x5
#define _TRISC_TRISC5_POSITION                              0x5
#define _TRISC_TRISC5_SIZE                                  0x1
#define _TRISC_TRISC5_LENGTH                                0x1
#define _TRISC_TRISC5_MASK                                  0x20
#define _TRISC_TRISC6_POSN                                  0x6
#define _TRISC_TRISC6_POSITION                              0x6
#define _TRISC_TRISC6_SIZE                                  0x1
#define _TRISC_TRISC6_LENGTH                                0x1
#define _TRISC_TRISC6_MASK                                  0x40
#define _TRISC_TRISC7_POSN                                  0x7
#define _TRISC_TRISC7_POSITION                              0x7
#define _TRISC_TRISC7_SIZE                                  0x1
#define _TRISC_TRISC7_LENGTH                                0x1
#define _TRISC_TRISC7_MASK                                  0x80
#define _TRISC_TRISC_POSN                                   0x0
#define _TRISC_TRISC_POSITION                               0x0
#define _TRISC_TRISC_SIZE                                   0x8
#define _TRISC_TRISC_LENGTH                                 0x8
#define _TRISC_TRISC_MASK                                   0xFF

// Register: TRISE
unsigned char           TRISE               ; //SWAP 0x090;
#ifndef _LIB_BUILD
asm("TRISE equ 090h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned TRISE3                 :1;
    };
} TRISEbits_t;
TRISEbits_t TRISEbits ; //SWAP 0x090;
// bitfield macros
#define _TRISE_TRISE3_POSN                                  0x3
#define _TRISE_TRISE3_POSITION                              0x3
#define _TRISE_TRISE3_SIZE                                  0x1
#define _TRISE_TRISE3_LENGTH                                0x1
#define _TRISE_TRISE3_MASK                                  0x8

// Register: PIE1
unsigned char           PIE1                ; //SWAP 0x091;
#ifndef _LIB_BUILD
asm("PIE1 equ 091h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TMR1IE                 :1;
        unsigned TMR2IE                 :1;
        unsigned CCP1IE                 :1;
        unsigned SSP1IE                 :1;
        unsigned TXIE                   :1;
        unsigned RCIE                   :1;
        unsigned ADIE                   :1;
        unsigned TMR1GIE                :1;
    };
} PIE1bits_t;
PIE1bits_t PIE1bits ; //SWAP 0x091;
// bitfield macros
#define _PIE1_TMR1IE_POSN                                   0x0
#define _PIE1_TMR1IE_POSITION                               0x0
#define _PIE1_TMR1IE_SIZE                                   0x1
#define _PIE1_TMR1IE_LENGTH                                 0x1
#define _PIE1_TMR1IE_MASK                                   0x1
#define _PIE1_TMR2IE_POSN                                   0x1
#define _PIE1_TMR2IE_POSITION                               0x1
#define _PIE1_TMR2IE_SIZE                                   0x1
#define _PIE1_TMR2IE_LENGTH                                 0x1
#define _PIE1_TMR2IE_MASK                                   0x2
#define _PIE1_CCP1IE_POSN                                   0x2
#define _PIE1_CCP1IE_POSITION                               0x2
#define _PIE1_CCP1IE_SIZE                                   0x1
#define _PIE1_CCP1IE_LENGTH                                 0x1
#define _PIE1_CCP1IE_MASK                                   0x4
#define _PIE1_SSP1IE_POSN                                   0x3
#define _PIE1_SSP1IE_POSITION                               0x3
#define _PIE1_SSP1IE_SIZE                                   0x1
#define _PIE1_SSP1IE_LENGTH                                 0x1
#define _PIE1_SSP1IE_MASK                                   0x8
#define _PIE1_TXIE_POSN                                     0x4
#define _PIE1_TXIE_POSITION                                 0x4
#define _PIE1_TXIE_SIZE                                     0x1
#define _PIE1_TXIE_LENGTH                                   0x1
#define _PIE1_TXIE_MASK                                     0x10
#define _PIE1_RCIE_POSN                                     0x5
#define _PIE1_RCIE_POSITION                                 0x5
#define _PIE1_RCIE_SIZE                                     0x1
#define _PIE1_RCIE_LENGTH                                   0x1
#define _PIE1_RCIE_MASK                                     0x20
#define _PIE1_ADIE_POSN                                     0x6
#define _PIE1_ADIE_POSITION                                 0x6
#define _PIE1_ADIE_SIZE                                     0x1
#define _PIE1_ADIE_LENGTH                                   0x1
#define _PIE1_ADIE_MASK                                     0x40
#define _PIE1_TMR1GIE_POSN                                  0x7
#define _PIE1_TMR1GIE_POSITION                              0x7
#define _PIE1_TMR1GIE_SIZE                                  0x1
#define _PIE1_TMR1GIE_LENGTH                                0x1
#define _PIE1_TMR1GIE_MASK                                  0x80

// Register: PIE2
unsigned char           PIE2                ; //SWAP 0x092;
#ifndef _LIB_BUILD
asm("PIE2 equ 092h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2IE                 :1;
        unsigned C3IE                   :1;
        unsigned                        :1;
        unsigned BCL1IE                 :1;
        unsigned EEIE                   :1;
        unsigned C1IE                   :1;
        unsigned C2IE                   :1;
        unsigned OSFIE                  :1;
    };
} PIE2bits_t;
PIE2bits_t PIE2bits ; //SWAP 0x092;
// bitfield macros
#define _PIE2_CCP2IE_POSN                                   0x0
#define _PIE2_CCP2IE_POSITION                               0x0
#define _PIE2_CCP2IE_SIZE                                   0x1
#define _PIE2_CCP2IE_LENGTH                                 0x1
#define _PIE2_CCP2IE_MASK                                   0x1
#define _PIE2_C3IE_POSN                                     0x1
#define _PIE2_C3IE_POSITION                                 0x1
#define _PIE2_C3IE_SIZE                                     0x1
#define _PIE2_C3IE_LENGTH                                   0x1
#define _PIE2_C3IE_MASK                                     0x2
#define _PIE2_BCL1IE_POSN                                   0x3
#define _PIE2_BCL1IE_POSITION                               0x3
#define _PIE2_BCL1IE_SIZE                                   0x1
#define _PIE2_BCL1IE_LENGTH                                 0x1
#define _PIE2_BCL1IE_MASK                                   0x8
#define _PIE2_EEIE_POSN                                     0x4
#define _PIE2_EEIE_POSITION                                 0x4
#define _PIE2_EEIE_SIZE                                     0x1
#define _PIE2_EEIE_LENGTH                                   0x1
#define _PIE2_EEIE_MASK                                     0x10
#define _PIE2_C1IE_POSN                                     0x5
#define _PIE2_C1IE_POSITION                                 0x5
#define _PIE2_C1IE_SIZE                                     0x1
#define _PIE2_C1IE_LENGTH                                   0x1
#define _PIE2_C1IE_MASK                                     0x20
#define _PIE2_C2IE_POSN                                     0x6
#define _PIE2_C2IE_POSITION                                 0x6
#define _PIE2_C2IE_SIZE                                     0x1
#define _PIE2_C2IE_LENGTH                                   0x1
#define _PIE2_C2IE_MASK                                     0x40
#define _PIE2_OSFIE_POSN                                    0x7
#define _PIE2_OSFIE_POSITION                                0x7
#define _PIE2_OSFIE_SIZE                                    0x1
#define _PIE2_OSFIE_LENGTH                                  0x1
#define _PIE2_OSFIE_MASK                                    0x80

// Register: PIE4
unsigned char           PIE4                ; //SWAP 0x094;
#ifndef _LIB_BUILD
asm("PIE4 equ 094h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1SIE               :1;
        unsigned PSMC2SIE               :1;
        unsigned                        :2;
        unsigned PSMC1TIE               :1;
        unsigned PSMC2TIE               :1;
    };
} PIE4bits_t;
PIE4bits_t PIE4bits ; //SWAP 0x094;
// bitfield macros
#define _PIE4_PSMC1SIE_POSN                                 0x0
#define _PIE4_PSMC1SIE_POSITION                             0x0
#define _PIE4_PSMC1SIE_SIZE                                 0x1
#define _PIE4_PSMC1SIE_LENGTH                               0x1
#define _PIE4_PSMC1SIE_MASK                                 0x1
#define _PIE4_PSMC2SIE_POSN                                 0x1
#define _PIE4_PSMC2SIE_POSITION                             0x1
#define _PIE4_PSMC2SIE_SIZE                                 0x1
#define _PIE4_PSMC2SIE_LENGTH                               0x1
#define _PIE4_PSMC2SIE_MASK                                 0x2
#define _PIE4_PSMC1TIE_POSN                                 0x4
#define _PIE4_PSMC1TIE_POSITION                             0x4
#define _PIE4_PSMC1TIE_SIZE                                 0x1
#define _PIE4_PSMC1TIE_LENGTH                               0x1
#define _PIE4_PSMC1TIE_MASK                                 0x10
#define _PIE4_PSMC2TIE_POSN                                 0x5
#define _PIE4_PSMC2TIE_POSITION                             0x5
#define _PIE4_PSMC2TIE_SIZE                                 0x1
#define _PIE4_PSMC2TIE_LENGTH                               0x1
#define _PIE4_PSMC2TIE_MASK                                 0x20

// Register: OPTION_REG
unsigned char           OPTION_REG          ; //SWAP 0x095;
#ifndef _LIB_BUILD
asm("OPTION_REG equ 095h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PS0                    :1;
        unsigned PS1                    :1;
        unsigned PS2                    :1;
        unsigned PSA                    :1;
        unsigned TMR0SE                 :1;
        unsigned TMR0CS                 :1;
        unsigned INTEDG                 :1;
        unsigned nWPUEN                 :1;
    };
    struct {
        unsigned PS                     :3;
        unsigned                        :1;
        unsigned T0SE                   :1;
        unsigned T0CS                   :1;
    };
} OPTION_REGbits_t;
OPTION_REGbits_t OPTION_REGbits ; //SWAP 0x095;
// bitfield macros
#define _OPTION_REG_PS0_POSN                                0x0
#define _OPTION_REG_PS0_POSITION                            0x0
#define _OPTION_REG_PS0_SIZE                                0x1
#define _OPTION_REG_PS0_LENGTH                              0x1
#define _OPTION_REG_PS0_MASK                                0x1
#define _OPTION_REG_PS1_POSN                                0x1
#define _OPTION_REG_PS1_POSITION                            0x1
#define _OPTION_REG_PS1_SIZE                                0x1
#define _OPTION_REG_PS1_LENGTH                              0x1
#define _OPTION_REG_PS1_MASK                                0x2
#define _OPTION_REG_PS2_POSN                                0x2
#define _OPTION_REG_PS2_POSITION                            0x2
#define _OPTION_REG_PS2_SIZE                                0x1
#define _OPTION_REG_PS2_LENGTH                              0x1
#define _OPTION_REG_PS2_MASK                                0x4
#define _OPTION_REG_PSA_POSN                                0x3
#define _OPTION_REG_PSA_POSITION                            0x3
#define _OPTION_REG_PSA_SIZE                                0x1
#define _OPTION_REG_PSA_LENGTH                              0x1
#define _OPTION_REG_PSA_MASK                                0x8
#define _OPTION_REG_TMR0SE_POSN                             0x4
#define _OPTION_REG_TMR0SE_POSITION                         0x4
#define _OPTION_REG_TMR0SE_SIZE                             0x1
#define _OPTION_REG_TMR0SE_LENGTH                           0x1
#define _OPTION_REG_TMR0SE_MASK                             0x10
#define _OPTION_REG_TMR0CS_POSN                             0x5
#define _OPTION_REG_TMR0CS_POSITION                         0x5
#define _OPTION_REG_TMR0CS_SIZE                             0x1
#define _OPTION_REG_TMR0CS_LENGTH                           0x1
#define _OPTION_REG_TMR0CS_MASK                             0x20
#define _OPTION_REG_INTEDG_POSN                             0x6
#define _OPTION_REG_INTEDG_POSITION                         0x6
#define _OPTION_REG_INTEDG_SIZE                             0x1
#define _OPTION_REG_INTEDG_LENGTH                           0x1
#define _OPTION_REG_INTEDG_MASK                             0x40
#define _OPTION_REG_nWPUEN_POSN                             0x7
#define _OPTION_REG_nWPUEN_POSITION                         0x7
#define _OPTION_REG_nWPUEN_SIZE                             0x1
#define _OPTION_REG_nWPUEN_LENGTH                           0x1
#define _OPTION_REG_nWPUEN_MASK                             0x80
#define _OPTION_REG_PS_POSN                                 0x0
#define _OPTION_REG_PS_POSITION                             0x0
#define _OPTION_REG_PS_SIZE                                 0x3
#define _OPTION_REG_PS_LENGTH                               0x3
#define _OPTION_REG_PS_MASK                                 0x7
#define _OPTION_REG_T0SE_POSN                               0x4
#define _OPTION_REG_T0SE_POSITION                           0x4
#define _OPTION_REG_T0SE_SIZE                               0x1
#define _OPTION_REG_T0SE_LENGTH                             0x1
#define _OPTION_REG_T0SE_MASK                               0x10
#define _OPTION_REG_T0CS_POSN                               0x5
#define _OPTION_REG_T0CS_POSITION                           0x5
#define _OPTION_REG_T0CS_SIZE                               0x1
#define _OPTION_REG_T0CS_LENGTH                             0x1
#define _OPTION_REG_T0CS_MASK                               0x20

// Register: PCON
unsigned char           PCON                ; //SWAP 0x096;
#ifndef _LIB_BUILD
asm("PCON equ 096h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned nBOR                   :1;
        unsigned nPOR                   :1;
        unsigned nRI                    :1;
        unsigned nRMCLR                 :1;
        unsigned nRWDT                  :1;
        unsigned                        :1;
        unsigned STKUNF                 :1;
        unsigned STKOVF                 :1;
    };
} PCONbits_t;
PCONbits_t PCONbits ; //SWAP 0x096;
// bitfield macros
#define _PCON_nBOR_POSN                                     0x0
#define _PCON_nBOR_POSITION                                 0x0
#define _PCON_nBOR_SIZE                                     0x1
#define _PCON_nBOR_LENGTH                                   0x1
#define _PCON_nBOR_MASK                                     0x1
#define _PCON_nPOR_POSN                                     0x1
#define _PCON_nPOR_POSITION                                 0x1
#define _PCON_nPOR_SIZE                                     0x1
#define _PCON_nPOR_LENGTH                                   0x1
#define _PCON_nPOR_MASK                                     0x2
#define _PCON_nRI_POSN                                      0x2
#define _PCON_nRI_POSITION                                  0x2
#define _PCON_nRI_SIZE                                      0x1
#define _PCON_nRI_LENGTH                                    0x1
#define _PCON_nRI_MASK                                      0x4
#define _PCON_nRMCLR_POSN                                   0x3
#define _PCON_nRMCLR_POSITION                               0x3
#define _PCON_nRMCLR_SIZE                                   0x1
#define _PCON_nRMCLR_LENGTH                                 0x1
#define _PCON_nRMCLR_MASK                                   0x8
#define _PCON_nRWDT_POSN                                    0x4
#define _PCON_nRWDT_POSITION                                0x4
#define _PCON_nRWDT_SIZE                                    0x1
#define _PCON_nRWDT_LENGTH                                  0x1
#define _PCON_nRWDT_MASK                                    0x10
#define _PCON_STKUNF_POSN                                   0x6
#define _PCON_STKUNF_POSITION                               0x6
#define _PCON_STKUNF_SIZE                                   0x1
#define _PCON_STKUNF_LENGTH                                 0x1
#define _PCON_STKUNF_MASK                                   0x40
#define _PCON_STKOVF_POSN                                   0x7
#define _PCON_STKOVF_POSITION                               0x7
#define _PCON_STKOVF_SIZE                                   0x1
#define _PCON_STKOVF_LENGTH                                 0x1
#define _PCON_STKOVF_MASK                                   0x80

// Register: WDTCON
unsigned char           WDTCON              ; //SWAP 0x097;
#ifndef _LIB_BUILD
asm("WDTCON equ 097h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SWDTEN                 :1;
        unsigned WDTPS0                 :1;
        unsigned WDTPS1                 :1;
        unsigned WDTPS2                 :1;
        unsigned WDTPS3                 :1;
        unsigned WDTPS4                 :1;
    };
    struct {
        unsigned                        :1;
        unsigned WDTPS                  :5;
    };
} WDTCONbits_t;
WDTCONbits_t WDTCONbits ; //SWAP 0x097;
// bitfield macros
#define _WDTCON_SWDTEN_POSN                                 0x0
#define _WDTCON_SWDTEN_POSITION                             0x0
#define _WDTCON_SWDTEN_SIZE                                 0x1
#define _WDTCON_SWDTEN_LENGTH                               0x1
#define _WDTCON_SWDTEN_MASK                                 0x1
#define _WDTCON_WDTPS0_POSN                                 0x1
#define _WDTCON_WDTPS0_POSITION                             0x1
#define _WDTCON_WDTPS0_SIZE                                 0x1
#define _WDTCON_WDTPS0_LENGTH                               0x1
#define _WDTCON_WDTPS0_MASK                                 0x2
#define _WDTCON_WDTPS1_POSN                                 0x2
#define _WDTCON_WDTPS1_POSITION                             0x2
#define _WDTCON_WDTPS1_SIZE                                 0x1
#define _WDTCON_WDTPS1_LENGTH                               0x1
#define _WDTCON_WDTPS1_MASK                                 0x4
#define _WDTCON_WDTPS2_POSN                                 0x3
#define _WDTCON_WDTPS2_POSITION                             0x3
#define _WDTCON_WDTPS2_SIZE                                 0x1
#define _WDTCON_WDTPS2_LENGTH                               0x1
#define _WDTCON_WDTPS2_MASK                                 0x8
#define _WDTCON_WDTPS3_POSN                                 0x4
#define _WDTCON_WDTPS3_POSITION                             0x4
#define _WDTCON_WDTPS3_SIZE                                 0x1
#define _WDTCON_WDTPS3_LENGTH                               0x1
#define _WDTCON_WDTPS3_MASK                                 0x10
#define _WDTCON_WDTPS4_POSN                                 0x5
#define _WDTCON_WDTPS4_POSITION                             0x5
#define _WDTCON_WDTPS4_SIZE                                 0x1
#define _WDTCON_WDTPS4_LENGTH                               0x1
#define _WDTCON_WDTPS4_MASK                                 0x20
#define _WDTCON_WDTPS_POSN                                  0x1
#define _WDTCON_WDTPS_POSITION                              0x1
#define _WDTCON_WDTPS_SIZE                                  0x5
#define _WDTCON_WDTPS_LENGTH                                0x5
#define _WDTCON_WDTPS_MASK                                  0x3E

// Register: OSCTUNE
unsigned char           OSCTUNE             ; //SWAP 0x098;
#ifndef _LIB_BUILD
asm("OSCTUNE equ 098h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TUN0                   :1;
        unsigned TUN1                   :1;
        unsigned TUN2                   :1;
        unsigned TUN3                   :1;
        unsigned TUN4                   :1;
        unsigned TUN5                   :1;
    };
    struct {
        unsigned TUN                    :6;
    };
} OSCTUNEbits_t;
OSCTUNEbits_t OSCTUNEbits ; //SWAP 0x098;
// bitfield macros
#define _OSCTUNE_TUN0_POSN                                  0x0
#define _OSCTUNE_TUN0_POSITION                              0x0
#define _OSCTUNE_TUN0_SIZE                                  0x1
#define _OSCTUNE_TUN0_LENGTH                                0x1
#define _OSCTUNE_TUN0_MASK                                  0x1
#define _OSCTUNE_TUN1_POSN                                  0x1
#define _OSCTUNE_TUN1_POSITION                              0x1
#define _OSCTUNE_TUN1_SIZE                                  0x1
#define _OSCTUNE_TUN1_LENGTH                                0x1
#define _OSCTUNE_TUN1_MASK                                  0x2
#define _OSCTUNE_TUN2_POSN                                  0x2
#define _OSCTUNE_TUN2_POSITION                              0x2
#define _OSCTUNE_TUN2_SIZE                                  0x1
#define _OSCTUNE_TUN2_LENGTH                                0x1
#define _OSCTUNE_TUN2_MASK                                  0x4
#define _OSCTUNE_TUN3_POSN                                  0x3
#define _OSCTUNE_TUN3_POSITION                              0x3
#define _OSCTUNE_TUN3_SIZE                                  0x1
#define _OSCTUNE_TUN3_LENGTH                                0x1
#define _OSCTUNE_TUN3_MASK                                  0x8
#define _OSCTUNE_TUN4_POSN                                  0x4
#define _OSCTUNE_TUN4_POSITION                              0x4
#define _OSCTUNE_TUN4_SIZE                                  0x1
#define _OSCTUNE_TUN4_LENGTH                                0x1
#define _OSCTUNE_TUN4_MASK                                  0x10
#define _OSCTUNE_TUN5_POSN                                  0x5
#define _OSCTUNE_TUN5_POSITION                              0x5
#define _OSCTUNE_TUN5_SIZE                                  0x1
#define _OSCTUNE_TUN5_LENGTH                                0x1
#define _OSCTUNE_TUN5_MASK                                  0x20
#define _OSCTUNE_TUN_POSN                                   0x0
#define _OSCTUNE_TUN_POSITION                               0x0
#define _OSCTUNE_TUN_SIZE                                   0x6
#define _OSCTUNE_TUN_LENGTH                                 0x6
#define _OSCTUNE_TUN_MASK                                   0x3F

// Register: OSCCON
unsigned char           OSCCON              ; //SWAP 0x099;
#ifndef _LIB_BUILD
asm("OSCCON equ 099h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SCS0                   :1;
        unsigned SCS1                   :1;
        unsigned                        :1;
        unsigned IRCF0                  :1;
        unsigned IRCF1                  :1;
        unsigned IRCF2                  :1;
        unsigned IRCF3                  :1;
        unsigned SPLLEN                 :1;
    };
    struct {
        unsigned SCS                    :2;
        unsigned                        :1;
        unsigned IRCF                   :4;
    };
} OSCCONbits_t;
OSCCONbits_t OSCCONbits ; //SWAP 0x099;
// bitfield macros
#define _OSCCON_SCS0_POSN                                   0x0
#define _OSCCON_SCS0_POSITION                               0x0
#define _OSCCON_SCS0_SIZE                                   0x1
#define _OSCCON_SCS0_LENGTH                                 0x1
#define _OSCCON_SCS0_MASK                                   0x1
#define _OSCCON_SCS1_POSN                                   0x1
#define _OSCCON_SCS1_POSITION                               0x1
#define _OSCCON_SCS1_SIZE                                   0x1
#define _OSCCON_SCS1_LENGTH                                 0x1
#define _OSCCON_SCS1_MASK                                   0x2
#define _OSCCON_IRCF0_POSN                                  0x3
#define _OSCCON_IRCF0_POSITION                              0x3
#define _OSCCON_IRCF0_SIZE                                  0x1
#define _OSCCON_IRCF0_LENGTH                                0x1
#define _OSCCON_IRCF0_MASK                                  0x8
#define _OSCCON_IRCF1_POSN                                  0x4
#define _OSCCON_IRCF1_POSITION                              0x4
#define _OSCCON_IRCF1_SIZE                                  0x1
#define _OSCCON_IRCF1_LENGTH                                0x1
#define _OSCCON_IRCF1_MASK                                  0x10
#define _OSCCON_IRCF2_POSN                                  0x5
#define _OSCCON_IRCF2_POSITION                              0x5
#define _OSCCON_IRCF2_SIZE                                  0x1
#define _OSCCON_IRCF2_LENGTH                                0x1
#define _OSCCON_IRCF2_MASK                                  0x20
#define _OSCCON_IRCF3_POSN                                  0x6
#define _OSCCON_IRCF3_POSITION                              0x6
#define _OSCCON_IRCF3_SIZE                                  0x1
#define _OSCCON_IRCF3_LENGTH                                0x1
#define _OSCCON_IRCF3_MASK                                  0x40
#define _OSCCON_SPLLEN_POSN                                 0x7
#define _OSCCON_SPLLEN_POSITION                             0x7
#define _OSCCON_SPLLEN_SIZE                                 0x1
#define _OSCCON_SPLLEN_LENGTH                               0x1
#define _OSCCON_SPLLEN_MASK                                 0x80
#define _OSCCON_SCS_POSN                                    0x0
#define _OSCCON_SCS_POSITION                                0x0
#define _OSCCON_SCS_SIZE                                    0x2
#define _OSCCON_SCS_LENGTH                                  0x2
#define _OSCCON_SCS_MASK                                    0x3
#define _OSCCON_IRCF_POSN                                   0x3
#define _OSCCON_IRCF_POSITION                               0x3
#define _OSCCON_IRCF_SIZE                                   0x4
#define _OSCCON_IRCF_LENGTH                                 0x4
#define _OSCCON_IRCF_MASK                                   0x78

// Register: OSCSTAT
unsigned char           OSCSTAT             ; //SWAP 0x09A;
#ifndef _LIB_BUILD
asm("OSCSTAT equ 09Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned HFIOFS                 :1;
        unsigned LFIOFR                 :1;
        unsigned MFIOFR                 :1;
        unsigned HFIOFL                 :1;
        unsigned HFIOFR                 :1;
        unsigned OSTS                   :1;
        unsigned PLLR                   :1;
        unsigned T1OSCR                 :1;
    };
} OSCSTATbits_t;
OSCSTATbits_t OSCSTATbits ; //SWAP 0x09A;
// bitfield macros
#define _OSCSTAT_HFIOFS_POSN                                0x0
#define _OSCSTAT_HFIOFS_POSITION                            0x0
#define _OSCSTAT_HFIOFS_SIZE                                0x1
#define _OSCSTAT_HFIOFS_LENGTH                              0x1
#define _OSCSTAT_HFIOFS_MASK                                0x1
#define _OSCSTAT_LFIOFR_POSN                                0x1
#define _OSCSTAT_LFIOFR_POSITION                            0x1
#define _OSCSTAT_LFIOFR_SIZE                                0x1
#define _OSCSTAT_LFIOFR_LENGTH                              0x1
#define _OSCSTAT_LFIOFR_MASK                                0x2
#define _OSCSTAT_MFIOFR_POSN                                0x2
#define _OSCSTAT_MFIOFR_POSITION                            0x2
#define _OSCSTAT_MFIOFR_SIZE                                0x1
#define _OSCSTAT_MFIOFR_LENGTH                              0x1
#define _OSCSTAT_MFIOFR_MASK                                0x4
#define _OSCSTAT_HFIOFL_POSN                                0x3
#define _OSCSTAT_HFIOFL_POSITION                            0x3
#define _OSCSTAT_HFIOFL_SIZE                                0x1
#define _OSCSTAT_HFIOFL_LENGTH                              0x1
#define _OSCSTAT_HFIOFL_MASK                                0x8
#define _OSCSTAT_HFIOFR_POSN                                0x4
#define _OSCSTAT_HFIOFR_POSITION                            0x4
#define _OSCSTAT_HFIOFR_SIZE                                0x1
#define _OSCSTAT_HFIOFR_LENGTH                              0x1
#define _OSCSTAT_HFIOFR_MASK                                0x10
#define _OSCSTAT_OSTS_POSN                                  0x5
#define _OSCSTAT_OSTS_POSITION                              0x5
#define _OSCSTAT_OSTS_SIZE                                  0x1
#define _OSCSTAT_OSTS_LENGTH                                0x1
#define _OSCSTAT_OSTS_MASK                                  0x20
#define _OSCSTAT_PLLR_POSN                                  0x6
#define _OSCSTAT_PLLR_POSITION                              0x6
#define _OSCSTAT_PLLR_SIZE                                  0x1
#define _OSCSTAT_PLLR_LENGTH                                0x1
#define _OSCSTAT_PLLR_MASK                                  0x40
#define _OSCSTAT_T1OSCR_POSN                                0x7
#define _OSCSTAT_T1OSCR_POSITION                            0x7
#define _OSCSTAT_T1OSCR_SIZE                                0x1
#define _OSCSTAT_T1OSCR_LENGTH                              0x1
#define _OSCSTAT_T1OSCR_MASK                                0x80

// Register: ADRES
unsigned short          ADRES               ; //SWAP 0x09B;
#ifndef _LIB_BUILD
asm("ADRES equ 09Bh");
#endif

// Register: ADRESL
unsigned char           ADRESL              ; //SWAP 0x09B;
#ifndef _LIB_BUILD
asm("ADRESL equ 09Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESL                 :8;
    };
} ADRESLbits_t;
ADRESLbits_t ADRESLbits ; //SWAP 0x09B;
// bitfield macros
#define _ADRESL_ADRESL_POSN                                 0x0
#define _ADRESL_ADRESL_POSITION                             0x0
#define _ADRESL_ADRESL_SIZE                                 0x8
#define _ADRESL_ADRESL_LENGTH                               0x8
#define _ADRESL_ADRESL_MASK                                 0xFF

// Register: ADRESH
unsigned char           ADRESH              ; //SWAP 0x09C;
#ifndef _LIB_BUILD
asm("ADRESH equ 09Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADRESH                 :8;
    };
} ADRESHbits_t;
ADRESHbits_t ADRESHbits ; //SWAP 0x09C;
// bitfield macros
#define _ADRESH_ADRESH_POSN                                 0x0
#define _ADRESH_ADRESH_POSITION                             0x0
#define _ADRESH_ADRESH_SIZE                                 0x8
#define _ADRESH_ADRESH_LENGTH                               0x8
#define _ADRESH_ADRESH_MASK                                 0xFF

// Register: ADCON0
unsigned char           ADCON0              ; //SWAP 0x09D;
#ifndef _LIB_BUILD
asm("ADCON0 equ 09Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADON                   :1;
        unsigned GO_nDONE               :1;
        unsigned CHS0                   :1;
        unsigned CHS1                   :1;
        unsigned CHS2                   :1;
        unsigned CHS3                   :1;
        unsigned CHS4                   :1;
        unsigned ADRMD                  :1;
    };
    struct {
        unsigned                        :1;
        unsigned ADGO                   :1;
        unsigned CHS                    :5;
    };
    struct {
        unsigned                        :1;
        unsigned GO                     :1;
    };
    struct {
        unsigned                        :1;
        unsigned DONE                   :1;
    };
} ADCON0bits_t;
ADCON0bits_t ADCON0bits ; //SWAP 0x09D;
// bitfield macros
#define _ADCON0_ADON_POSN                                   0x0
#define _ADCON0_ADON_POSITION                               0x0
#define _ADCON0_ADON_SIZE                                   0x1
#define _ADCON0_ADON_LENGTH                                 0x1
#define _ADCON0_ADON_MASK                                   0x1
#define _ADCON0_GO_nDONE_POSN                               0x1
#define _ADCON0_GO_nDONE_POSITION                           0x1
#define _ADCON0_GO_nDONE_SIZE                               0x1
#define _ADCON0_GO_nDONE_LENGTH                             0x1
#define _ADCON0_GO_nDONE_MASK                               0x2
#define _ADCON0_CHS0_POSN                                   0x2
#define _ADCON0_CHS0_POSITION                               0x2
#define _ADCON0_CHS0_SIZE                                   0x1
#define _ADCON0_CHS0_LENGTH                                 0x1
#define _ADCON0_CHS0_MASK                                   0x4
#define _ADCON0_CHS1_POSN                                   0x3
#define _ADCON0_CHS1_POSITION                               0x3
#define _ADCON0_CHS1_SIZE                                   0x1
#define _ADCON0_CHS1_LENGTH                                 0x1
#define _ADCON0_CHS1_MASK                                   0x8
#define _ADCON0_CHS2_POSN                                   0x4
#define _ADCON0_CHS2_POSITION                               0x4
#define _ADCON0_CHS2_SIZE                                   0x1
#define _ADCON0_CHS2_LENGTH                                 0x1
#define _ADCON0_CHS2_MASK                                   0x10
#define _ADCON0_CHS3_POSN                                   0x5
#define _ADCON0_CHS3_POSITION                               0x5
#define _ADCON0_CHS3_SIZE                                   0x1
#define _ADCON0_CHS3_LENGTH                                 0x1
#define _ADCON0_CHS3_MASK                                   0x20
#define _ADCON0_CHS4_POSN                                   0x6
#define _ADCON0_CHS4_POSITION                               0x6
#define _ADCON0_CHS4_SIZE                                   0x1
#define _ADCON0_CHS4_LENGTH                                 0x1
#define _ADCON0_CHS4_MASK                                   0x40
#define _ADCON0_ADRMD_POSN                                  0x7
#define _ADCON0_ADRMD_POSITION                              0x7
#define _ADCON0_ADRMD_SIZE                                  0x1
#define _ADCON0_ADRMD_LENGTH                                0x1
#define _ADCON0_ADRMD_MASK                                  0x80
#define _ADCON0_ADGO_POSN                                   0x1
#define _ADCON0_ADGO_POSITION                               0x1
#define _ADCON0_ADGO_SIZE                                   0x1
#define _ADCON0_ADGO_LENGTH                                 0x1
#define _ADCON0_ADGO_MASK                                   0x2
#define _ADCON0_CHS_POSN                                    0x2
#define _ADCON0_CHS_POSITION                                0x2
#define _ADCON0_CHS_SIZE                                    0x5
#define _ADCON0_CHS_LENGTH                                  0x5
#define _ADCON0_CHS_MASK                                    0x7C
#define _ADCON0_GO_POSN                                     0x1
#define _ADCON0_GO_POSITION                                 0x1
#define _ADCON0_GO_SIZE                                     0x1
#define _ADCON0_GO_LENGTH                                   0x1
#define _ADCON0_GO_MASK                                     0x2
#define _ADCON0_DONE_POSN                                   0x1
#define _ADCON0_DONE_POSITION                               0x1
#define _ADCON0_DONE_SIZE                                   0x1
#define _ADCON0_DONE_LENGTH                                 0x1
#define _ADCON0_DONE_MASK                                   0x2

// Register: ADCON1
unsigned char           ADCON1              ; //SWAP 0x09E;
#ifndef _LIB_BUILD
asm("ADCON1 equ 09Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADPREF0                :1;
        unsigned ADPREF1                :1;
        unsigned ADNREF                 :1;
        unsigned                        :1;
        unsigned ADCS0                  :1;
        unsigned ADCS1                  :1;
        unsigned ADCS2                  :1;
        unsigned ADFM                   :1;
    };
    struct {
        unsigned ADPREF                 :2;
        unsigned                        :2;
        unsigned ADCS                   :3;
    };
} ADCON1bits_t;
ADCON1bits_t ADCON1bits ; //SWAP 0x09E;
// bitfield macros
#define _ADCON1_ADPREF0_POSN                                0x0
#define _ADCON1_ADPREF0_POSITION                            0x0
#define _ADCON1_ADPREF0_SIZE                                0x1
#define _ADCON1_ADPREF0_LENGTH                              0x1
#define _ADCON1_ADPREF0_MASK                                0x1
#define _ADCON1_ADPREF1_POSN                                0x1
#define _ADCON1_ADPREF1_POSITION                            0x1
#define _ADCON1_ADPREF1_SIZE                                0x1
#define _ADCON1_ADPREF1_LENGTH                              0x1
#define _ADCON1_ADPREF1_MASK                                0x2
#define _ADCON1_ADNREF_POSN                                 0x2
#define _ADCON1_ADNREF_POSITION                             0x2
#define _ADCON1_ADNREF_SIZE                                 0x1
#define _ADCON1_ADNREF_LENGTH                               0x1
#define _ADCON1_ADNREF_MASK                                 0x4
#define _ADCON1_ADCS0_POSN                                  0x4
#define _ADCON1_ADCS0_POSITION                              0x4
#define _ADCON1_ADCS0_SIZE                                  0x1
#define _ADCON1_ADCS0_LENGTH                                0x1
#define _ADCON1_ADCS0_MASK                                  0x10
#define _ADCON1_ADCS1_POSN                                  0x5
#define _ADCON1_ADCS1_POSITION                              0x5
#define _ADCON1_ADCS1_SIZE                                  0x1
#define _ADCON1_ADCS1_LENGTH                                0x1
#define _ADCON1_ADCS1_MASK                                  0x20
#define _ADCON1_ADCS2_POSN                                  0x6
#define _ADCON1_ADCS2_POSITION                              0x6
#define _ADCON1_ADCS2_SIZE                                  0x1
#define _ADCON1_ADCS2_LENGTH                                0x1
#define _ADCON1_ADCS2_MASK                                  0x40
#define _ADCON1_ADFM_POSN                                   0x7
#define _ADCON1_ADFM_POSITION                               0x7
#define _ADCON1_ADFM_SIZE                                   0x1
#define _ADCON1_ADFM_LENGTH                                 0x1
#define _ADCON1_ADFM_MASK                                   0x80
#define _ADCON1_ADPREF_POSN                                 0x0
#define _ADCON1_ADPREF_POSITION                             0x0
#define _ADCON1_ADPREF_SIZE                                 0x2
#define _ADCON1_ADPREF_LENGTH                               0x2
#define _ADCON1_ADPREF_MASK                                 0x3
#define _ADCON1_ADCS_POSN                                   0x4
#define _ADCON1_ADCS_POSITION                               0x4
#define _ADCON1_ADCS_SIZE                                   0x3
#define _ADCON1_ADCS_LENGTH                                 0x3
#define _ADCON1_ADCS_MASK                                   0x70

// Register: ADCON2
unsigned char           ADCON2              ; //SWAP 0x09F;
#ifndef _LIB_BUILD
asm("ADCON2 equ 09Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CHSN0                  :1;
        unsigned CHSN1                  :1;
        unsigned CHSN2                  :1;
        unsigned CHSN3                  :1;
        unsigned TRIGSEL0               :1;
        unsigned TRIGSEL1               :1;
        unsigned TRIGSEL2               :1;
        unsigned TRIGSEL3               :1;
    };
    struct {
        unsigned CHSN                   :4;
        unsigned TRIGSEL                :4;
    };
} ADCON2bits_t;
ADCON2bits_t ADCON2bits ; //SWAP 0x09F;
// bitfield macros
#define _ADCON2_CHSN0_POSN                                  0x0
#define _ADCON2_CHSN0_POSITION                              0x0
#define _ADCON2_CHSN0_SIZE                                  0x1
#define _ADCON2_CHSN0_LENGTH                                0x1
#define _ADCON2_CHSN0_MASK                                  0x1
#define _ADCON2_CHSN1_POSN                                  0x1
#define _ADCON2_CHSN1_POSITION                              0x1
#define _ADCON2_CHSN1_SIZE                                  0x1
#define _ADCON2_CHSN1_LENGTH                                0x1
#define _ADCON2_CHSN1_MASK                                  0x2
#define _ADCON2_CHSN2_POSN                                  0x2
#define _ADCON2_CHSN2_POSITION                              0x2
#define _ADCON2_CHSN2_SIZE                                  0x1
#define _ADCON2_CHSN2_LENGTH                                0x1
#define _ADCON2_CHSN2_MASK                                  0x4
#define _ADCON2_CHSN3_POSN                                  0x3
#define _ADCON2_CHSN3_POSITION                              0x3
#define _ADCON2_CHSN3_SIZE                                  0x1
#define _ADCON2_CHSN3_LENGTH                                0x1
#define _ADCON2_CHSN3_MASK                                  0x8
#define _ADCON2_TRIGSEL0_POSN                               0x4
#define _ADCON2_TRIGSEL0_POSITION                           0x4
#define _ADCON2_TRIGSEL0_SIZE                               0x1
#define _ADCON2_TRIGSEL0_LENGTH                             0x1
#define _ADCON2_TRIGSEL0_MASK                               0x10
#define _ADCON2_TRIGSEL1_POSN                               0x5
#define _ADCON2_TRIGSEL1_POSITION                           0x5
#define _ADCON2_TRIGSEL1_SIZE                               0x1
#define _ADCON2_TRIGSEL1_LENGTH                             0x1
#define _ADCON2_TRIGSEL1_MASK                               0x20
#define _ADCON2_TRIGSEL2_POSN                               0x6
#define _ADCON2_TRIGSEL2_POSITION                           0x6
#define _ADCON2_TRIGSEL2_SIZE                               0x1
#define _ADCON2_TRIGSEL2_LENGTH                             0x1
#define _ADCON2_TRIGSEL2_MASK                               0x40
#define _ADCON2_TRIGSEL3_POSN                               0x7
#define _ADCON2_TRIGSEL3_POSITION                           0x7
#define _ADCON2_TRIGSEL3_SIZE                               0x1
#define _ADCON2_TRIGSEL3_LENGTH                             0x1
#define _ADCON2_TRIGSEL3_MASK                               0x80
#define _ADCON2_CHSN_POSN                                   0x0
#define _ADCON2_CHSN_POSITION                               0x0
#define _ADCON2_CHSN_SIZE                                   0x4
#define _ADCON2_CHSN_LENGTH                                 0x4
#define _ADCON2_CHSN_MASK                                   0xF
#define _ADCON2_TRIGSEL_POSN                                0x4
#define _ADCON2_TRIGSEL_POSITION                            0x4
#define _ADCON2_TRIGSEL_SIZE                                0x4
#define _ADCON2_TRIGSEL_LENGTH                              0x4
#define _ADCON2_TRIGSEL_MASK                                0xF0

// Register: LATA
unsigned char           LATA                ; //SWAP 0x10C;
#ifndef _LIB_BUILD
asm("LATA equ 010Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATA0                  :1;
        unsigned LATA1                  :1;
        unsigned LATA2                  :1;
        unsigned LATA3                  :1;
        unsigned LATA4                  :1;
        unsigned LATA5                  :1;
        unsigned LATA6                  :1;
        unsigned LATA7                  :1;
    };
    struct {
        unsigned LATA                   :8;
    };
} LATAbits_t;
LATAbits_t LATAbits ; //SWAP 0x10C;
// bitfield macros
#define _LATA_LATA0_POSN                                    0x0
#define _LATA_LATA0_POSITION                                0x0
#define _LATA_LATA0_SIZE                                    0x1
#define _LATA_LATA0_LENGTH                                  0x1
#define _LATA_LATA0_MASK                                    0x1
#define _LATA_LATA1_POSN                                    0x1
#define _LATA_LATA1_POSITION                                0x1
#define _LATA_LATA1_SIZE                                    0x1
#define _LATA_LATA1_LENGTH                                  0x1
#define _LATA_LATA1_MASK                                    0x2
#define _LATA_LATA2_POSN                                    0x2
#define _LATA_LATA2_POSITION                                0x2
#define _LATA_LATA2_SIZE                                    0x1
#define _LATA_LATA2_LENGTH                                  0x1
#define _LATA_LATA2_MASK                                    0x4
#define _LATA_LATA3_POSN                                    0x3
#define _LATA_LATA3_POSITION                                0x3
#define _LATA_LATA3_SIZE                                    0x1
#define _LATA_LATA3_LENGTH                                  0x1
#define _LATA_LATA3_MASK                                    0x8
#define _LATA_LATA4_POSN                                    0x4
#define _LATA_LATA4_POSITION                                0x4
#define _LATA_LATA4_SIZE                                    0x1
#define _LATA_LATA4_LENGTH                                  0x1
#define _LATA_LATA4_MASK                                    0x10
#define _LATA_LATA5_POSN                                    0x5
#define _LATA_LATA5_POSITION                                0x5
#define _LATA_LATA5_SIZE                                    0x1
#define _LATA_LATA5_LENGTH                                  0x1
#define _LATA_LATA5_MASK                                    0x20
#define _LATA_LATA6_POSN                                    0x6
#define _LATA_LATA6_POSITION                                0x6
#define _LATA_LATA6_SIZE                                    0x1
#define _LATA_LATA6_LENGTH                                  0x1
#define _LATA_LATA6_MASK                                    0x40
#define _LATA_LATA7_POSN                                    0x7
#define _LATA_LATA7_POSITION                                0x7
#define _LATA_LATA7_SIZE                                    0x1
#define _LATA_LATA7_LENGTH                                  0x1
#define _LATA_LATA7_MASK                                    0x80
#define _LATA_LATA_POSN                                     0x0
#define _LATA_LATA_POSITION                                 0x0
#define _LATA_LATA_SIZE                                     0x8
#define _LATA_LATA_LENGTH                                   0x8
#define _LATA_LATA_MASK                                     0xFF

// Register: LATB
unsigned char           LATB                ; //SWAP 0x10D;
#ifndef _LIB_BUILD
asm("LATB equ 010Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATB0                  :1;
        unsigned LATB1                  :1;
        unsigned LATB2                  :1;
        unsigned LATB3                  :1;
        unsigned LATB4                  :1;
        unsigned LATB5                  :1;
        unsigned LATB6                  :1;
        unsigned LATB7                  :1;
    };
    struct {
        unsigned LATB                   :8;
    };
} LATBbits_t;
LATBbits_t LATBbits ; //SWAP 0x10D;
// bitfield macros
#define _LATB_LATB0_POSN                                    0x0
#define _LATB_LATB0_POSITION                                0x0
#define _LATB_LATB0_SIZE                                    0x1
#define _LATB_LATB0_LENGTH                                  0x1
#define _LATB_LATB0_MASK                                    0x1
#define _LATB_LATB1_POSN                                    0x1
#define _LATB_LATB1_POSITION                                0x1
#define _LATB_LATB1_SIZE                                    0x1
#define _LATB_LATB1_LENGTH                                  0x1
#define _LATB_LATB1_MASK                                    0x2
#define _LATB_LATB2_POSN                                    0x2
#define _LATB_LATB2_POSITION                                0x2
#define _LATB_LATB2_SIZE                                    0x1
#define _LATB_LATB2_LENGTH                                  0x1
#define _LATB_LATB2_MASK                                    0x4
#define _LATB_LATB3_POSN                                    0x3
#define _LATB_LATB3_POSITION                                0x3
#define _LATB_LATB3_SIZE                                    0x1
#define _LATB_LATB3_LENGTH                                  0x1
#define _LATB_LATB3_MASK                                    0x8
#define _LATB_LATB4_POSN                                    0x4
#define _LATB_LATB4_POSITION                                0x4
#define _LATB_LATB4_SIZE                                    0x1
#define _LATB_LATB4_LENGTH                                  0x1
#define _LATB_LATB4_MASK                                    0x10
#define _LATB_LATB5_POSN                                    0x5
#define _LATB_LATB5_POSITION                                0x5
#define _LATB_LATB5_SIZE                                    0x1
#define _LATB_LATB5_LENGTH                                  0x1
#define _LATB_LATB5_MASK                                    0x20
#define _LATB_LATB6_POSN                                    0x6
#define _LATB_LATB6_POSITION                                0x6
#define _LATB_LATB6_SIZE                                    0x1
#define _LATB_LATB6_LENGTH                                  0x1
#define _LATB_LATB6_MASK                                    0x40
#define _LATB_LATB7_POSN                                    0x7
#define _LATB_LATB7_POSITION                                0x7
#define _LATB_LATB7_SIZE                                    0x1
#define _LATB_LATB7_LENGTH                                  0x1
#define _LATB_LATB7_MASK                                    0x80
#define _LATB_LATB_POSN                                     0x0
#define _LATB_LATB_POSITION                                 0x0
#define _LATB_LATB_SIZE                                     0x8
#define _LATB_LATB_LENGTH                                   0x8
#define _LATB_LATB_MASK                                     0xFF

// Register: LATC
unsigned char           LATC                ; //SWAP 0x10E;
#ifndef _LIB_BUILD
asm("LATC equ 010Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned LATC0                  :1;
        unsigned LATC1                  :1;
        unsigned LATC2                  :1;
        unsigned LATC3                  :1;
        unsigned LATC4                  :1;
        unsigned LATC5                  :1;
        unsigned LATC6                  :1;
        unsigned LATC7                  :1;
    };
    struct {
        unsigned LATC                   :8;
    };
} LATCbits_t;
LATCbits_t LATCbits ; //SWAP 0x10E;
// bitfield macros
#define _LATC_LATC0_POSN                                    0x0
#define _LATC_LATC0_POSITION                                0x0
#define _LATC_LATC0_SIZE                                    0x1
#define _LATC_LATC0_LENGTH                                  0x1
#define _LATC_LATC0_MASK                                    0x1
#define _LATC_LATC1_POSN                                    0x1
#define _LATC_LATC1_POSITION                                0x1
#define _LATC_LATC1_SIZE                                    0x1
#define _LATC_LATC1_LENGTH                                  0x1
#define _LATC_LATC1_MASK                                    0x2
#define _LATC_LATC2_POSN                                    0x2
#define _LATC_LATC2_POSITION                                0x2
#define _LATC_LATC2_SIZE                                    0x1
#define _LATC_LATC2_LENGTH                                  0x1
#define _LATC_LATC2_MASK                                    0x4
#define _LATC_LATC3_POSN                                    0x3
#define _LATC_LATC3_POSITION                                0x3
#define _LATC_LATC3_SIZE                                    0x1
#define _LATC_LATC3_LENGTH                                  0x1
#define _LATC_LATC3_MASK                                    0x8
#define _LATC_LATC4_POSN                                    0x4
#define _LATC_LATC4_POSITION                                0x4
#define _LATC_LATC4_SIZE                                    0x1
#define _LATC_LATC4_LENGTH                                  0x1
#define _LATC_LATC4_MASK                                    0x10
#define _LATC_LATC5_POSN                                    0x5
#define _LATC_LATC5_POSITION                                0x5
#define _LATC_LATC5_SIZE                                    0x1
#define _LATC_LATC5_LENGTH                                  0x1
#define _LATC_LATC5_MASK                                    0x20
#define _LATC_LATC6_POSN                                    0x6
#define _LATC_LATC6_POSITION                                0x6
#define _LATC_LATC6_SIZE                                    0x1
#define _LATC_LATC6_LENGTH                                  0x1
#define _LATC_LATC6_MASK                                    0x40
#define _LATC_LATC7_POSN                                    0x7
#define _LATC_LATC7_POSITION                                0x7
#define _LATC_LATC7_SIZE                                    0x1
#define _LATC_LATC7_LENGTH                                  0x1
#define _LATC_LATC7_MASK                                    0x80
#define _LATC_LATC_POSN                                     0x0
#define _LATC_LATC_POSITION                                 0x0
#define _LATC_LATC_SIZE                                     0x8
#define _LATC_LATC_LENGTH                                   0x8
#define _LATC_LATC_MASK                                     0xFF

// Register: CM1CON0
unsigned char           CM1CON0             ; //SWAP 0x111;
#ifndef _LIB_BUILD
asm("CM1CON0 equ 0111h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1SYNC                 :1;
        unsigned C1HYS                  :1;
        unsigned C1SP                   :1;
        unsigned C1ZLF                  :1;
        unsigned C1POL                  :1;
        unsigned C1OE                   :1;
        unsigned C1OUT                  :1;
        unsigned C1ON                   :1;
    };
} CM1CON0bits_t;
CM1CON0bits_t CM1CON0bits ; //SWAP 0x111;
// bitfield macros
#define _CM1CON0_C1SYNC_POSN                                0x0
#define _CM1CON0_C1SYNC_POSITION                            0x0
#define _CM1CON0_C1SYNC_SIZE                                0x1
#define _CM1CON0_C1SYNC_LENGTH                              0x1
#define _CM1CON0_C1SYNC_MASK                                0x1
#define _CM1CON0_C1HYS_POSN                                 0x1
#define _CM1CON0_C1HYS_POSITION                             0x1
#define _CM1CON0_C1HYS_SIZE                                 0x1
#define _CM1CON0_C1HYS_LENGTH                               0x1
#define _CM1CON0_C1HYS_MASK                                 0x2
#define _CM1CON0_C1SP_POSN                                  0x2
#define _CM1CON0_C1SP_POSITION                              0x2
#define _CM1CON0_C1SP_SIZE                                  0x1
#define _CM1CON0_C1SP_LENGTH                                0x1
#define _CM1CON0_C1SP_MASK                                  0x4
#define _CM1CON0_C1ZLF_POSN                                 0x3
#define _CM1CON0_C1ZLF_POSITION                             0x3
#define _CM1CON0_C1ZLF_SIZE                                 0x1
#define _CM1CON0_C1ZLF_LENGTH                               0x1
#define _CM1CON0_C1ZLF_MASK                                 0x8
#define _CM1CON0_C1POL_POSN                                 0x4
#define _CM1CON0_C1POL_POSITION                             0x4
#define _CM1CON0_C1POL_SIZE                                 0x1
#define _CM1CON0_C1POL_LENGTH                               0x1
#define _CM1CON0_C1POL_MASK                                 0x10
#define _CM1CON0_C1OE_POSN                                  0x5
#define _CM1CON0_C1OE_POSITION                              0x5
#define _CM1CON0_C1OE_SIZE                                  0x1
#define _CM1CON0_C1OE_LENGTH                                0x1
#define _CM1CON0_C1OE_MASK                                  0x20
#define _CM1CON0_C1OUT_POSN                                 0x6
#define _CM1CON0_C1OUT_POSITION                             0x6
#define _CM1CON0_C1OUT_SIZE                                 0x1
#define _CM1CON0_C1OUT_LENGTH                               0x1
#define _CM1CON0_C1OUT_MASK                                 0x40
#define _CM1CON0_C1ON_POSN                                  0x7
#define _CM1CON0_C1ON_POSITION                              0x7
#define _CM1CON0_C1ON_SIZE                                  0x1
#define _CM1CON0_C1ON_LENGTH                                0x1
#define _CM1CON0_C1ON_MASK                                  0x80

// Register: CM1CON1
unsigned char           CM1CON1             ; //SWAP 0x112;
#ifndef _LIB_BUILD
asm("CM1CON1 equ 0112h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C1NCH0                 :1;
        unsigned C1NCH1                 :1;
        unsigned C1NCH2                 :1;
        unsigned C1PCH0                 :1;
        unsigned C1PCH1                 :1;
        unsigned C1PCH2                 :1;
        unsigned C1INTN                 :1;
        unsigned C1INTP                 :1;
    };
    struct {
        unsigned C1NCH                  :3;
        unsigned C1PCH                  :3;
    };
} CM1CON1bits_t;
CM1CON1bits_t CM1CON1bits ; //SWAP 0x112;
// bitfield macros
#define _CM1CON1_C1NCH0_POSN                                0x0
#define _CM1CON1_C1NCH0_POSITION                            0x0
#define _CM1CON1_C1NCH0_SIZE                                0x1
#define _CM1CON1_C1NCH0_LENGTH                              0x1
#define _CM1CON1_C1NCH0_MASK                                0x1
#define _CM1CON1_C1NCH1_POSN                                0x1
#define _CM1CON1_C1NCH1_POSITION                            0x1
#define _CM1CON1_C1NCH1_SIZE                                0x1
#define _CM1CON1_C1NCH1_LENGTH                              0x1
#define _CM1CON1_C1NCH1_MASK                                0x2
#define _CM1CON1_C1NCH2_POSN                                0x2
#define _CM1CON1_C1NCH2_POSITION                            0x2
#define _CM1CON1_C1NCH2_SIZE                                0x1
#define _CM1CON1_C1NCH2_LENGTH                              0x1
#define _CM1CON1_C1NCH2_MASK                                0x4
#define _CM1CON1_C1PCH0_POSN                                0x3
#define _CM1CON1_C1PCH0_POSITION                            0x3
#define _CM1CON1_C1PCH0_SIZE                                0x1
#define _CM1CON1_C1PCH0_LENGTH                              0x1
#define _CM1CON1_C1PCH0_MASK                                0x8
#define _CM1CON1_C1PCH1_POSN                                0x4
#define _CM1CON1_C1PCH1_POSITION                            0x4
#define _CM1CON1_C1PCH1_SIZE                                0x1
#define _CM1CON1_C1PCH1_LENGTH                              0x1
#define _CM1CON1_C1PCH1_MASK                                0x10
#define _CM1CON1_C1PCH2_POSN                                0x5
#define _CM1CON1_C1PCH2_POSITION                            0x5
#define _CM1CON1_C1PCH2_SIZE                                0x1
#define _CM1CON1_C1PCH2_LENGTH                              0x1
#define _CM1CON1_C1PCH2_MASK                                0x20
#define _CM1CON1_C1INTN_POSN                                0x6
#define _CM1CON1_C1INTN_POSITION                            0x6
#define _CM1CON1_C1INTN_SIZE                                0x1
#define _CM1CON1_C1INTN_LENGTH                              0x1
#define _CM1CON1_C1INTN_MASK                                0x40
#define _CM1CON1_C1INTP_POSN                                0x7
#define _CM1CON1_C1INTP_POSITION                            0x7
#define _CM1CON1_C1INTP_SIZE                                0x1
#define _CM1CON1_C1INTP_LENGTH                              0x1
#define _CM1CON1_C1INTP_MASK                                0x80
#define _CM1CON1_C1NCH_POSN                                 0x0
#define _CM1CON1_C1NCH_POSITION                             0x0
#define _CM1CON1_C1NCH_SIZE                                 0x3
#define _CM1CON1_C1NCH_LENGTH                               0x3
#define _CM1CON1_C1NCH_MASK                                 0x7
#define _CM1CON1_C1PCH_POSN                                 0x3
#define _CM1CON1_C1PCH_POSITION                             0x3
#define _CM1CON1_C1PCH_SIZE                                 0x3
#define _CM1CON1_C1PCH_LENGTH                               0x3
#define _CM1CON1_C1PCH_MASK                                 0x38

// Register: CM2CON0
unsigned char           CM2CON0             ; //SWAP 0x113;
#ifndef _LIB_BUILD
asm("CM2CON0 equ 0113h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2SYNC                 :1;
        unsigned C2HYS                  :1;
        unsigned C2SP                   :1;
        unsigned C2ZLF                  :1;
        unsigned C2POL                  :1;
        unsigned C2OE                   :1;
        unsigned C2OUT                  :1;
        unsigned C2ON                   :1;
    };
} CM2CON0bits_t;
CM2CON0bits_t CM2CON0bits ; //SWAP 0x113;
// bitfield macros
#define _CM2CON0_C2SYNC_POSN                                0x0
#define _CM2CON0_C2SYNC_POSITION                            0x0
#define _CM2CON0_C2SYNC_SIZE                                0x1
#define _CM2CON0_C2SYNC_LENGTH                              0x1
#define _CM2CON0_C2SYNC_MASK                                0x1
#define _CM2CON0_C2HYS_POSN                                 0x1
#define _CM2CON0_C2HYS_POSITION                             0x1
#define _CM2CON0_C2HYS_SIZE                                 0x1
#define _CM2CON0_C2HYS_LENGTH                               0x1
#define _CM2CON0_C2HYS_MASK                                 0x2
#define _CM2CON0_C2SP_POSN                                  0x2
#define _CM2CON0_C2SP_POSITION                              0x2
#define _CM2CON0_C2SP_SIZE                                  0x1
#define _CM2CON0_C2SP_LENGTH                                0x1
#define _CM2CON0_C2SP_MASK                                  0x4
#define _CM2CON0_C2ZLF_POSN                                 0x3
#define _CM2CON0_C2ZLF_POSITION                             0x3
#define _CM2CON0_C2ZLF_SIZE                                 0x1
#define _CM2CON0_C2ZLF_LENGTH                               0x1
#define _CM2CON0_C2ZLF_MASK                                 0x8
#define _CM2CON0_C2POL_POSN                                 0x4
#define _CM2CON0_C2POL_POSITION                             0x4
#define _CM2CON0_C2POL_SIZE                                 0x1
#define _CM2CON0_C2POL_LENGTH                               0x1
#define _CM2CON0_C2POL_MASK                                 0x10
#define _CM2CON0_C2OE_POSN                                  0x5
#define _CM2CON0_C2OE_POSITION                              0x5
#define _CM2CON0_C2OE_SIZE                                  0x1
#define _CM2CON0_C2OE_LENGTH                                0x1
#define _CM2CON0_C2OE_MASK                                  0x20
#define _CM2CON0_C2OUT_POSN                                 0x6
#define _CM2CON0_C2OUT_POSITION                             0x6
#define _CM2CON0_C2OUT_SIZE                                 0x1
#define _CM2CON0_C2OUT_LENGTH                               0x1
#define _CM2CON0_C2OUT_MASK                                 0x40
#define _CM2CON0_C2ON_POSN                                  0x7
#define _CM2CON0_C2ON_POSITION                              0x7
#define _CM2CON0_C2ON_SIZE                                  0x1
#define _CM2CON0_C2ON_LENGTH                                0x1
#define _CM2CON0_C2ON_MASK                                  0x80

// Register: CM2CON1
unsigned char           CM2CON1             ; //SWAP 0x114;
#ifndef _LIB_BUILD
asm("CM2CON1 equ 0114h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C2NCH0                 :1;
        unsigned C2NCH1                 :1;
        unsigned C2NCH2                 :1;
        unsigned C2PCH0                 :1;
        unsigned C2PCH1                 :1;
        unsigned C2PCH2                 :1;
        unsigned C2INTN                 :1;
        unsigned C2INTP                 :1;
    };
    struct {
        unsigned C2NCH                  :3;
        unsigned C2PCH                  :3;
    };
} CM2CON1bits_t;
CM2CON1bits_t CM2CON1bits ; //SWAP 0x114;
// bitfield macros
#define _CM2CON1_C2NCH0_POSN                                0x0
#define _CM2CON1_C2NCH0_POSITION                            0x0
#define _CM2CON1_C2NCH0_SIZE                                0x1
#define _CM2CON1_C2NCH0_LENGTH                              0x1
#define _CM2CON1_C2NCH0_MASK                                0x1
#define _CM2CON1_C2NCH1_POSN                                0x1
#define _CM2CON1_C2NCH1_POSITION                            0x1
#define _CM2CON1_C2NCH1_SIZE                                0x1
#define _CM2CON1_C2NCH1_LENGTH                              0x1
#define _CM2CON1_C2NCH1_MASK                                0x2
#define _CM2CON1_C2NCH2_POSN                                0x2
#define _CM2CON1_C2NCH2_POSITION                            0x2
#define _CM2CON1_C2NCH2_SIZE                                0x1
#define _CM2CON1_C2NCH2_LENGTH                              0x1
#define _CM2CON1_C2NCH2_MASK                                0x4
#define _CM2CON1_C2PCH0_POSN                                0x3
#define _CM2CON1_C2PCH0_POSITION                            0x3
#define _CM2CON1_C2PCH0_SIZE                                0x1
#define _CM2CON1_C2PCH0_LENGTH                              0x1
#define _CM2CON1_C2PCH0_MASK                                0x8
#define _CM2CON1_C2PCH1_POSN                                0x4
#define _CM2CON1_C2PCH1_POSITION                            0x4
#define _CM2CON1_C2PCH1_SIZE                                0x1
#define _CM2CON1_C2PCH1_LENGTH                              0x1
#define _CM2CON1_C2PCH1_MASK                                0x10
#define _CM2CON1_C2PCH2_POSN                                0x5
#define _CM2CON1_C2PCH2_POSITION                            0x5
#define _CM2CON1_C2PCH2_SIZE                                0x1
#define _CM2CON1_C2PCH2_LENGTH                              0x1
#define _CM2CON1_C2PCH2_MASK                                0x20
#define _CM2CON1_C2INTN_POSN                                0x6
#define _CM2CON1_C2INTN_POSITION                            0x6
#define _CM2CON1_C2INTN_SIZE                                0x1
#define _CM2CON1_C2INTN_LENGTH                              0x1
#define _CM2CON1_C2INTN_MASK                                0x40
#define _CM2CON1_C2INTP_POSN                                0x7
#define _CM2CON1_C2INTP_POSITION                            0x7
#define _CM2CON1_C2INTP_SIZE                                0x1
#define _CM2CON1_C2INTP_LENGTH                              0x1
#define _CM2CON1_C2INTP_MASK                                0x80
#define _CM2CON1_C2NCH_POSN                                 0x0
#define _CM2CON1_C2NCH_POSITION                             0x0
#define _CM2CON1_C2NCH_SIZE                                 0x3
#define _CM2CON1_C2NCH_LENGTH                               0x3
#define _CM2CON1_C2NCH_MASK                                 0x7
#define _CM2CON1_C2PCH_POSN                                 0x3
#define _CM2CON1_C2PCH_POSITION                             0x3
#define _CM2CON1_C2PCH_SIZE                                 0x3
#define _CM2CON1_C2PCH_LENGTH                               0x3
#define _CM2CON1_C2PCH_MASK                                 0x38

// Register: CMOUT
unsigned char           CMOUT               ; //SWAP 0x115;
#ifndef _LIB_BUILD
asm("CMOUT equ 0115h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned MC1OUT                 :1;
        unsigned MC2OUT                 :1;
        unsigned MC3OUT                 :1;
    };
} CMOUTbits_t;
CMOUTbits_t CMOUTbits ; //SWAP 0x115;
// bitfield macros
#define _CMOUT_MC1OUT_POSN                                  0x0
#define _CMOUT_MC1OUT_POSITION                              0x0
#define _CMOUT_MC1OUT_SIZE                                  0x1
#define _CMOUT_MC1OUT_LENGTH                                0x1
#define _CMOUT_MC1OUT_MASK                                  0x1
#define _CMOUT_MC2OUT_POSN                                  0x1
#define _CMOUT_MC2OUT_POSITION                              0x1
#define _CMOUT_MC2OUT_SIZE                                  0x1
#define _CMOUT_MC2OUT_LENGTH                                0x1
#define _CMOUT_MC2OUT_MASK                                  0x2
#define _CMOUT_MC3OUT_POSN                                  0x2
#define _CMOUT_MC3OUT_POSITION                              0x2
#define _CMOUT_MC3OUT_SIZE                                  0x1
#define _CMOUT_MC3OUT_LENGTH                                0x1
#define _CMOUT_MC3OUT_MASK                                  0x4

// Register: BORCON
unsigned char           BORCON              ; //SWAP 0x116;
#ifndef _LIB_BUILD
asm("BORCON equ 0116h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BORRDY                 :1;
        unsigned                        :5;
        unsigned BORFS                  :1;
        unsigned SBOREN                 :1;
    };
} BORCONbits_t;
BORCONbits_t BORCONbits ; //SWAP 0x116;
// bitfield macros
#define _BORCON_BORRDY_POSN                                 0x0
#define _BORCON_BORRDY_POSITION                             0x0
#define _BORCON_BORRDY_SIZE                                 0x1
#define _BORCON_BORRDY_LENGTH                               0x1
#define _BORCON_BORRDY_MASK                                 0x1
#define _BORCON_BORFS_POSN                                  0x6
#define _BORCON_BORFS_POSITION                              0x6
#define _BORCON_BORFS_SIZE                                  0x1
#define _BORCON_BORFS_LENGTH                                0x1
#define _BORCON_BORFS_MASK                                  0x40
#define _BORCON_SBOREN_POSN                                 0x7
#define _BORCON_SBOREN_POSITION                             0x7
#define _BORCON_SBOREN_SIZE                                 0x1
#define _BORCON_SBOREN_LENGTH                               0x1
#define _BORCON_SBOREN_MASK                                 0x80

// Register: FVRCON
unsigned char           FVRCON              ; //SWAP 0x117;
#ifndef _LIB_BUILD
asm("FVRCON equ 0117h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ADFVR0                 :1;
        unsigned ADFVR1                 :1;
        unsigned CDAFVR0                :1;
        unsigned CDAFVR1                :1;
        unsigned TSRNG                  :1;
        unsigned TSEN                   :1;
        unsigned FVRRDY                 :1;
        unsigned FVREN                  :1;
    };
    struct {
        unsigned ADFVR                  :2;
        unsigned CDAFVR                 :2;
    };
} FVRCONbits_t;
FVRCONbits_t FVRCONbits ; //SWAP 0x117;
// bitfield macros
#define _FVRCON_ADFVR0_POSN                                 0x0
#define _FVRCON_ADFVR0_POSITION                             0x0
#define _FVRCON_ADFVR0_SIZE                                 0x1
#define _FVRCON_ADFVR0_LENGTH                               0x1
#define _FVRCON_ADFVR0_MASK                                 0x1
#define _FVRCON_ADFVR1_POSN                                 0x1
#define _FVRCON_ADFVR1_POSITION                             0x1
#define _FVRCON_ADFVR1_SIZE                                 0x1
#define _FVRCON_ADFVR1_LENGTH                               0x1
#define _FVRCON_ADFVR1_MASK                                 0x2
#define _FVRCON_CDAFVR0_POSN                                0x2
#define _FVRCON_CDAFVR0_POSITION                            0x2
#define _FVRCON_CDAFVR0_SIZE                                0x1
#define _FVRCON_CDAFVR0_LENGTH                              0x1
#define _FVRCON_CDAFVR0_MASK                                0x4
#define _FVRCON_CDAFVR1_POSN                                0x3
#define _FVRCON_CDAFVR1_POSITION                            0x3
#define _FVRCON_CDAFVR1_SIZE                                0x1
#define _FVRCON_CDAFVR1_LENGTH                              0x1
#define _FVRCON_CDAFVR1_MASK                                0x8
#define _FVRCON_TSRNG_POSN                                  0x4
#define _FVRCON_TSRNG_POSITION                              0x4
#define _FVRCON_TSRNG_SIZE                                  0x1
#define _FVRCON_TSRNG_LENGTH                                0x1
#define _FVRCON_TSRNG_MASK                                  0x10
#define _FVRCON_TSEN_POSN                                   0x5
#define _FVRCON_TSEN_POSITION                               0x5
#define _FVRCON_TSEN_SIZE                                   0x1
#define _FVRCON_TSEN_LENGTH                                 0x1
#define _FVRCON_TSEN_MASK                                   0x20
#define _FVRCON_FVRRDY_POSN                                 0x6
#define _FVRCON_FVRRDY_POSITION                             0x6
#define _FVRCON_FVRRDY_SIZE                                 0x1
#define _FVRCON_FVRRDY_LENGTH                               0x1
#define _FVRCON_FVRRDY_MASK                                 0x40
#define _FVRCON_FVREN_POSN                                  0x7
#define _FVRCON_FVREN_POSITION                              0x7
#define _FVRCON_FVREN_SIZE                                  0x1
#define _FVRCON_FVREN_LENGTH                                0x1
#define _FVRCON_FVREN_MASK                                  0x80
#define _FVRCON_ADFVR_POSN                                  0x0
#define _FVRCON_ADFVR_POSITION                              0x0
#define _FVRCON_ADFVR_SIZE                                  0x2
#define _FVRCON_ADFVR_LENGTH                                0x2
#define _FVRCON_ADFVR_MASK                                  0x3
#define _FVRCON_CDAFVR_POSN                                 0x2
#define _FVRCON_CDAFVR_POSITION                             0x2
#define _FVRCON_CDAFVR_SIZE                                 0x2
#define _FVRCON_CDAFVR_LENGTH                               0x2
#define _FVRCON_CDAFVR_MASK                                 0xC

// Register: DACCON0
unsigned char           DACCON0             ; //SWAP 0x118;
#ifndef _LIB_BUILD
asm("DACCON0 equ 0118h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DACNSS                 :1;
        unsigned                        :1;
        unsigned DACPSS0                :1;
        unsigned DACPSS1                :1;
        unsigned DACOE2                 :1;
        unsigned DACOE1                 :1;
        unsigned                        :1;
        unsigned DACEN                  :1;
    };
    struct {
        unsigned                        :2;
        unsigned DACPSS                 :2;
    };
} DACCON0bits_t;
DACCON0bits_t DACCON0bits ; //SWAP 0x118;
// bitfield macros
#define _DACCON0_DACNSS_POSN                                0x0
#define _DACCON0_DACNSS_POSITION                            0x0
#define _DACCON0_DACNSS_SIZE                                0x1
#define _DACCON0_DACNSS_LENGTH                              0x1
#define _DACCON0_DACNSS_MASK                                0x1
#define _DACCON0_DACPSS0_POSN                               0x2
#define _DACCON0_DACPSS0_POSITION                           0x2
#define _DACCON0_DACPSS0_SIZE                               0x1
#define _DACCON0_DACPSS0_LENGTH                             0x1
#define _DACCON0_DACPSS0_MASK                               0x4
#define _DACCON0_DACPSS1_POSN                               0x3
#define _DACCON0_DACPSS1_POSITION                           0x3
#define _DACCON0_DACPSS1_SIZE                               0x1
#define _DACCON0_DACPSS1_LENGTH                             0x1
#define _DACCON0_DACPSS1_MASK                               0x8
#define _DACCON0_DACOE2_POSN                                0x4
#define _DACCON0_DACOE2_POSITION                            0x4
#define _DACCON0_DACOE2_SIZE                                0x1
#define _DACCON0_DACOE2_LENGTH                              0x1
#define _DACCON0_DACOE2_MASK                                0x10
#define _DACCON0_DACOE1_POSN                                0x5
#define _DACCON0_DACOE1_POSITION                            0x5
#define _DACCON0_DACOE1_SIZE                                0x1
#define _DACCON0_DACOE1_LENGTH                              0x1
#define _DACCON0_DACOE1_MASK                                0x20
#define _DACCON0_DACEN_POSN                                 0x7
#define _DACCON0_DACEN_POSITION                             0x7
#define _DACCON0_DACEN_SIZE                                 0x1
#define _DACCON0_DACEN_LENGTH                               0x1
#define _DACCON0_DACEN_MASK                                 0x80
#define _DACCON0_DACPSS_POSN                                0x2
#define _DACCON0_DACPSS_POSITION                            0x2
#define _DACCON0_DACPSS_SIZE                                0x2
#define _DACCON0_DACPSS_LENGTH                              0x2
#define _DACCON0_DACPSS_MASK                                0xC

// Register: DACCON1
unsigned char           DACCON1             ; //SWAP 0x119;
#ifndef _LIB_BUILD
asm("DACCON1 equ 0119h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DACR0                  :1;
        unsigned DACR1                  :1;
        unsigned DACR2                  :1;
        unsigned DACR3                  :1;
        unsigned DACR4                  :1;
        unsigned DACR5                  :1;
        unsigned DACR6                  :1;
        unsigned DACR7                  :1;
    };
    struct {
        unsigned DACR                   :8;
    };
} DACCON1bits_t;
DACCON1bits_t DACCON1bits ; //SWAP 0x119;
// bitfield macros
#define _DACCON1_DACR0_POSN                                 0x0
#define _DACCON1_DACR0_POSITION                             0x0
#define _DACCON1_DACR0_SIZE                                 0x1
#define _DACCON1_DACR0_LENGTH                               0x1
#define _DACCON1_DACR0_MASK                                 0x1
#define _DACCON1_DACR1_POSN                                 0x1
#define _DACCON1_DACR1_POSITION                             0x1
#define _DACCON1_DACR1_SIZE                                 0x1
#define _DACCON1_DACR1_LENGTH                               0x1
#define _DACCON1_DACR1_MASK                                 0x2
#define _DACCON1_DACR2_POSN                                 0x2
#define _DACCON1_DACR2_POSITION                             0x2
#define _DACCON1_DACR2_SIZE                                 0x1
#define _DACCON1_DACR2_LENGTH                               0x1
#define _DACCON1_DACR2_MASK                                 0x4
#define _DACCON1_DACR3_POSN                                 0x3
#define _DACCON1_DACR3_POSITION                             0x3
#define _DACCON1_DACR3_SIZE                                 0x1
#define _DACCON1_DACR3_LENGTH                               0x1
#define _DACCON1_DACR3_MASK                                 0x8
#define _DACCON1_DACR4_POSN                                 0x4
#define _DACCON1_DACR4_POSITION                             0x4
#define _DACCON1_DACR4_SIZE                                 0x1
#define _DACCON1_DACR4_LENGTH                               0x1
#define _DACCON1_DACR4_MASK                                 0x10
#define _DACCON1_DACR5_POSN                                 0x5
#define _DACCON1_DACR5_POSITION                             0x5
#define _DACCON1_DACR5_SIZE                                 0x1
#define _DACCON1_DACR5_LENGTH                               0x1
#define _DACCON1_DACR5_MASK                                 0x20
#define _DACCON1_DACR6_POSN                                 0x6
#define _DACCON1_DACR6_POSITION                             0x6
#define _DACCON1_DACR6_SIZE                                 0x1
#define _DACCON1_DACR6_LENGTH                               0x1
#define _DACCON1_DACR6_MASK                                 0x40
#define _DACCON1_DACR7_POSN                                 0x7
#define _DACCON1_DACR7_POSITION                             0x7
#define _DACCON1_DACR7_SIZE                                 0x1
#define _DACCON1_DACR7_LENGTH                               0x1
#define _DACCON1_DACR7_MASK                                 0x80
#define _DACCON1_DACR_POSN                                  0x0
#define _DACCON1_DACR_POSITION                              0x0
#define _DACCON1_DACR_SIZE                                  0x8
#define _DACCON1_DACR_LENGTH                                0x8
#define _DACCON1_DACR_MASK                                  0xFF

// Register: APFCON
unsigned char           APFCON              ; //SWAP 0x11D;
#ifndef _LIB_BUILD
asm("APFCON equ 011Dh");
#endif
// aliases
unsigned char           APFCON0             ; //SWAP 0x11D;
#ifndef _LIB_BUILD
asm("APFCON0 equ 011Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2SEL                :1;
        unsigned RXSEL                  :1;
        unsigned TXSEL                  :1;
        unsigned SDISEL                 :1;
        unsigned SCKSEL                 :1;
        unsigned SDOSEL                 :1;
        unsigned CCP1SEL                :1;
        unsigned C2OUTSEL               :1;
    };
} APFCONbits_t;
APFCONbits_t APFCONbits ; //SWAP 0x11D;
// bitfield macros
#define _APFCON_CCP2SEL_POSN                                0x0
#define _APFCON_CCP2SEL_POSITION                            0x0
#define _APFCON_CCP2SEL_SIZE                                0x1
#define _APFCON_CCP2SEL_LENGTH                              0x1
#define _APFCON_CCP2SEL_MASK                                0x1
#define _APFCON_RXSEL_POSN                                  0x1
#define _APFCON_RXSEL_POSITION                              0x1
#define _APFCON_RXSEL_SIZE                                  0x1
#define _APFCON_RXSEL_LENGTH                                0x1
#define _APFCON_RXSEL_MASK                                  0x2
#define _APFCON_TXSEL_POSN                                  0x2
#define _APFCON_TXSEL_POSITION                              0x2
#define _APFCON_TXSEL_SIZE                                  0x1
#define _APFCON_TXSEL_LENGTH                                0x1
#define _APFCON_TXSEL_MASK                                  0x4
#define _APFCON_SDISEL_POSN                                 0x3
#define _APFCON_SDISEL_POSITION                             0x3
#define _APFCON_SDISEL_SIZE                                 0x1
#define _APFCON_SDISEL_LENGTH                               0x1
#define _APFCON_SDISEL_MASK                                 0x8
#define _APFCON_SCKSEL_POSN                                 0x4
#define _APFCON_SCKSEL_POSITION                             0x4
#define _APFCON_SCKSEL_SIZE                                 0x1
#define _APFCON_SCKSEL_LENGTH                               0x1
#define _APFCON_SCKSEL_MASK                                 0x10
#define _APFCON_SDOSEL_POSN                                 0x5
#define _APFCON_SDOSEL_POSITION                             0x5
#define _APFCON_SDOSEL_SIZE                                 0x1
#define _APFCON_SDOSEL_LENGTH                               0x1
#define _APFCON_SDOSEL_MASK                                 0x20
#define _APFCON_CCP1SEL_POSN                                0x6
#define _APFCON_CCP1SEL_POSITION                            0x6
#define _APFCON_CCP1SEL_SIZE                                0x1
#define _APFCON_CCP1SEL_LENGTH                              0x1
#define _APFCON_CCP1SEL_MASK                                0x40
#define _APFCON_C2OUTSEL_POSN                               0x7
#define _APFCON_C2OUTSEL_POSITION                           0x7
#define _APFCON_C2OUTSEL_SIZE                               0x1
#define _APFCON_C2OUTSEL_LENGTH                             0x1
#define _APFCON_C2OUTSEL_MASK                               0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned CCP2SEL                :1;
        unsigned RXSEL                  :1;
        unsigned TXSEL                  :1;
        unsigned SDISEL                 :1;
        unsigned SCKSEL                 :1;
        unsigned SDOSEL                 :1;
        unsigned CCP1SEL                :1;
        unsigned C2OUTSEL               :1;
    };
} APFCON0bits_t;
APFCON0bits_t APFCON0bits ; //SWAP 0x11D;
// bitfield macros
#define _APFCON0_CCP2SEL_POSN                               0x0
#define _APFCON0_CCP2SEL_POSITION                           0x0
#define _APFCON0_CCP2SEL_SIZE                               0x1
#define _APFCON0_CCP2SEL_LENGTH                             0x1
#define _APFCON0_CCP2SEL_MASK                               0x1
#define _APFCON0_RXSEL_POSN                                 0x1
#define _APFCON0_RXSEL_POSITION                             0x1
#define _APFCON0_RXSEL_SIZE                                 0x1
#define _APFCON0_RXSEL_LENGTH                               0x1
#define _APFCON0_RXSEL_MASK                                 0x2
#define _APFCON0_TXSEL_POSN                                 0x2
#define _APFCON0_TXSEL_POSITION                             0x2
#define _APFCON0_TXSEL_SIZE                                 0x1
#define _APFCON0_TXSEL_LENGTH                               0x1
#define _APFCON0_TXSEL_MASK                                 0x4
#define _APFCON0_SDISEL_POSN                                0x3
#define _APFCON0_SDISEL_POSITION                            0x3
#define _APFCON0_SDISEL_SIZE                                0x1
#define _APFCON0_SDISEL_LENGTH                              0x1
#define _APFCON0_SDISEL_MASK                                0x8
#define _APFCON0_SCKSEL_POSN                                0x4
#define _APFCON0_SCKSEL_POSITION                            0x4
#define _APFCON0_SCKSEL_SIZE                                0x1
#define _APFCON0_SCKSEL_LENGTH                              0x1
#define _APFCON0_SCKSEL_MASK                                0x10
#define _APFCON0_SDOSEL_POSN                                0x5
#define _APFCON0_SDOSEL_POSITION                            0x5
#define _APFCON0_SDOSEL_SIZE                                0x1
#define _APFCON0_SDOSEL_LENGTH                              0x1
#define _APFCON0_SDOSEL_MASK                                0x20
#define _APFCON0_CCP1SEL_POSN                               0x6
#define _APFCON0_CCP1SEL_POSITION                           0x6
#define _APFCON0_CCP1SEL_SIZE                               0x1
#define _APFCON0_CCP1SEL_LENGTH                             0x1
#define _APFCON0_CCP1SEL_MASK                               0x40
#define _APFCON0_C2OUTSEL_POSN                              0x7
#define _APFCON0_C2OUTSEL_POSITION                          0x7
#define _APFCON0_C2OUTSEL_SIZE                              0x1
#define _APFCON0_C2OUTSEL_LENGTH                            0x1
#define _APFCON0_C2OUTSEL_MASK                              0x80

// Register: CM3CON0
unsigned char           CM3CON0             ; //SWAP 0x11E;
#ifndef _LIB_BUILD
asm("CM3CON0 equ 011Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C3SYNC                 :1;
        unsigned C3HYS                  :1;
        unsigned C3SP                   :1;
        unsigned C3ZLF                  :1;
        unsigned C3POL                  :1;
        unsigned C3OE                   :1;
        unsigned C3OUT                  :1;
        unsigned C3ON                   :1;
    };
} CM3CON0bits_t;
CM3CON0bits_t CM3CON0bits ; //SWAP 0x11E;
// bitfield macros
#define _CM3CON0_C3SYNC_POSN                                0x0
#define _CM3CON0_C3SYNC_POSITION                            0x0
#define _CM3CON0_C3SYNC_SIZE                                0x1
#define _CM3CON0_C3SYNC_LENGTH                              0x1
#define _CM3CON0_C3SYNC_MASK                                0x1
#define _CM3CON0_C3HYS_POSN                                 0x1
#define _CM3CON0_C3HYS_POSITION                             0x1
#define _CM3CON0_C3HYS_SIZE                                 0x1
#define _CM3CON0_C3HYS_LENGTH                               0x1
#define _CM3CON0_C3HYS_MASK                                 0x2
#define _CM3CON0_C3SP_POSN                                  0x2
#define _CM3CON0_C3SP_POSITION                              0x2
#define _CM3CON0_C3SP_SIZE                                  0x1
#define _CM3CON0_C3SP_LENGTH                                0x1
#define _CM3CON0_C3SP_MASK                                  0x4
#define _CM3CON0_C3ZLF_POSN                                 0x3
#define _CM3CON0_C3ZLF_POSITION                             0x3
#define _CM3CON0_C3ZLF_SIZE                                 0x1
#define _CM3CON0_C3ZLF_LENGTH                               0x1
#define _CM3CON0_C3ZLF_MASK                                 0x8
#define _CM3CON0_C3POL_POSN                                 0x4
#define _CM3CON0_C3POL_POSITION                             0x4
#define _CM3CON0_C3POL_SIZE                                 0x1
#define _CM3CON0_C3POL_LENGTH                               0x1
#define _CM3CON0_C3POL_MASK                                 0x10
#define _CM3CON0_C3OE_POSN                                  0x5
#define _CM3CON0_C3OE_POSITION                              0x5
#define _CM3CON0_C3OE_SIZE                                  0x1
#define _CM3CON0_C3OE_LENGTH                                0x1
#define _CM3CON0_C3OE_MASK                                  0x20
#define _CM3CON0_C3OUT_POSN                                 0x6
#define _CM3CON0_C3OUT_POSITION                             0x6
#define _CM3CON0_C3OUT_SIZE                                 0x1
#define _CM3CON0_C3OUT_LENGTH                               0x1
#define _CM3CON0_C3OUT_MASK                                 0x40
#define _CM3CON0_C3ON_POSN                                  0x7
#define _CM3CON0_C3ON_POSITION                              0x7
#define _CM3CON0_C3ON_SIZE                                  0x1
#define _CM3CON0_C3ON_LENGTH                                0x1
#define _CM3CON0_C3ON_MASK                                  0x80

// Register: CM3CON1
unsigned char           CM3CON1             ; //SWAP 0x11F;
#ifndef _LIB_BUILD
asm("CM3CON1 equ 011Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C3NCH0                 :1;
        unsigned C3NCH1                 :1;
        unsigned C3NCH2                 :1;
        unsigned C3PCH0                 :1;
        unsigned C3PCH1                 :1;
        unsigned C3PCH2                 :1;
        unsigned C3INTN                 :1;
        unsigned C3INTP                 :1;
    };
    struct {
        unsigned C3NCH                  :3;
        unsigned C3PCH                  :3;
    };
} CM3CON1bits_t;
CM3CON1bits_t CM3CON1bits ; //SWAP 0x11F;
// bitfield macros
#define _CM3CON1_C3NCH0_POSN                                0x0
#define _CM3CON1_C3NCH0_POSITION                            0x0
#define _CM3CON1_C3NCH0_SIZE                                0x1
#define _CM3CON1_C3NCH0_LENGTH                              0x1
#define _CM3CON1_C3NCH0_MASK                                0x1
#define _CM3CON1_C3NCH1_POSN                                0x1
#define _CM3CON1_C3NCH1_POSITION                            0x1
#define _CM3CON1_C3NCH1_SIZE                                0x1
#define _CM3CON1_C3NCH1_LENGTH                              0x1
#define _CM3CON1_C3NCH1_MASK                                0x2
#define _CM3CON1_C3NCH2_POSN                                0x2
#define _CM3CON1_C3NCH2_POSITION                            0x2
#define _CM3CON1_C3NCH2_SIZE                                0x1
#define _CM3CON1_C3NCH2_LENGTH                              0x1
#define _CM3CON1_C3NCH2_MASK                                0x4
#define _CM3CON1_C3PCH0_POSN                                0x3
#define _CM3CON1_C3PCH0_POSITION                            0x3
#define _CM3CON1_C3PCH0_SIZE                                0x1
#define _CM3CON1_C3PCH0_LENGTH                              0x1
#define _CM3CON1_C3PCH0_MASK                                0x8
#define _CM3CON1_C3PCH1_POSN                                0x4
#define _CM3CON1_C3PCH1_POSITION                            0x4
#define _CM3CON1_C3PCH1_SIZE                                0x1
#define _CM3CON1_C3PCH1_LENGTH                              0x1
#define _CM3CON1_C3PCH1_MASK                                0x10
#define _CM3CON1_C3PCH2_POSN                                0x5
#define _CM3CON1_C3PCH2_POSITION                            0x5
#define _CM3CON1_C3PCH2_SIZE                                0x1
#define _CM3CON1_C3PCH2_LENGTH                              0x1
#define _CM3CON1_C3PCH2_MASK                                0x20
#define _CM3CON1_C3INTN_POSN                                0x6
#define _CM3CON1_C3INTN_POSITION                            0x6
#define _CM3CON1_C3INTN_SIZE                                0x1
#define _CM3CON1_C3INTN_LENGTH                              0x1
#define _CM3CON1_C3INTN_MASK                                0x40
#define _CM3CON1_C3INTP_POSN                                0x7
#define _CM3CON1_C3INTP_POSITION                            0x7
#define _CM3CON1_C3INTP_SIZE                                0x1
#define _CM3CON1_C3INTP_LENGTH                              0x1
#define _CM3CON1_C3INTP_MASK                                0x80
#define _CM3CON1_C3NCH_POSN                                 0x0
#define _CM3CON1_C3NCH_POSITION                             0x0
#define _CM3CON1_C3NCH_SIZE                                 0x3
#define _CM3CON1_C3NCH_LENGTH                               0x3
#define _CM3CON1_C3NCH_MASK                                 0x7
#define _CM3CON1_C3PCH_POSN                                 0x3
#define _CM3CON1_C3PCH_POSITION                             0x3
#define _CM3CON1_C3PCH_SIZE                                 0x3
#define _CM3CON1_C3PCH_LENGTH                               0x3
#define _CM3CON1_C3PCH_MASK                                 0x38

// Register: ANSELA
unsigned char           ANSELA              ; //SWAP 0x18C;
#ifndef _LIB_BUILD
asm("ANSELA equ 018Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSA0                  :1;
        unsigned ANSA1                  :1;
        unsigned ANSA2                  :1;
        unsigned ANSA3                  :1;
        unsigned ANSA4                  :1;
        unsigned ANSA5                  :1;
        unsigned                        :1;
        unsigned ANSA7                  :1;
    };
    struct {
        unsigned ANSELA                 :8;
    };
} ANSELAbits_t;
ANSELAbits_t ANSELAbits ; //SWAP 0x18C;
// bitfield macros
#define _ANSELA_ANSA0_POSN                                  0x0
#define _ANSELA_ANSA0_POSITION                              0x0
#define _ANSELA_ANSA0_SIZE                                  0x1
#define _ANSELA_ANSA0_LENGTH                                0x1
#define _ANSELA_ANSA0_MASK                                  0x1
#define _ANSELA_ANSA1_POSN                                  0x1
#define _ANSELA_ANSA1_POSITION                              0x1
#define _ANSELA_ANSA1_SIZE                                  0x1
#define _ANSELA_ANSA1_LENGTH                                0x1
#define _ANSELA_ANSA1_MASK                                  0x2
#define _ANSELA_ANSA2_POSN                                  0x2
#define _ANSELA_ANSA2_POSITION                              0x2
#define _ANSELA_ANSA2_SIZE                                  0x1
#define _ANSELA_ANSA2_LENGTH                                0x1
#define _ANSELA_ANSA2_MASK                                  0x4
#define _ANSELA_ANSA3_POSN                                  0x3
#define _ANSELA_ANSA3_POSITION                              0x3
#define _ANSELA_ANSA3_SIZE                                  0x1
#define _ANSELA_ANSA3_LENGTH                                0x1
#define _ANSELA_ANSA3_MASK                                  0x8
#define _ANSELA_ANSA4_POSN                                  0x4
#define _ANSELA_ANSA4_POSITION                              0x4
#define _ANSELA_ANSA4_SIZE                                  0x1
#define _ANSELA_ANSA4_LENGTH                                0x1
#define _ANSELA_ANSA4_MASK                                  0x10
#define _ANSELA_ANSA5_POSN                                  0x5
#define _ANSELA_ANSA5_POSITION                              0x5
#define _ANSELA_ANSA5_SIZE                                  0x1
#define _ANSELA_ANSA5_LENGTH                                0x1
#define _ANSELA_ANSA5_MASK                                  0x20
#define _ANSELA_ANSA7_POSN                                  0x7
#define _ANSELA_ANSA7_POSITION                              0x7
#define _ANSELA_ANSA7_SIZE                                  0x1
#define _ANSELA_ANSA7_LENGTH                                0x1
#define _ANSELA_ANSA7_MASK                                  0x80
#define _ANSELA_ANSELA_POSN                                 0x0
#define _ANSELA_ANSELA_POSITION                             0x0
#define _ANSELA_ANSELA_SIZE                                 0x8
#define _ANSELA_ANSELA_LENGTH                               0x8
#define _ANSELA_ANSELA_MASK                                 0xFF

// Register: ANSELB
unsigned char           ANSELB              ; //SWAP 0x18D;
#ifndef _LIB_BUILD
asm("ANSELB equ 018Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ANSB0                  :1;
        unsigned ANSB1                  :1;
        unsigned ANSB2                  :1;
        unsigned ANSB3                  :1;
        unsigned ANSB4                  :1;
        unsigned ANSB5                  :1;
    };
    struct {
        unsigned ANSELB                 :6;
    };
} ANSELBbits_t;
ANSELBbits_t ANSELBbits ; //SWAP 0x18D;
// bitfield macros
#define _ANSELB_ANSB0_POSN                                  0x0
#define _ANSELB_ANSB0_POSITION                              0x0
#define _ANSELB_ANSB0_SIZE                                  0x1
#define _ANSELB_ANSB0_LENGTH                                0x1
#define _ANSELB_ANSB0_MASK                                  0x1
#define _ANSELB_ANSB1_POSN                                  0x1
#define _ANSELB_ANSB1_POSITION                              0x1
#define _ANSELB_ANSB1_SIZE                                  0x1
#define _ANSELB_ANSB1_LENGTH                                0x1
#define _ANSELB_ANSB1_MASK                                  0x2
#define _ANSELB_ANSB2_POSN                                  0x2
#define _ANSELB_ANSB2_POSITION                              0x2
#define _ANSELB_ANSB2_SIZE                                  0x1
#define _ANSELB_ANSB2_LENGTH                                0x1
#define _ANSELB_ANSB2_MASK                                  0x4
#define _ANSELB_ANSB3_POSN                                  0x3
#define _ANSELB_ANSB3_POSITION                              0x3
#define _ANSELB_ANSB3_SIZE                                  0x1
#define _ANSELB_ANSB3_LENGTH                                0x1
#define _ANSELB_ANSB3_MASK                                  0x8
#define _ANSELB_ANSB4_POSN                                  0x4
#define _ANSELB_ANSB4_POSITION                              0x4
#define _ANSELB_ANSB4_SIZE                                  0x1
#define _ANSELB_ANSB4_LENGTH                                0x1
#define _ANSELB_ANSB4_MASK                                  0x10
#define _ANSELB_ANSB5_POSN                                  0x5
#define _ANSELB_ANSB5_POSITION                              0x5
#define _ANSELB_ANSB5_SIZE                                  0x1
#define _ANSELB_ANSB5_LENGTH                                0x1
#define _ANSELB_ANSB5_MASK                                  0x20
#define _ANSELB_ANSELB_POSN                                 0x0
#define _ANSELB_ANSELB_POSITION                             0x0
#define _ANSELB_ANSELB_SIZE                                 0x6
#define _ANSELB_ANSELB_LENGTH                               0x6
#define _ANSELB_ANSELB_MASK                                 0x3F

// Register: EEADR
unsigned short          EEADR               ; //SWAP 0x191;
#ifndef _LIB_BUILD
asm("EEADR equ 0191h");
#endif

// Register: EEADRL
unsigned char           EEADRL              ; //SWAP 0x191;
#ifndef _LIB_BUILD
asm("EEADRL equ 0191h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADRL                 :8;
    };
} EEADRLbits_t;
EEADRLbits_t EEADRLbits ; //SWAP 0x191;
// bitfield macros
#define _EEADRL_EEADRL_POSN                                 0x0
#define _EEADRL_EEADRL_POSITION                             0x0
#define _EEADRL_EEADRL_SIZE                                 0x8
#define _EEADRL_EEADRL_LENGTH                               0x8
#define _EEADRL_EEADRL_MASK                                 0xFF

// Register: EEADRH
unsigned char           EEADRH              ; //SWAP 0x192;
#ifndef _LIB_BUILD
asm("EEADRH equ 0192h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEADRH                 :7;
    };
} EEADRHbits_t;
EEADRHbits_t EEADRHbits ; //SWAP 0x192;
// bitfield macros
#define _EEADRH_EEADRH_POSN                                 0x0
#define _EEADRH_EEADRH_POSITION                             0x0
#define _EEADRH_EEADRH_SIZE                                 0x7
#define _EEADRH_EEADRH_LENGTH                               0x7
#define _EEADRH_EEADRH_MASK                                 0x7F

// Register: EEDAT
unsigned short          EEDAT               ; //SWAP 0x193;
#ifndef _LIB_BUILD
asm("EEDAT equ 0193h");
#endif

// Register: EEDATL
unsigned char           EEDATL              ; //SWAP 0x193;
#ifndef _LIB_BUILD
asm("EEDATL equ 0193h");
#endif
// aliases
unsigned char           EEDATA              ; //SWAP 0x193;
#ifndef _LIB_BUILD
asm("EEDATA equ 0193h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDATL                 :8;
    };
} EEDATLbits_t;
EEDATLbits_t EEDATLbits ; //SWAP 0x193;
// bitfield macros
#define _EEDATL_EEDATL_POSN                                 0x0
#define _EEDATL_EEDATL_POSITION                             0x0
#define _EEDATL_EEDATL_SIZE                                 0x8
#define _EEDATL_EEDATL_LENGTH                               0x8
#define _EEDATL_EEDATL_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned EEDATL                 :8;
    };
} EEDATAbits_t;
EEDATAbits_t EEDATAbits ; //SWAP 0x193;
// bitfield macros
#define _EEDATA_EEDATL_POSN                                 0x0
#define _EEDATA_EEDATL_POSITION                             0x0
#define _EEDATA_EEDATL_SIZE                                 0x8
#define _EEDATA_EEDATL_LENGTH                               0x8
#define _EEDATA_EEDATL_MASK                                 0xFF

// Register: EEDATH
unsigned char           EEDATH              ; //SWAP 0x194;
#ifndef _LIB_BUILD
asm("EEDATH equ 0194h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EEDATH                 :6;
    };
} EEDATHbits_t;
EEDATHbits_t EEDATHbits ; //SWAP 0x194;
// bitfield macros
#define _EEDATH_EEDATH_POSN                                 0x0
#define _EEDATH_EEDATH_POSITION                             0x0
#define _EEDATH_EEDATH_SIZE                                 0x6
#define _EEDATH_EEDATH_LENGTH                               0x6
#define _EEDATH_EEDATH_MASK                                 0x3F

// Register: EECON1
unsigned char           EECON1              ; //SWAP 0x195;
#ifndef _LIB_BUILD
asm("EECON1 equ 0195h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RD                     :1;
        unsigned WR                     :1;
        unsigned WREN                   :1;
        unsigned WRERR                  :1;
        unsigned FREE                   :1;
        unsigned LWLO                   :1;
        unsigned CFGS                   :1;
        unsigned EEPGD                  :1;
    };
} EECON1bits_t;
EECON1bits_t EECON1bits ; //SWAP 0x195;
// bitfield macros
#define _EECON1_RD_POSN                                     0x0
#define _EECON1_RD_POSITION                                 0x0
#define _EECON1_RD_SIZE                                     0x1
#define _EECON1_RD_LENGTH                                   0x1
#define _EECON1_RD_MASK                                     0x1
#define _EECON1_WR_POSN                                     0x1
#define _EECON1_WR_POSITION                                 0x1
#define _EECON1_WR_SIZE                                     0x1
#define _EECON1_WR_LENGTH                                   0x1
#define _EECON1_WR_MASK                                     0x2
#define _EECON1_WREN_POSN                                   0x2
#define _EECON1_WREN_POSITION                               0x2
#define _EECON1_WREN_SIZE                                   0x1
#define _EECON1_WREN_LENGTH                                 0x1
#define _EECON1_WREN_MASK                                   0x4
#define _EECON1_WRERR_POSN                                  0x3
#define _EECON1_WRERR_POSITION                              0x3
#define _EECON1_WRERR_SIZE                                  0x1
#define _EECON1_WRERR_LENGTH                                0x1
#define _EECON1_WRERR_MASK                                  0x8
#define _EECON1_FREE_POSN                                   0x4
#define _EECON1_FREE_POSITION                               0x4
#define _EECON1_FREE_SIZE                                   0x1
#define _EECON1_FREE_LENGTH                                 0x1
#define _EECON1_FREE_MASK                                   0x10
#define _EECON1_LWLO_POSN                                   0x5
#define _EECON1_LWLO_POSITION                               0x5
#define _EECON1_LWLO_SIZE                                   0x1
#define _EECON1_LWLO_LENGTH                                 0x1
#define _EECON1_LWLO_MASK                                   0x20
#define _EECON1_CFGS_POSN                                   0x6
#define _EECON1_CFGS_POSITION                               0x6
#define _EECON1_CFGS_SIZE                                   0x1
#define _EECON1_CFGS_LENGTH                                 0x1
#define _EECON1_CFGS_MASK                                   0x40
#define _EECON1_EEPGD_POSN                                  0x7
#define _EECON1_EEPGD_POSITION                              0x7
#define _EECON1_EEPGD_SIZE                                  0x1
#define _EECON1_EEPGD_LENGTH                                0x1
#define _EECON1_EEPGD_MASK                                  0x80

// Register: EECON2
unsigned char           EECON2              ; //SWAP 0x196;
#ifndef _LIB_BUILD
asm("EECON2 equ 0196h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned EECON2                 :8;
    };
} EECON2bits_t;
EECON2bits_t EECON2bits ; //SWAP 0x196;
// bitfield macros
#define _EECON2_EECON2_POSN                                 0x0
#define _EECON2_EECON2_POSITION                             0x0
#define _EECON2_EECON2_SIZE                                 0x8
#define _EECON2_EECON2_LENGTH                               0x8
#define _EECON2_EECON2_MASK                                 0xFF

// Register: VREGCON
unsigned char           VREGCON             ; //SWAP 0x197;
#ifndef _LIB_BUILD
asm("VREGCON equ 0197h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned VREGPM                 :1;
    };
} VREGCONbits_t;
VREGCONbits_t VREGCONbits ; //SWAP 0x197;
// bitfield macros
#define _VREGCON_VREGPM_POSN                                0x1
#define _VREGCON_VREGPM_POSITION                            0x1
#define _VREGCON_VREGPM_SIZE                                0x1
#define _VREGCON_VREGPM_LENGTH                              0x1
#define _VREGCON_VREGPM_MASK                                0x2

// Register: RC1REG
unsigned char           RC1REG              ; //SWAP 0x199;
#ifndef _LIB_BUILD
asm("RC1REG equ 0199h");
#endif
// aliases
unsigned char           RCREG               ; //SWAP 0x199;
#ifndef _LIB_BUILD
asm("RCREG equ 0199h");
#endif
unsigned char           RCREG1              ; //SWAP 0x199;
#ifndef _LIB_BUILD
asm("RCREG1 equ 0199h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RC1REGbits_t;
RC1REGbits_t RC1REGbits ; //SWAP 0x199;
// bitfield macros
#define _RC1REG_RC1REG_POSN                                 0x0
#define _RC1REG_RC1REG_POSITION                             0x0
#define _RC1REG_RC1REG_SIZE                                 0x8
#define _RC1REG_RC1REG_LENGTH                               0x8
#define _RC1REG_RC1REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RCREGbits_t;
RCREGbits_t RCREGbits ; //SWAP 0x199;
// bitfield macros
#define _RCREG_RC1REG_POSN                                  0x0
#define _RCREG_RC1REG_POSITION                              0x0
#define _RCREG_RC1REG_SIZE                                  0x8
#define _RCREG_RC1REG_LENGTH                                0x8
#define _RCREG_RC1REG_MASK                                  0xFF
typedef union {
    struct {
        unsigned RC1REG                 :8;
    };
} RCREG1bits_t;
RCREG1bits_t RCREG1bits ; //SWAP 0x199;
// bitfield macros
#define _RCREG1_RC1REG_POSN                                 0x0
#define _RCREG1_RC1REG_POSITION                             0x0
#define _RCREG1_RC1REG_SIZE                                 0x8
#define _RCREG1_RC1REG_LENGTH                               0x8
#define _RCREG1_RC1REG_MASK                                 0xFF

// Register: TX1REG
unsigned char           TX1REG              ; //SWAP 0x19A;
#ifndef _LIB_BUILD
asm("TX1REG equ 019Ah");
#endif
// aliases
unsigned char           TXREG1              ; //SWAP 0x19A;
#ifndef _LIB_BUILD
asm("TXREG1 equ 019Ah");
#endif
unsigned char           TXREG               ; //SWAP 0x19A;
#ifndef _LIB_BUILD
asm("TXREG equ 019Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TX1REGbits_t;
TX1REGbits_t TX1REGbits ; //SWAP 0x19A;
// bitfield macros
#define _TX1REG_TX1REG_POSN                                 0x0
#define _TX1REG_TX1REG_POSITION                             0x0
#define _TX1REG_TX1REG_SIZE                                 0x8
#define _TX1REG_TX1REG_LENGTH                               0x8
#define _TX1REG_TX1REG_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TXREG1bits_t;
TXREG1bits_t TXREG1bits ; //SWAP 0x19A;
// bitfield macros
#define _TXREG1_TX1REG_POSN                                 0x0
#define _TXREG1_TX1REG_POSITION                             0x0
#define _TXREG1_TX1REG_SIZE                                 0x8
#define _TXREG1_TX1REG_LENGTH                               0x8
#define _TXREG1_TX1REG_MASK                                 0xFF
typedef union {
    struct {
        unsigned TX1REG                 :8;
    };
} TXREGbits_t;
TXREGbits_t TXREGbits ; //SWAP 0x19A;
// bitfield macros
#define _TXREG_TX1REG_POSN                                  0x0
#define _TXREG_TX1REG_POSITION                              0x0
#define _TXREG_TX1REG_SIZE                                  0x8
#define _TXREG_TX1REG_LENGTH                                0x8
#define _TXREG_TX1REG_MASK                                  0xFF

// Register: SP1BRG
unsigned short          SP1BRG              ; //SWAP 0x19B;
#ifndef _LIB_BUILD
asm("SP1BRG equ 019Bh");
#endif

// Register: SP1BRGL
unsigned char           SP1BRGL             ; //SWAP 0x19B;
#ifndef _LIB_BUILD
asm("SP1BRGL equ 019Bh");
#endif
// aliases
unsigned char           SPBRG               ; //SWAP 0x19B;
#ifndef _LIB_BUILD
asm("SPBRG equ 019Bh");
#endif
unsigned char           SPBRG1              ; //SWAP 0x19B;
#ifndef _LIB_BUILD
asm("SPBRG1 equ 019Bh");
#endif
unsigned char           SPBRGL              ; //SWAP 0x19B;
#ifndef _LIB_BUILD
asm("SPBRGL equ 019Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SP1BRGLbits_t;
SP1BRGLbits_t SP1BRGLbits ; //SWAP 0x19B;
// bitfield macros
#define _SP1BRGL_SP1BRGL_POSN                               0x0
#define _SP1BRGL_SP1BRGL_POSITION                           0x0
#define _SP1BRGL_SP1BRGL_SIZE                               0x8
#define _SP1BRGL_SP1BRGL_LENGTH                             0x8
#define _SP1BRGL_SP1BRGL_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRGbits_t;
SPBRGbits_t SPBRGbits ; //SWAP 0x19B;
// bitfield macros
#define _SPBRG_SP1BRGL_POSN                                 0x0
#define _SPBRG_SP1BRGL_POSITION                             0x0
#define _SPBRG_SP1BRGL_SIZE                                 0x8
#define _SPBRG_SP1BRGL_LENGTH                               0x8
#define _SPBRG_SP1BRGL_MASK                                 0xFF
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRG1bits_t;
SPBRG1bits_t SPBRG1bits ; //SWAP 0x19B;
// bitfield macros
#define _SPBRG1_SP1BRGL_POSN                                0x0
#define _SPBRG1_SP1BRGL_POSITION                            0x0
#define _SPBRG1_SP1BRGL_SIZE                                0x8
#define _SPBRG1_SP1BRGL_LENGTH                              0x8
#define _SPBRG1_SP1BRGL_MASK                                0xFF
typedef union {
    struct {
        unsigned SP1BRGL                :8;
    };
} SPBRGLbits_t;
SPBRGLbits_t SPBRGLbits ; //SWAP 0x19B;
// bitfield macros
#define _SPBRGL_SP1BRGL_POSN                                0x0
#define _SPBRGL_SP1BRGL_POSITION                            0x0
#define _SPBRGL_SP1BRGL_SIZE                                0x8
#define _SPBRGL_SP1BRGL_LENGTH                              0x8
#define _SPBRGL_SP1BRGL_MASK                                0xFF

// Register: SP1BRGH
unsigned char           SP1BRGH             ; //SWAP 0x19C;
#ifndef _LIB_BUILD
asm("SP1BRGH equ 019Ch");
#endif
// aliases
unsigned char           SPBRGH              ; //SWAP 0x19C;
#ifndef _LIB_BUILD
asm("SPBRGH equ 019Ch");
#endif
unsigned char           SPBRGH1             ; //SWAP 0x19C;
#ifndef _LIB_BUILD
asm("SPBRGH1 equ 019Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SP1BRGHbits_t;
SP1BRGHbits_t SP1BRGHbits ; //SWAP 0x19C;
// bitfield macros
#define _SP1BRGH_SP1BRGH_POSN                               0x0
#define _SP1BRGH_SP1BRGH_POSITION                           0x0
#define _SP1BRGH_SP1BRGH_SIZE                               0x8
#define _SP1BRGH_SP1BRGH_LENGTH                             0x8
#define _SP1BRGH_SP1BRGH_MASK                               0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SPBRGHbits_t;
SPBRGHbits_t SPBRGHbits ; //SWAP 0x19C;
// bitfield macros
#define _SPBRGH_SP1BRGH_POSN                                0x0
#define _SPBRGH_SP1BRGH_POSITION                            0x0
#define _SPBRGH_SP1BRGH_SIZE                                0x8
#define _SPBRGH_SP1BRGH_LENGTH                              0x8
#define _SPBRGH_SP1BRGH_MASK                                0xFF
typedef union {
    struct {
        unsigned SP1BRGH                :8;
    };
} SPBRGH1bits_t;
SPBRGH1bits_t SPBRGH1bits ; //SWAP 0x19C;
// bitfield macros
#define _SPBRGH1_SP1BRGH_POSN                               0x0
#define _SPBRGH1_SP1BRGH_POSITION                           0x0
#define _SPBRGH1_SP1BRGH_SIZE                               0x8
#define _SPBRGH1_SP1BRGH_LENGTH                             0x8
#define _SPBRGH1_SP1BRGH_MASK                               0xFF

// Register: RC1STA
unsigned char           RC1STA              ; //SWAP 0x19D;
#ifndef _LIB_BUILD
asm("RC1STA equ 019Dh");
#endif
// aliases
unsigned char           RCSTA1              ; //SWAP 0x19D;
#ifndef _LIB_BUILD
asm("RCSTA1 equ 019Dh");
#endif
unsigned char           RCSTA               ; //SWAP 0x19D;
#ifndef _LIB_BUILD
asm("RCSTA equ 019Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
} RC1STAbits_t;
RC1STAbits_t RC1STAbits ; //SWAP 0x19D;
// bitfield macros
#define _RC1STA_RX9D_POSN                                   0x0
#define _RC1STA_RX9D_POSITION                               0x0
#define _RC1STA_RX9D_SIZE                                   0x1
#define _RC1STA_RX9D_LENGTH                                 0x1
#define _RC1STA_RX9D_MASK                                   0x1
#define _RC1STA_OERR_POSN                                   0x1
#define _RC1STA_OERR_POSITION                               0x1
#define _RC1STA_OERR_SIZE                                   0x1
#define _RC1STA_OERR_LENGTH                                 0x1
#define _RC1STA_OERR_MASK                                   0x2
#define _RC1STA_FERR_POSN                                   0x2
#define _RC1STA_FERR_POSITION                               0x2
#define _RC1STA_FERR_SIZE                                   0x1
#define _RC1STA_FERR_LENGTH                                 0x1
#define _RC1STA_FERR_MASK                                   0x4
#define _RC1STA_ADDEN_POSN                                  0x3
#define _RC1STA_ADDEN_POSITION                              0x3
#define _RC1STA_ADDEN_SIZE                                  0x1
#define _RC1STA_ADDEN_LENGTH                                0x1
#define _RC1STA_ADDEN_MASK                                  0x8
#define _RC1STA_CREN_POSN                                   0x4
#define _RC1STA_CREN_POSITION                               0x4
#define _RC1STA_CREN_SIZE                                   0x1
#define _RC1STA_CREN_LENGTH                                 0x1
#define _RC1STA_CREN_MASK                                   0x10
#define _RC1STA_SREN_POSN                                   0x5
#define _RC1STA_SREN_POSITION                               0x5
#define _RC1STA_SREN_SIZE                                   0x1
#define _RC1STA_SREN_LENGTH                                 0x1
#define _RC1STA_SREN_MASK                                   0x20
#define _RC1STA_RX9_POSN                                    0x6
#define _RC1STA_RX9_POSITION                                0x6
#define _RC1STA_RX9_SIZE                                    0x1
#define _RC1STA_RX9_LENGTH                                  0x1
#define _RC1STA_RX9_MASK                                    0x40
#define _RC1STA_SPEN_POSN                                   0x7
#define _RC1STA_SPEN_POSITION                               0x7
#define _RC1STA_SPEN_SIZE                                   0x1
#define _RC1STA_SPEN_LENGTH                                 0x1
#define _RC1STA_SPEN_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
} RCSTA1bits_t;
RCSTA1bits_t RCSTA1bits ; //SWAP 0x19D;
// bitfield macros
#define _RCSTA1_RX9D_POSN                                   0x0
#define _RCSTA1_RX9D_POSITION                               0x0
#define _RCSTA1_RX9D_SIZE                                   0x1
#define _RCSTA1_RX9D_LENGTH                                 0x1
#define _RCSTA1_RX9D_MASK                                   0x1
#define _RCSTA1_OERR_POSN                                   0x1
#define _RCSTA1_OERR_POSITION                               0x1
#define _RCSTA1_OERR_SIZE                                   0x1
#define _RCSTA1_OERR_LENGTH                                 0x1
#define _RCSTA1_OERR_MASK                                   0x2
#define _RCSTA1_FERR_POSN                                   0x2
#define _RCSTA1_FERR_POSITION                               0x2
#define _RCSTA1_FERR_SIZE                                   0x1
#define _RCSTA1_FERR_LENGTH                                 0x1
#define _RCSTA1_FERR_MASK                                   0x4
#define _RCSTA1_ADDEN_POSN                                  0x3
#define _RCSTA1_ADDEN_POSITION                              0x3
#define _RCSTA1_ADDEN_SIZE                                  0x1
#define _RCSTA1_ADDEN_LENGTH                                0x1
#define _RCSTA1_ADDEN_MASK                                  0x8
#define _RCSTA1_CREN_POSN                                   0x4
#define _RCSTA1_CREN_POSITION                               0x4
#define _RCSTA1_CREN_SIZE                                   0x1
#define _RCSTA1_CREN_LENGTH                                 0x1
#define _RCSTA1_CREN_MASK                                   0x10
#define _RCSTA1_SREN_POSN                                   0x5
#define _RCSTA1_SREN_POSITION                               0x5
#define _RCSTA1_SREN_SIZE                                   0x1
#define _RCSTA1_SREN_LENGTH                                 0x1
#define _RCSTA1_SREN_MASK                                   0x20
#define _RCSTA1_RX9_POSN                                    0x6
#define _RCSTA1_RX9_POSITION                                0x6
#define _RCSTA1_RX9_SIZE                                    0x1
#define _RCSTA1_RX9_LENGTH                                  0x1
#define _RCSTA1_RX9_MASK                                    0x40
#define _RCSTA1_SPEN_POSN                                   0x7
#define _RCSTA1_SPEN_POSITION                               0x7
#define _RCSTA1_SPEN_SIZE                                   0x1
#define _RCSTA1_SPEN_LENGTH                                 0x1
#define _RCSTA1_SPEN_MASK                                   0x80
typedef union {
    struct {
        unsigned RX9D                   :1;
        unsigned OERR                   :1;
        unsigned FERR                   :1;
        unsigned ADDEN                  :1;
        unsigned CREN                   :1;
        unsigned SREN                   :1;
        unsigned RX9                    :1;
        unsigned SPEN                   :1;
    };
} RCSTAbits_t;
RCSTAbits_t RCSTAbits ; //SWAP 0x19D;
// bitfield macros
#define _RCSTA_RX9D_POSN                                    0x0
#define _RCSTA_RX9D_POSITION                                0x0
#define _RCSTA_RX9D_SIZE                                    0x1
#define _RCSTA_RX9D_LENGTH                                  0x1
#define _RCSTA_RX9D_MASK                                    0x1
#define _RCSTA_OERR_POSN                                    0x1
#define _RCSTA_OERR_POSITION                                0x1
#define _RCSTA_OERR_SIZE                                    0x1
#define _RCSTA_OERR_LENGTH                                  0x1
#define _RCSTA_OERR_MASK                                    0x2
#define _RCSTA_FERR_POSN                                    0x2
#define _RCSTA_FERR_POSITION                                0x2
#define _RCSTA_FERR_SIZE                                    0x1
#define _RCSTA_FERR_LENGTH                                  0x1
#define _RCSTA_FERR_MASK                                    0x4
#define _RCSTA_ADDEN_POSN                                   0x3
#define _RCSTA_ADDEN_POSITION                               0x3
#define _RCSTA_ADDEN_SIZE                                   0x1
#define _RCSTA_ADDEN_LENGTH                                 0x1
#define _RCSTA_ADDEN_MASK                                   0x8
#define _RCSTA_CREN_POSN                                    0x4
#define _RCSTA_CREN_POSITION                                0x4
#define _RCSTA_CREN_SIZE                                    0x1
#define _RCSTA_CREN_LENGTH                                  0x1
#define _RCSTA_CREN_MASK                                    0x10
#define _RCSTA_SREN_POSN                                    0x5
#define _RCSTA_SREN_POSITION                                0x5
#define _RCSTA_SREN_SIZE                                    0x1
#define _RCSTA_SREN_LENGTH                                  0x1
#define _RCSTA_SREN_MASK                                    0x20
#define _RCSTA_RX9_POSN                                     0x6
#define _RCSTA_RX9_POSITION                                 0x6
#define _RCSTA_RX9_SIZE                                     0x1
#define _RCSTA_RX9_LENGTH                                   0x1
#define _RCSTA_RX9_MASK                                     0x40
#define _RCSTA_SPEN_POSN                                    0x7
#define _RCSTA_SPEN_POSITION                                0x7
#define _RCSTA_SPEN_SIZE                                    0x1
#define _RCSTA_SPEN_LENGTH                                  0x1
#define _RCSTA_SPEN_MASK                                    0x80

// Register: TX1STA
unsigned char           TX1STA              ; //SWAP 0x19E;
#ifndef _LIB_BUILD
asm("TX1STA equ 019Eh");
#endif
// aliases
unsigned char           TXSTA1              ; //SWAP 0x19E;
#ifndef _LIB_BUILD
asm("TXSTA1 equ 019Eh");
#endif
unsigned char           TXSTA               ; //SWAP 0x19E;
#ifndef _LIB_BUILD
asm("TXSTA equ 019Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
} TX1STAbits_t;
TX1STAbits_t TX1STAbits ; //SWAP 0x19E;
// bitfield macros
#define _TX1STA_TX9D_POSN                                   0x0
#define _TX1STA_TX9D_POSITION                               0x0
#define _TX1STA_TX9D_SIZE                                   0x1
#define _TX1STA_TX9D_LENGTH                                 0x1
#define _TX1STA_TX9D_MASK                                   0x1
#define _TX1STA_TRMT_POSN                                   0x1
#define _TX1STA_TRMT_POSITION                               0x1
#define _TX1STA_TRMT_SIZE                                   0x1
#define _TX1STA_TRMT_LENGTH                                 0x1
#define _TX1STA_TRMT_MASK                                   0x2
#define _TX1STA_BRGH_POSN                                   0x2
#define _TX1STA_BRGH_POSITION                               0x2
#define _TX1STA_BRGH_SIZE                                   0x1
#define _TX1STA_BRGH_LENGTH                                 0x1
#define _TX1STA_BRGH_MASK                                   0x4
#define _TX1STA_SENDB_POSN                                  0x3
#define _TX1STA_SENDB_POSITION                              0x3
#define _TX1STA_SENDB_SIZE                                  0x1
#define _TX1STA_SENDB_LENGTH                                0x1
#define _TX1STA_SENDB_MASK                                  0x8
#define _TX1STA_SYNC_POSN                                   0x4
#define _TX1STA_SYNC_POSITION                               0x4
#define _TX1STA_SYNC_SIZE                                   0x1
#define _TX1STA_SYNC_LENGTH                                 0x1
#define _TX1STA_SYNC_MASK                                   0x10
#define _TX1STA_TXEN_POSN                                   0x5
#define _TX1STA_TXEN_POSITION                               0x5
#define _TX1STA_TXEN_SIZE                                   0x1
#define _TX1STA_TXEN_LENGTH                                 0x1
#define _TX1STA_TXEN_MASK                                   0x20
#define _TX1STA_TX9_POSN                                    0x6
#define _TX1STA_TX9_POSITION                                0x6
#define _TX1STA_TX9_SIZE                                    0x1
#define _TX1STA_TX9_LENGTH                                  0x1
#define _TX1STA_TX9_MASK                                    0x40
#define _TX1STA_CSRC_POSN                                   0x7
#define _TX1STA_CSRC_POSITION                               0x7
#define _TX1STA_CSRC_SIZE                                   0x1
#define _TX1STA_CSRC_LENGTH                                 0x1
#define _TX1STA_CSRC_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
} TXSTA1bits_t;
TXSTA1bits_t TXSTA1bits ; //SWAP 0x19E;
// bitfield macros
#define _TXSTA1_TX9D_POSN                                   0x0
#define _TXSTA1_TX9D_POSITION                               0x0
#define _TXSTA1_TX9D_SIZE                                   0x1
#define _TXSTA1_TX9D_LENGTH                                 0x1
#define _TXSTA1_TX9D_MASK                                   0x1
#define _TXSTA1_TRMT_POSN                                   0x1
#define _TXSTA1_TRMT_POSITION                               0x1
#define _TXSTA1_TRMT_SIZE                                   0x1
#define _TXSTA1_TRMT_LENGTH                                 0x1
#define _TXSTA1_TRMT_MASK                                   0x2
#define _TXSTA1_BRGH_POSN                                   0x2
#define _TXSTA1_BRGH_POSITION                               0x2
#define _TXSTA1_BRGH_SIZE                                   0x1
#define _TXSTA1_BRGH_LENGTH                                 0x1
#define _TXSTA1_BRGH_MASK                                   0x4
#define _TXSTA1_SENDB_POSN                                  0x3
#define _TXSTA1_SENDB_POSITION                              0x3
#define _TXSTA1_SENDB_SIZE                                  0x1
#define _TXSTA1_SENDB_LENGTH                                0x1
#define _TXSTA1_SENDB_MASK                                  0x8
#define _TXSTA1_SYNC_POSN                                   0x4
#define _TXSTA1_SYNC_POSITION                               0x4
#define _TXSTA1_SYNC_SIZE                                   0x1
#define _TXSTA1_SYNC_LENGTH                                 0x1
#define _TXSTA1_SYNC_MASK                                   0x10
#define _TXSTA1_TXEN_POSN                                   0x5
#define _TXSTA1_TXEN_POSITION                               0x5
#define _TXSTA1_TXEN_SIZE                                   0x1
#define _TXSTA1_TXEN_LENGTH                                 0x1
#define _TXSTA1_TXEN_MASK                                   0x20
#define _TXSTA1_TX9_POSN                                    0x6
#define _TXSTA1_TX9_POSITION                                0x6
#define _TXSTA1_TX9_SIZE                                    0x1
#define _TXSTA1_TX9_LENGTH                                  0x1
#define _TXSTA1_TX9_MASK                                    0x40
#define _TXSTA1_CSRC_POSN                                   0x7
#define _TXSTA1_CSRC_POSITION                               0x7
#define _TXSTA1_CSRC_SIZE                                   0x1
#define _TXSTA1_CSRC_LENGTH                                 0x1
#define _TXSTA1_CSRC_MASK                                   0x80
typedef union {
    struct {
        unsigned TX9D                   :1;
        unsigned TRMT                   :1;
        unsigned BRGH                   :1;
        unsigned SENDB                  :1;
        unsigned SYNC                   :1;
        unsigned TXEN                   :1;
        unsigned TX9                    :1;
        unsigned CSRC                   :1;
    };
} TXSTAbits_t;
TXSTAbits_t TXSTAbits ; //SWAP 0x19E;
// bitfield macros
#define _TXSTA_TX9D_POSN                                    0x0
#define _TXSTA_TX9D_POSITION                                0x0
#define _TXSTA_TX9D_SIZE                                    0x1
#define _TXSTA_TX9D_LENGTH                                  0x1
#define _TXSTA_TX9D_MASK                                    0x1
#define _TXSTA_TRMT_POSN                                    0x1
#define _TXSTA_TRMT_POSITION                                0x1
#define _TXSTA_TRMT_SIZE                                    0x1
#define _TXSTA_TRMT_LENGTH                                  0x1
#define _TXSTA_TRMT_MASK                                    0x2
#define _TXSTA_BRGH_POSN                                    0x2
#define _TXSTA_BRGH_POSITION                                0x2
#define _TXSTA_BRGH_SIZE                                    0x1
#define _TXSTA_BRGH_LENGTH                                  0x1
#define _TXSTA_BRGH_MASK                                    0x4
#define _TXSTA_SENDB_POSN                                   0x3
#define _TXSTA_SENDB_POSITION                               0x3
#define _TXSTA_SENDB_SIZE                                   0x1
#define _TXSTA_SENDB_LENGTH                                 0x1
#define _TXSTA_SENDB_MASK                                   0x8
#define _TXSTA_SYNC_POSN                                    0x4
#define _TXSTA_SYNC_POSITION                                0x4
#define _TXSTA_SYNC_SIZE                                    0x1
#define _TXSTA_SYNC_LENGTH                                  0x1
#define _TXSTA_SYNC_MASK                                    0x10
#define _TXSTA_TXEN_POSN                                    0x5
#define _TXSTA_TXEN_POSITION                                0x5
#define _TXSTA_TXEN_SIZE                                    0x1
#define _TXSTA_TXEN_LENGTH                                  0x1
#define _TXSTA_TXEN_MASK                                    0x20
#define _TXSTA_TX9_POSN                                     0x6
#define _TXSTA_TX9_POSITION                                 0x6
#define _TXSTA_TX9_SIZE                                     0x1
#define _TXSTA_TX9_LENGTH                                   0x1
#define _TXSTA_TX9_MASK                                     0x40
#define _TXSTA_CSRC_POSN                                    0x7
#define _TXSTA_CSRC_POSITION                                0x7
#define _TXSTA_CSRC_SIZE                                    0x1
#define _TXSTA_CSRC_LENGTH                                  0x1
#define _TXSTA_CSRC_MASK                                    0x80

// Register: BAUD1CON
unsigned char           BAUD1CON            ; //SWAP 0x19F;
#ifndef _LIB_BUILD
asm("BAUD1CON equ 019Fh");
#endif
// aliases
unsigned char           BAUDCON1            ; //SWAP 0x19F;
#ifndef _LIB_BUILD
asm("BAUDCON1 equ 019Fh");
#endif
unsigned char           BAUDCTL1            ; //SWAP 0x19F;
#ifndef _LIB_BUILD
asm("BAUDCTL1 equ 019Fh");
#endif
unsigned char           BAUDCON             ; //SWAP 0x19F;
#ifndef _LIB_BUILD
asm("BAUDCON equ 019Fh");
#endif
unsigned char           BAUDCTL             ; //SWAP 0x19F;
#ifndef _LIB_BUILD
asm("BAUDCTL equ 019Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
} BAUD1CONbits_t;
BAUD1CONbits_t BAUD1CONbits ; //SWAP 0x19F;
// bitfield macros
#define _BAUD1CON_ABDEN_POSN                                0x0
#define _BAUD1CON_ABDEN_POSITION                            0x0
#define _BAUD1CON_ABDEN_SIZE                                0x1
#define _BAUD1CON_ABDEN_LENGTH                              0x1
#define _BAUD1CON_ABDEN_MASK                                0x1
#define _BAUD1CON_WUE_POSN                                  0x1
#define _BAUD1CON_WUE_POSITION                              0x1
#define _BAUD1CON_WUE_SIZE                                  0x1
#define _BAUD1CON_WUE_LENGTH                                0x1
#define _BAUD1CON_WUE_MASK                                  0x2
#define _BAUD1CON_BRG16_POSN                                0x3
#define _BAUD1CON_BRG16_POSITION                            0x3
#define _BAUD1CON_BRG16_SIZE                                0x1
#define _BAUD1CON_BRG16_LENGTH                              0x1
#define _BAUD1CON_BRG16_MASK                                0x8
#define _BAUD1CON_SCKP_POSN                                 0x4
#define _BAUD1CON_SCKP_POSITION                             0x4
#define _BAUD1CON_SCKP_SIZE                                 0x1
#define _BAUD1CON_SCKP_LENGTH                               0x1
#define _BAUD1CON_SCKP_MASK                                 0x10
#define _BAUD1CON_RCIDL_POSN                                0x6
#define _BAUD1CON_RCIDL_POSITION                            0x6
#define _BAUD1CON_RCIDL_SIZE                                0x1
#define _BAUD1CON_RCIDL_LENGTH                              0x1
#define _BAUD1CON_RCIDL_MASK                                0x40
#define _BAUD1CON_ABDOVF_POSN                               0x7
#define _BAUD1CON_ABDOVF_POSITION                           0x7
#define _BAUD1CON_ABDOVF_SIZE                               0x1
#define _BAUD1CON_ABDOVF_LENGTH                             0x1
#define _BAUD1CON_ABDOVF_MASK                               0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
} BAUDCON1bits_t;
BAUDCON1bits_t BAUDCON1bits ; //SWAP 0x19F;
// bitfield macros
#define _BAUDCON1_ABDEN_POSN                                0x0
#define _BAUDCON1_ABDEN_POSITION                            0x0
#define _BAUDCON1_ABDEN_SIZE                                0x1
#define _BAUDCON1_ABDEN_LENGTH                              0x1
#define _BAUDCON1_ABDEN_MASK                                0x1
#define _BAUDCON1_WUE_POSN                                  0x1
#define _BAUDCON1_WUE_POSITION                              0x1
#define _BAUDCON1_WUE_SIZE                                  0x1
#define _BAUDCON1_WUE_LENGTH                                0x1
#define _BAUDCON1_WUE_MASK                                  0x2
#define _BAUDCON1_BRG16_POSN                                0x3
#define _BAUDCON1_BRG16_POSITION                            0x3
#define _BAUDCON1_BRG16_SIZE                                0x1
#define _BAUDCON1_BRG16_LENGTH                              0x1
#define _BAUDCON1_BRG16_MASK                                0x8
#define _BAUDCON1_SCKP_POSN                                 0x4
#define _BAUDCON1_SCKP_POSITION                             0x4
#define _BAUDCON1_SCKP_SIZE                                 0x1
#define _BAUDCON1_SCKP_LENGTH                               0x1
#define _BAUDCON1_SCKP_MASK                                 0x10
#define _BAUDCON1_RCIDL_POSN                                0x6
#define _BAUDCON1_RCIDL_POSITION                            0x6
#define _BAUDCON1_RCIDL_SIZE                                0x1
#define _BAUDCON1_RCIDL_LENGTH                              0x1
#define _BAUDCON1_RCIDL_MASK                                0x40
#define _BAUDCON1_ABDOVF_POSN                               0x7
#define _BAUDCON1_ABDOVF_POSITION                           0x7
#define _BAUDCON1_ABDOVF_SIZE                               0x1
#define _BAUDCON1_ABDOVF_LENGTH                             0x1
#define _BAUDCON1_ABDOVF_MASK                               0x80
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
} BAUDCTL1bits_t;
BAUDCTL1bits_t BAUDCTL1bits ; //SWAP 0x19F;
// bitfield macros
#define _BAUDCTL1_ABDEN_POSN                                0x0
#define _BAUDCTL1_ABDEN_POSITION                            0x0
#define _BAUDCTL1_ABDEN_SIZE                                0x1
#define _BAUDCTL1_ABDEN_LENGTH                              0x1
#define _BAUDCTL1_ABDEN_MASK                                0x1
#define _BAUDCTL1_WUE_POSN                                  0x1
#define _BAUDCTL1_WUE_POSITION                              0x1
#define _BAUDCTL1_WUE_SIZE                                  0x1
#define _BAUDCTL1_WUE_LENGTH                                0x1
#define _BAUDCTL1_WUE_MASK                                  0x2
#define _BAUDCTL1_BRG16_POSN                                0x3
#define _BAUDCTL1_BRG16_POSITION                            0x3
#define _BAUDCTL1_BRG16_SIZE                                0x1
#define _BAUDCTL1_BRG16_LENGTH                              0x1
#define _BAUDCTL1_BRG16_MASK                                0x8
#define _BAUDCTL1_SCKP_POSN                                 0x4
#define _BAUDCTL1_SCKP_POSITION                             0x4
#define _BAUDCTL1_SCKP_SIZE                                 0x1
#define _BAUDCTL1_SCKP_LENGTH                               0x1
#define _BAUDCTL1_SCKP_MASK                                 0x10
#define _BAUDCTL1_RCIDL_POSN                                0x6
#define _BAUDCTL1_RCIDL_POSITION                            0x6
#define _BAUDCTL1_RCIDL_SIZE                                0x1
#define _BAUDCTL1_RCIDL_LENGTH                              0x1
#define _BAUDCTL1_RCIDL_MASK                                0x40
#define _BAUDCTL1_ABDOVF_POSN                               0x7
#define _BAUDCTL1_ABDOVF_POSITION                           0x7
#define _BAUDCTL1_ABDOVF_SIZE                               0x1
#define _BAUDCTL1_ABDOVF_LENGTH                             0x1
#define _BAUDCTL1_ABDOVF_MASK                               0x80
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
} BAUDCONbits_t;
BAUDCONbits_t BAUDCONbits ; //SWAP 0x19F;
// bitfield macros
#define _BAUDCON_ABDEN_POSN                                 0x0
#define _BAUDCON_ABDEN_POSITION                             0x0
#define _BAUDCON_ABDEN_SIZE                                 0x1
#define _BAUDCON_ABDEN_LENGTH                               0x1
#define _BAUDCON_ABDEN_MASK                                 0x1
#define _BAUDCON_WUE_POSN                                   0x1
#define _BAUDCON_WUE_POSITION                               0x1
#define _BAUDCON_WUE_SIZE                                   0x1
#define _BAUDCON_WUE_LENGTH                                 0x1
#define _BAUDCON_WUE_MASK                                   0x2
#define _BAUDCON_BRG16_POSN                                 0x3
#define _BAUDCON_BRG16_POSITION                             0x3
#define _BAUDCON_BRG16_SIZE                                 0x1
#define _BAUDCON_BRG16_LENGTH                               0x1
#define _BAUDCON_BRG16_MASK                                 0x8
#define _BAUDCON_SCKP_POSN                                  0x4
#define _BAUDCON_SCKP_POSITION                              0x4
#define _BAUDCON_SCKP_SIZE                                  0x1
#define _BAUDCON_SCKP_LENGTH                                0x1
#define _BAUDCON_SCKP_MASK                                  0x10
#define _BAUDCON_RCIDL_POSN                                 0x6
#define _BAUDCON_RCIDL_POSITION                             0x6
#define _BAUDCON_RCIDL_SIZE                                 0x1
#define _BAUDCON_RCIDL_LENGTH                               0x1
#define _BAUDCON_RCIDL_MASK                                 0x40
#define _BAUDCON_ABDOVF_POSN                                0x7
#define _BAUDCON_ABDOVF_POSITION                            0x7
#define _BAUDCON_ABDOVF_SIZE                                0x1
#define _BAUDCON_ABDOVF_LENGTH                              0x1
#define _BAUDCON_ABDOVF_MASK                                0x80
typedef union {
    struct {
        unsigned ABDEN                  :1;
        unsigned WUE                    :1;
        unsigned                        :1;
        unsigned BRG16                  :1;
        unsigned SCKP                   :1;
        unsigned                        :1;
        unsigned RCIDL                  :1;
        unsigned ABDOVF                 :1;
    };
} BAUDCTLbits_t;
BAUDCTLbits_t BAUDCTLbits ; //SWAP 0x19F;
// bitfield macros
#define _BAUDCTL_ABDEN_POSN                                 0x0
#define _BAUDCTL_ABDEN_POSITION                             0x0
#define _BAUDCTL_ABDEN_SIZE                                 0x1
#define _BAUDCTL_ABDEN_LENGTH                               0x1
#define _BAUDCTL_ABDEN_MASK                                 0x1
#define _BAUDCTL_WUE_POSN                                   0x1
#define _BAUDCTL_WUE_POSITION                               0x1
#define _BAUDCTL_WUE_SIZE                                   0x1
#define _BAUDCTL_WUE_LENGTH                                 0x1
#define _BAUDCTL_WUE_MASK                                   0x2
#define _BAUDCTL_BRG16_POSN                                 0x3
#define _BAUDCTL_BRG16_POSITION                             0x3
#define _BAUDCTL_BRG16_SIZE                                 0x1
#define _BAUDCTL_BRG16_LENGTH                               0x1
#define _BAUDCTL_BRG16_MASK                                 0x8
#define _BAUDCTL_SCKP_POSN                                  0x4
#define _BAUDCTL_SCKP_POSITION                              0x4
#define _BAUDCTL_SCKP_SIZE                                  0x1
#define _BAUDCTL_SCKP_LENGTH                                0x1
#define _BAUDCTL_SCKP_MASK                                  0x10
#define _BAUDCTL_RCIDL_POSN                                 0x6
#define _BAUDCTL_RCIDL_POSITION                             0x6
#define _BAUDCTL_RCIDL_SIZE                                 0x1
#define _BAUDCTL_RCIDL_LENGTH                               0x1
#define _BAUDCTL_RCIDL_MASK                                 0x40
#define _BAUDCTL_ABDOVF_POSN                                0x7
#define _BAUDCTL_ABDOVF_POSITION                            0x7
#define _BAUDCTL_ABDOVF_SIZE                                0x1
#define _BAUDCTL_ABDOVF_LENGTH                              0x1
#define _BAUDCTL_ABDOVF_MASK                                0x80

// Register: WPUA
unsigned char           WPUA                ; //SWAP 0x20C;
#ifndef _LIB_BUILD
asm("WPUA equ 020Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUA0                  :1;
        unsigned WPUA1                  :1;
        unsigned WPUA2                  :1;
        unsigned WPUA3                  :1;
        unsigned WPUA4                  :1;
        unsigned WPUA5                  :1;
        unsigned WPUA6                  :1;
        unsigned WPUA7                  :1;
    };
    struct {
        unsigned WPUA                   :8;
    };
} WPUAbits_t;
WPUAbits_t WPUAbits ; //SWAP 0x20C;
// bitfield macros
#define _WPUA_WPUA0_POSN                                    0x0
#define _WPUA_WPUA0_POSITION                                0x0
#define _WPUA_WPUA0_SIZE                                    0x1
#define _WPUA_WPUA0_LENGTH                                  0x1
#define _WPUA_WPUA0_MASK                                    0x1
#define _WPUA_WPUA1_POSN                                    0x1
#define _WPUA_WPUA1_POSITION                                0x1
#define _WPUA_WPUA1_SIZE                                    0x1
#define _WPUA_WPUA1_LENGTH                                  0x1
#define _WPUA_WPUA1_MASK                                    0x2
#define _WPUA_WPUA2_POSN                                    0x2
#define _WPUA_WPUA2_POSITION                                0x2
#define _WPUA_WPUA2_SIZE                                    0x1
#define _WPUA_WPUA2_LENGTH                                  0x1
#define _WPUA_WPUA2_MASK                                    0x4
#define _WPUA_WPUA3_POSN                                    0x3
#define _WPUA_WPUA3_POSITION                                0x3
#define _WPUA_WPUA3_SIZE                                    0x1
#define _WPUA_WPUA3_LENGTH                                  0x1
#define _WPUA_WPUA3_MASK                                    0x8
#define _WPUA_WPUA4_POSN                                    0x4
#define _WPUA_WPUA4_POSITION                                0x4
#define _WPUA_WPUA4_SIZE                                    0x1
#define _WPUA_WPUA4_LENGTH                                  0x1
#define _WPUA_WPUA4_MASK                                    0x10
#define _WPUA_WPUA5_POSN                                    0x5
#define _WPUA_WPUA5_POSITION                                0x5
#define _WPUA_WPUA5_SIZE                                    0x1
#define _WPUA_WPUA5_LENGTH                                  0x1
#define _WPUA_WPUA5_MASK                                    0x20
#define _WPUA_WPUA6_POSN                                    0x6
#define _WPUA_WPUA6_POSITION                                0x6
#define _WPUA_WPUA6_SIZE                                    0x1
#define _WPUA_WPUA6_LENGTH                                  0x1
#define _WPUA_WPUA6_MASK                                    0x40
#define _WPUA_WPUA7_POSN                                    0x7
#define _WPUA_WPUA7_POSITION                                0x7
#define _WPUA_WPUA7_SIZE                                    0x1
#define _WPUA_WPUA7_LENGTH                                  0x1
#define _WPUA_WPUA7_MASK                                    0x80
#define _WPUA_WPUA_POSN                                     0x0
#define _WPUA_WPUA_POSITION                                 0x0
#define _WPUA_WPUA_SIZE                                     0x8
#define _WPUA_WPUA_LENGTH                                   0x8
#define _WPUA_WPUA_MASK                                     0xFF

// Register: WPUB
unsigned char           WPUB                ; //SWAP 0x20D;
#ifndef _LIB_BUILD
asm("WPUB equ 020Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUB0                  :1;
        unsigned WPUB1                  :1;
        unsigned WPUB2                  :1;
        unsigned WPUB3                  :1;
        unsigned WPUB4                  :1;
        unsigned WPUB5                  :1;
        unsigned WPUB6                  :1;
        unsigned WPUB7                  :1;
    };
    struct {
        unsigned WPUB                   :8;
    };
} WPUBbits_t;
WPUBbits_t WPUBbits ; //SWAP 0x20D;
// bitfield macros
#define _WPUB_WPUB0_POSN                                    0x0
#define _WPUB_WPUB0_POSITION                                0x0
#define _WPUB_WPUB0_SIZE                                    0x1
#define _WPUB_WPUB0_LENGTH                                  0x1
#define _WPUB_WPUB0_MASK                                    0x1
#define _WPUB_WPUB1_POSN                                    0x1
#define _WPUB_WPUB1_POSITION                                0x1
#define _WPUB_WPUB1_SIZE                                    0x1
#define _WPUB_WPUB1_LENGTH                                  0x1
#define _WPUB_WPUB1_MASK                                    0x2
#define _WPUB_WPUB2_POSN                                    0x2
#define _WPUB_WPUB2_POSITION                                0x2
#define _WPUB_WPUB2_SIZE                                    0x1
#define _WPUB_WPUB2_LENGTH                                  0x1
#define _WPUB_WPUB2_MASK                                    0x4
#define _WPUB_WPUB3_POSN                                    0x3
#define _WPUB_WPUB3_POSITION                                0x3
#define _WPUB_WPUB3_SIZE                                    0x1
#define _WPUB_WPUB3_LENGTH                                  0x1
#define _WPUB_WPUB3_MASK                                    0x8
#define _WPUB_WPUB4_POSN                                    0x4
#define _WPUB_WPUB4_POSITION                                0x4
#define _WPUB_WPUB4_SIZE                                    0x1
#define _WPUB_WPUB4_LENGTH                                  0x1
#define _WPUB_WPUB4_MASK                                    0x10
#define _WPUB_WPUB5_POSN                                    0x5
#define _WPUB_WPUB5_POSITION                                0x5
#define _WPUB_WPUB5_SIZE                                    0x1
#define _WPUB_WPUB5_LENGTH                                  0x1
#define _WPUB_WPUB5_MASK                                    0x20
#define _WPUB_WPUB6_POSN                                    0x6
#define _WPUB_WPUB6_POSITION                                0x6
#define _WPUB_WPUB6_SIZE                                    0x1
#define _WPUB_WPUB6_LENGTH                                  0x1
#define _WPUB_WPUB6_MASK                                    0x40
#define _WPUB_WPUB7_POSN                                    0x7
#define _WPUB_WPUB7_POSITION                                0x7
#define _WPUB_WPUB7_SIZE                                    0x1
#define _WPUB_WPUB7_LENGTH                                  0x1
#define _WPUB_WPUB7_MASK                                    0x80
#define _WPUB_WPUB_POSN                                     0x0
#define _WPUB_WPUB_POSITION                                 0x0
#define _WPUB_WPUB_SIZE                                     0x8
#define _WPUB_WPUB_LENGTH                                   0x8
#define _WPUB_WPUB_MASK                                     0xFF

// Register: WPUC
unsigned char           WPUC                ; //SWAP 0x20E;
#ifndef _LIB_BUILD
asm("WPUC equ 020Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WPUC0                  :1;
        unsigned WPUC1                  :1;
        unsigned WPUC2                  :1;
        unsigned WPUC3                  :1;
        unsigned WPUC4                  :1;
        unsigned WPUC5                  :1;
        unsigned WPUC6                  :1;
        unsigned WPUC7                  :1;
    };
    struct {
        unsigned WPUC                   :8;
    };
} WPUCbits_t;
WPUCbits_t WPUCbits ; //SWAP 0x20E;
// bitfield macros
#define _WPUC_WPUC0_POSN                                    0x0
#define _WPUC_WPUC0_POSITION                                0x0
#define _WPUC_WPUC0_SIZE                                    0x1
#define _WPUC_WPUC0_LENGTH                                  0x1
#define _WPUC_WPUC0_MASK                                    0x1
#define _WPUC_WPUC1_POSN                                    0x1
#define _WPUC_WPUC1_POSITION                                0x1
#define _WPUC_WPUC1_SIZE                                    0x1
#define _WPUC_WPUC1_LENGTH                                  0x1
#define _WPUC_WPUC1_MASK                                    0x2
#define _WPUC_WPUC2_POSN                                    0x2
#define _WPUC_WPUC2_POSITION                                0x2
#define _WPUC_WPUC2_SIZE                                    0x1
#define _WPUC_WPUC2_LENGTH                                  0x1
#define _WPUC_WPUC2_MASK                                    0x4
#define _WPUC_WPUC3_POSN                                    0x3
#define _WPUC_WPUC3_POSITION                                0x3
#define _WPUC_WPUC3_SIZE                                    0x1
#define _WPUC_WPUC3_LENGTH                                  0x1
#define _WPUC_WPUC3_MASK                                    0x8
#define _WPUC_WPUC4_POSN                                    0x4
#define _WPUC_WPUC4_POSITION                                0x4
#define _WPUC_WPUC4_SIZE                                    0x1
#define _WPUC_WPUC4_LENGTH                                  0x1
#define _WPUC_WPUC4_MASK                                    0x10
#define _WPUC_WPUC5_POSN                                    0x5
#define _WPUC_WPUC5_POSITION                                0x5
#define _WPUC_WPUC5_SIZE                                    0x1
#define _WPUC_WPUC5_LENGTH                                  0x1
#define _WPUC_WPUC5_MASK                                    0x20
#define _WPUC_WPUC6_POSN                                    0x6
#define _WPUC_WPUC6_POSITION                                0x6
#define _WPUC_WPUC6_SIZE                                    0x1
#define _WPUC_WPUC6_LENGTH                                  0x1
#define _WPUC_WPUC6_MASK                                    0x40
#define _WPUC_WPUC7_POSN                                    0x7
#define _WPUC_WPUC7_POSITION                                0x7
#define _WPUC_WPUC7_SIZE                                    0x1
#define _WPUC_WPUC7_LENGTH                                  0x1
#define _WPUC_WPUC7_MASK                                    0x80
#define _WPUC_WPUC_POSN                                     0x0
#define _WPUC_WPUC_POSITION                                 0x0
#define _WPUC_WPUC_SIZE                                     0x8
#define _WPUC_WPUC_LENGTH                                   0x8
#define _WPUC_WPUC_MASK                                     0xFF

// Register: WPUE
unsigned char           WPUE                ; //SWAP 0x210;
#ifndef _LIB_BUILD
asm("WPUE equ 0210h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned WPUE3                  :1;
    };
} WPUEbits_t;
WPUEbits_t WPUEbits ; //SWAP 0x210;
// bitfield macros
#define _WPUE_WPUE3_POSN                                    0x3
#define _WPUE_WPUE3_POSITION                                0x3
#define _WPUE_WPUE3_SIZE                                    0x1
#define _WPUE_WPUE3_LENGTH                                  0x1
#define _WPUE_WPUE3_MASK                                    0x8

// Register: SSPBUF
unsigned char           SSPBUF              ; //SWAP 0x211;
#ifndef _LIB_BUILD
asm("SSPBUF equ 0211h");
#endif
// aliases
unsigned char           SSP1BUF             ; //SWAP 0x211;
#ifndef _LIB_BUILD
asm("SSP1BUF equ 0211h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSPBUFbits_t;
SSPBUFbits_t SSPBUFbits ; //SWAP 0x211;
// bitfield macros
#define _SSPBUF_SSPBUF_POSN                                 0x0
#define _SSPBUF_SSPBUF_POSITION                             0x0
#define _SSPBUF_SSPBUF_SIZE                                 0x8
#define _SSPBUF_SSPBUF_LENGTH                               0x8
#define _SSPBUF_SSPBUF_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPBUF                 :8;
    };
} SSP1BUFbits_t;
SSP1BUFbits_t SSP1BUFbits ; //SWAP 0x211;
// bitfield macros
#define _SSP1BUF_SSPBUF_POSN                                0x0
#define _SSP1BUF_SSPBUF_POSITION                            0x0
#define _SSP1BUF_SSPBUF_SIZE                                0x8
#define _SSP1BUF_SSPBUF_LENGTH                              0x8
#define _SSP1BUF_SSPBUF_MASK                                0xFF

// Register: SSPADD
unsigned char           SSPADD              ; //SWAP 0x212;
#ifndef _LIB_BUILD
asm("SSPADD equ 0212h");
#endif
// aliases
unsigned char           SSP1ADD             ; //SWAP 0x212;
#ifndef _LIB_BUILD
asm("SSP1ADD equ 0212h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSPADDbits_t;
SSPADDbits_t SSPADDbits ; //SWAP 0x212;
// bitfield macros
#define _SSPADD_SSPADD_POSN                                 0x0
#define _SSPADD_SSPADD_POSITION                             0x0
#define _SSPADD_SSPADD_SIZE                                 0x8
#define _SSPADD_SSPADD_LENGTH                               0x8
#define _SSPADD_SSPADD_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPADD                 :8;
    };
} SSP1ADDbits_t;
SSP1ADDbits_t SSP1ADDbits ; //SWAP 0x212;
// bitfield macros
#define _SSP1ADD_SSPADD_POSN                                0x0
#define _SSP1ADD_SSPADD_POSITION                            0x0
#define _SSP1ADD_SSPADD_SIZE                                0x8
#define _SSP1ADD_SSPADD_LENGTH                              0x8
#define _SSP1ADD_SSPADD_MASK                                0xFF

// Register: SSPMSK
unsigned char           SSPMSK              ; //SWAP 0x213;
#ifndef _LIB_BUILD
asm("SSPMSK equ 0213h");
#endif
// aliases
unsigned char           SSP1MSK             ; //SWAP 0x213;
#ifndef _LIB_BUILD
asm("SSP1MSK equ 0213h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
} SSPMSKbits_t;
SSPMSKbits_t SSPMSKbits ; //SWAP 0x213;
// bitfield macros
#define _SSPMSK_SSPMSK_POSN                                 0x0
#define _SSPMSK_SSPMSK_POSITION                             0x0
#define _SSPMSK_SSPMSK_SIZE                                 0x8
#define _SSPMSK_SSPMSK_LENGTH                               0x8
#define _SSPMSK_SSPMSK_MASK                                 0xFF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPMSK                 :8;
    };
} SSP1MSKbits_t;
SSP1MSKbits_t SSP1MSKbits ; //SWAP 0x213;
// bitfield macros
#define _SSP1MSK_SSPMSK_POSN                                0x0
#define _SSP1MSK_SSPMSK_POSITION                            0x0
#define _SSP1MSK_SSPMSK_SIZE                                0x8
#define _SSP1MSK_SSPMSK_LENGTH                              0x8
#define _SSP1MSK_SSPMSK_MASK                                0xFF

// Register: SSPSTAT
unsigned char           SSPSTAT             ; //SWAP 0x214;
#ifndef _LIB_BUILD
asm("SSPSTAT equ 0214h");
#endif
// aliases
unsigned char           SSP1STAT            ; //SWAP 0x214;
#ifndef _LIB_BUILD
asm("SSP1STAT equ 0214h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
} SSPSTATbits_t;
SSPSTATbits_t SSPSTATbits ; //SWAP 0x214;
// bitfield macros
#define _SSPSTAT_BF_POSN                                    0x0
#define _SSPSTAT_BF_POSITION                                0x0
#define _SSPSTAT_BF_SIZE                                    0x1
#define _SSPSTAT_BF_LENGTH                                  0x1
#define _SSPSTAT_BF_MASK                                    0x1
#define _SSPSTAT_UA_POSN                                    0x1
#define _SSPSTAT_UA_POSITION                                0x1
#define _SSPSTAT_UA_SIZE                                    0x1
#define _SSPSTAT_UA_LENGTH                                  0x1
#define _SSPSTAT_UA_MASK                                    0x2
#define _SSPSTAT_R_nW_POSN                                  0x2
#define _SSPSTAT_R_nW_POSITION                              0x2
#define _SSPSTAT_R_nW_SIZE                                  0x1
#define _SSPSTAT_R_nW_LENGTH                                0x1
#define _SSPSTAT_R_nW_MASK                                  0x4
#define _SSPSTAT_S_POSN                                     0x3
#define _SSPSTAT_S_POSITION                                 0x3
#define _SSPSTAT_S_SIZE                                     0x1
#define _SSPSTAT_S_LENGTH                                   0x1
#define _SSPSTAT_S_MASK                                     0x8
#define _SSPSTAT_P_POSN                                     0x4
#define _SSPSTAT_P_POSITION                                 0x4
#define _SSPSTAT_P_SIZE                                     0x1
#define _SSPSTAT_P_LENGTH                                   0x1
#define _SSPSTAT_P_MASK                                     0x10
#define _SSPSTAT_D_nA_POSN                                  0x5
#define _SSPSTAT_D_nA_POSITION                              0x5
#define _SSPSTAT_D_nA_SIZE                                  0x1
#define _SSPSTAT_D_nA_LENGTH                                0x1
#define _SSPSTAT_D_nA_MASK                                  0x20
#define _SSPSTAT_CKE_POSN                                   0x6
#define _SSPSTAT_CKE_POSITION                               0x6
#define _SSPSTAT_CKE_SIZE                                   0x1
#define _SSPSTAT_CKE_LENGTH                                 0x1
#define _SSPSTAT_CKE_MASK                                   0x40
#define _SSPSTAT_SMP_POSN                                   0x7
#define _SSPSTAT_SMP_POSITION                               0x7
#define _SSPSTAT_SMP_SIZE                                   0x1
#define _SSPSTAT_SMP_LENGTH                                 0x1
#define _SSPSTAT_SMP_MASK                                   0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned BF                     :1;
        unsigned UA                     :1;
        unsigned R_nW                   :1;
        unsigned S                      :1;
        unsigned P                      :1;
        unsigned D_nA                   :1;
        unsigned CKE                    :1;
        unsigned SMP                    :1;
    };
} SSP1STATbits_t;
SSP1STATbits_t SSP1STATbits ; //SWAP 0x214;
// bitfield macros
#define _SSP1STAT_BF_POSN                                   0x0
#define _SSP1STAT_BF_POSITION                               0x0
#define _SSP1STAT_BF_SIZE                                   0x1
#define _SSP1STAT_BF_LENGTH                                 0x1
#define _SSP1STAT_BF_MASK                                   0x1
#define _SSP1STAT_UA_POSN                                   0x1
#define _SSP1STAT_UA_POSITION                               0x1
#define _SSP1STAT_UA_SIZE                                   0x1
#define _SSP1STAT_UA_LENGTH                                 0x1
#define _SSP1STAT_UA_MASK                                   0x2
#define _SSP1STAT_R_nW_POSN                                 0x2
#define _SSP1STAT_R_nW_POSITION                             0x2
#define _SSP1STAT_R_nW_SIZE                                 0x1
#define _SSP1STAT_R_nW_LENGTH                               0x1
#define _SSP1STAT_R_nW_MASK                                 0x4
#define _SSP1STAT_S_POSN                                    0x3
#define _SSP1STAT_S_POSITION                                0x3
#define _SSP1STAT_S_SIZE                                    0x1
#define _SSP1STAT_S_LENGTH                                  0x1
#define _SSP1STAT_S_MASK                                    0x8
#define _SSP1STAT_P_POSN                                    0x4
#define _SSP1STAT_P_POSITION                                0x4
#define _SSP1STAT_P_SIZE                                    0x1
#define _SSP1STAT_P_LENGTH                                  0x1
#define _SSP1STAT_P_MASK                                    0x10
#define _SSP1STAT_D_nA_POSN                                 0x5
#define _SSP1STAT_D_nA_POSITION                             0x5
#define _SSP1STAT_D_nA_SIZE                                 0x1
#define _SSP1STAT_D_nA_LENGTH                               0x1
#define _SSP1STAT_D_nA_MASK                                 0x20
#define _SSP1STAT_CKE_POSN                                  0x6
#define _SSP1STAT_CKE_POSITION                              0x6
#define _SSP1STAT_CKE_SIZE                                  0x1
#define _SSP1STAT_CKE_LENGTH                                0x1
#define _SSP1STAT_CKE_MASK                                  0x40
#define _SSP1STAT_SMP_POSN                                  0x7
#define _SSP1STAT_SMP_POSITION                              0x7
#define _SSP1STAT_SMP_SIZE                                  0x1
#define _SSP1STAT_SMP_LENGTH                                0x1
#define _SSP1STAT_SMP_MASK                                  0x80

// Register: SSPCON1
unsigned char           SSPCON1             ; //SWAP 0x215;
#ifndef _LIB_BUILD
asm("SSPCON1 equ 0215h");
#endif
// aliases
unsigned char           SSP1CON             ; //SWAP 0x215;
#ifndef _LIB_BUILD
asm("SSP1CON equ 0215h");
#endif
unsigned char           SSPCON              ; //SWAP 0x215;
#ifndef _LIB_BUILD
asm("SSPCON equ 0215h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
    };
} SSPCON1bits_t;
SSPCON1bits_t SSPCON1bits ; //SWAP 0x215;
// bitfield macros
#define _SSPCON1_SSPM0_POSN                                 0x0
#define _SSPCON1_SSPM0_POSITION                             0x0
#define _SSPCON1_SSPM0_SIZE                                 0x1
#define _SSPCON1_SSPM0_LENGTH                               0x1
#define _SSPCON1_SSPM0_MASK                                 0x1
#define _SSPCON1_SSPM1_POSN                                 0x1
#define _SSPCON1_SSPM1_POSITION                             0x1
#define _SSPCON1_SSPM1_SIZE                                 0x1
#define _SSPCON1_SSPM1_LENGTH                               0x1
#define _SSPCON1_SSPM1_MASK                                 0x2
#define _SSPCON1_SSPM2_POSN                                 0x2
#define _SSPCON1_SSPM2_POSITION                             0x2
#define _SSPCON1_SSPM2_SIZE                                 0x1
#define _SSPCON1_SSPM2_LENGTH                               0x1
#define _SSPCON1_SSPM2_MASK                                 0x4
#define _SSPCON1_SSPM3_POSN                                 0x3
#define _SSPCON1_SSPM3_POSITION                             0x3
#define _SSPCON1_SSPM3_SIZE                                 0x1
#define _SSPCON1_SSPM3_LENGTH                               0x1
#define _SSPCON1_SSPM3_MASK                                 0x8
#define _SSPCON1_CKP_POSN                                   0x4
#define _SSPCON1_CKP_POSITION                               0x4
#define _SSPCON1_CKP_SIZE                                   0x1
#define _SSPCON1_CKP_LENGTH                                 0x1
#define _SSPCON1_CKP_MASK                                   0x10
#define _SSPCON1_SSPEN_POSN                                 0x5
#define _SSPCON1_SSPEN_POSITION                             0x5
#define _SSPCON1_SSPEN_SIZE                                 0x1
#define _SSPCON1_SSPEN_LENGTH                               0x1
#define _SSPCON1_SSPEN_MASK                                 0x20
#define _SSPCON1_SSPOV_POSN                                 0x6
#define _SSPCON1_SSPOV_POSITION                             0x6
#define _SSPCON1_SSPOV_SIZE                                 0x1
#define _SSPCON1_SSPOV_LENGTH                               0x1
#define _SSPCON1_SSPOV_MASK                                 0x40
#define _SSPCON1_WCOL_POSN                                  0x7
#define _SSPCON1_WCOL_POSITION                              0x7
#define _SSPCON1_WCOL_SIZE                                  0x1
#define _SSPCON1_WCOL_LENGTH                                0x1
#define _SSPCON1_WCOL_MASK                                  0x80
#define _SSPCON1_SSPM_POSN                                  0x0
#define _SSPCON1_SSPM_POSITION                              0x0
#define _SSPCON1_SSPM_SIZE                                  0x4
#define _SSPCON1_SSPM_LENGTH                                0x4
#define _SSPCON1_SSPM_MASK                                  0xF
// alias bitfield definitions
typedef union {
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
    };
} SSP1CONbits_t;
SSP1CONbits_t SSP1CONbits ; //SWAP 0x215;
// bitfield macros
#define _SSP1CON_SSPM0_POSN                                 0x0
#define _SSP1CON_SSPM0_POSITION                             0x0
#define _SSP1CON_SSPM0_SIZE                                 0x1
#define _SSP1CON_SSPM0_LENGTH                               0x1
#define _SSP1CON_SSPM0_MASK                                 0x1
#define _SSP1CON_SSPM1_POSN                                 0x1
#define _SSP1CON_SSPM1_POSITION                             0x1
#define _SSP1CON_SSPM1_SIZE                                 0x1
#define _SSP1CON_SSPM1_LENGTH                               0x1
#define _SSP1CON_SSPM1_MASK                                 0x2
#define _SSP1CON_SSPM2_POSN                                 0x2
#define _SSP1CON_SSPM2_POSITION                             0x2
#define _SSP1CON_SSPM2_SIZE                                 0x1
#define _SSP1CON_SSPM2_LENGTH                               0x1
#define _SSP1CON_SSPM2_MASK                                 0x4
#define _SSP1CON_SSPM3_POSN                                 0x3
#define _SSP1CON_SSPM3_POSITION                             0x3
#define _SSP1CON_SSPM3_SIZE                                 0x1
#define _SSP1CON_SSPM3_LENGTH                               0x1
#define _SSP1CON_SSPM3_MASK                                 0x8
#define _SSP1CON_CKP_POSN                                   0x4
#define _SSP1CON_CKP_POSITION                               0x4
#define _SSP1CON_CKP_SIZE                                   0x1
#define _SSP1CON_CKP_LENGTH                                 0x1
#define _SSP1CON_CKP_MASK                                   0x10
#define _SSP1CON_SSPEN_POSN                                 0x5
#define _SSP1CON_SSPEN_POSITION                             0x5
#define _SSP1CON_SSPEN_SIZE                                 0x1
#define _SSP1CON_SSPEN_LENGTH                               0x1
#define _SSP1CON_SSPEN_MASK                                 0x20
#define _SSP1CON_SSPOV_POSN                                 0x6
#define _SSP1CON_SSPOV_POSITION                             0x6
#define _SSP1CON_SSPOV_SIZE                                 0x1
#define _SSP1CON_SSPOV_LENGTH                               0x1
#define _SSP1CON_SSPOV_MASK                                 0x40
#define _SSP1CON_WCOL_POSN                                  0x7
#define _SSP1CON_WCOL_POSITION                              0x7
#define _SSP1CON_WCOL_SIZE                                  0x1
#define _SSP1CON_WCOL_LENGTH                                0x1
#define _SSP1CON_WCOL_MASK                                  0x80
#define _SSP1CON_SSPM_POSN                                  0x0
#define _SSP1CON_SSPM_POSITION                              0x0
#define _SSP1CON_SSPM_SIZE                                  0x4
#define _SSP1CON_SSPM_LENGTH                                0x4
#define _SSP1CON_SSPM_MASK                                  0xF
typedef union {
    struct {
        unsigned SSPM0                  :1;
        unsigned SSPM1                  :1;
        unsigned SSPM2                  :1;
        unsigned SSPM3                  :1;
        unsigned CKP                    :1;
        unsigned SSPEN                  :1;
        unsigned SSPOV                  :1;
        unsigned WCOL                   :1;
    };
    struct {
        unsigned SSPM                   :4;
    };
} SSPCONbits_t;
SSPCONbits_t SSPCONbits ; //SWAP 0x215;
// bitfield macros
#define _SSPCON_SSPM0_POSN                                  0x0
#define _SSPCON_SSPM0_POSITION                              0x0
#define _SSPCON_SSPM0_SIZE                                  0x1
#define _SSPCON_SSPM0_LENGTH                                0x1
#define _SSPCON_SSPM0_MASK                                  0x1
#define _SSPCON_SSPM1_POSN                                  0x1
#define _SSPCON_SSPM1_POSITION                              0x1
#define _SSPCON_SSPM1_SIZE                                  0x1
#define _SSPCON_SSPM1_LENGTH                                0x1
#define _SSPCON_SSPM1_MASK                                  0x2
#define _SSPCON_SSPM2_POSN                                  0x2
#define _SSPCON_SSPM2_POSITION                              0x2
#define _SSPCON_SSPM2_SIZE                                  0x1
#define _SSPCON_SSPM2_LENGTH                                0x1
#define _SSPCON_SSPM2_MASK                                  0x4
#define _SSPCON_SSPM3_POSN                                  0x3
#define _SSPCON_SSPM3_POSITION                              0x3
#define _SSPCON_SSPM3_SIZE                                  0x1
#define _SSPCON_SSPM3_LENGTH                                0x1
#define _SSPCON_SSPM3_MASK                                  0x8
#define _SSPCON_CKP_POSN                                    0x4
#define _SSPCON_CKP_POSITION                                0x4
#define _SSPCON_CKP_SIZE                                    0x1
#define _SSPCON_CKP_LENGTH                                  0x1
#define _SSPCON_CKP_MASK                                    0x10
#define _SSPCON_SSPEN_POSN                                  0x5
#define _SSPCON_SSPEN_POSITION                              0x5
#define _SSPCON_SSPEN_SIZE                                  0x1
#define _SSPCON_SSPEN_LENGTH                                0x1
#define _SSPCON_SSPEN_MASK                                  0x20
#define _SSPCON_SSPOV_POSN                                  0x6
#define _SSPCON_SSPOV_POSITION                              0x6
#define _SSPCON_SSPOV_SIZE                                  0x1
#define _SSPCON_SSPOV_LENGTH                                0x1
#define _SSPCON_SSPOV_MASK                                  0x40
#define _SSPCON_WCOL_POSN                                   0x7
#define _SSPCON_WCOL_POSITION                               0x7
#define _SSPCON_WCOL_SIZE                                   0x1
#define _SSPCON_WCOL_LENGTH                                 0x1
#define _SSPCON_WCOL_MASK                                   0x80
#define _SSPCON_SSPM_POSN                                   0x0
#define _SSPCON_SSPM_POSITION                               0x0
#define _SSPCON_SSPM_SIZE                                   0x4
#define _SSPCON_SSPM_LENGTH                                 0x4
#define _SSPCON_SSPM_MASK                                   0xF

// Register: SSPCON2
unsigned char           SSPCON2             ; //SWAP 0x216;
#ifndef _LIB_BUILD
asm("SSPCON2 equ 0216h");
#endif
// aliases
unsigned char           SSP1CON2            ; //SWAP 0x216;
#ifndef _LIB_BUILD
asm("SSP1CON2 equ 0216h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
} SSPCON2bits_t;
SSPCON2bits_t SSPCON2bits ; //SWAP 0x216;
// bitfield macros
#define _SSPCON2_SEN_POSN                                   0x0
#define _SSPCON2_SEN_POSITION                               0x0
#define _SSPCON2_SEN_SIZE                                   0x1
#define _SSPCON2_SEN_LENGTH                                 0x1
#define _SSPCON2_SEN_MASK                                   0x1
#define _SSPCON2_RSEN_POSN                                  0x1
#define _SSPCON2_RSEN_POSITION                              0x1
#define _SSPCON2_RSEN_SIZE                                  0x1
#define _SSPCON2_RSEN_LENGTH                                0x1
#define _SSPCON2_RSEN_MASK                                  0x2
#define _SSPCON2_PEN_POSN                                   0x2
#define _SSPCON2_PEN_POSITION                               0x2
#define _SSPCON2_PEN_SIZE                                   0x1
#define _SSPCON2_PEN_LENGTH                                 0x1
#define _SSPCON2_PEN_MASK                                   0x4
#define _SSPCON2_RCEN_POSN                                  0x3
#define _SSPCON2_RCEN_POSITION                              0x3
#define _SSPCON2_RCEN_SIZE                                  0x1
#define _SSPCON2_RCEN_LENGTH                                0x1
#define _SSPCON2_RCEN_MASK                                  0x8
#define _SSPCON2_ACKEN_POSN                                 0x4
#define _SSPCON2_ACKEN_POSITION                             0x4
#define _SSPCON2_ACKEN_SIZE                                 0x1
#define _SSPCON2_ACKEN_LENGTH                               0x1
#define _SSPCON2_ACKEN_MASK                                 0x10
#define _SSPCON2_ACKDT_POSN                                 0x5
#define _SSPCON2_ACKDT_POSITION                             0x5
#define _SSPCON2_ACKDT_SIZE                                 0x1
#define _SSPCON2_ACKDT_LENGTH                               0x1
#define _SSPCON2_ACKDT_MASK                                 0x20
#define _SSPCON2_ACKSTAT_POSN                               0x6
#define _SSPCON2_ACKSTAT_POSITION                           0x6
#define _SSPCON2_ACKSTAT_SIZE                               0x1
#define _SSPCON2_ACKSTAT_LENGTH                             0x1
#define _SSPCON2_ACKSTAT_MASK                               0x40
#define _SSPCON2_GCEN_POSN                                  0x7
#define _SSPCON2_GCEN_POSITION                              0x7
#define _SSPCON2_GCEN_SIZE                                  0x1
#define _SSPCON2_GCEN_LENGTH                                0x1
#define _SSPCON2_GCEN_MASK                                  0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned SEN                    :1;
        unsigned RSEN                   :1;
        unsigned PEN                    :1;
        unsigned RCEN                   :1;
        unsigned ACKEN                  :1;
        unsigned ACKDT                  :1;
        unsigned ACKSTAT                :1;
        unsigned GCEN                   :1;
    };
} SSP1CON2bits_t;
SSP1CON2bits_t SSP1CON2bits ; //SWAP 0x216;
// bitfield macros
#define _SSP1CON2_SEN_POSN                                  0x0
#define _SSP1CON2_SEN_POSITION                              0x0
#define _SSP1CON2_SEN_SIZE                                  0x1
#define _SSP1CON2_SEN_LENGTH                                0x1
#define _SSP1CON2_SEN_MASK                                  0x1
#define _SSP1CON2_RSEN_POSN                                 0x1
#define _SSP1CON2_RSEN_POSITION                             0x1
#define _SSP1CON2_RSEN_SIZE                                 0x1
#define _SSP1CON2_RSEN_LENGTH                               0x1
#define _SSP1CON2_RSEN_MASK                                 0x2
#define _SSP1CON2_PEN_POSN                                  0x2
#define _SSP1CON2_PEN_POSITION                              0x2
#define _SSP1CON2_PEN_SIZE                                  0x1
#define _SSP1CON2_PEN_LENGTH                                0x1
#define _SSP1CON2_PEN_MASK                                  0x4
#define _SSP1CON2_RCEN_POSN                                 0x3
#define _SSP1CON2_RCEN_POSITION                             0x3
#define _SSP1CON2_RCEN_SIZE                                 0x1
#define _SSP1CON2_RCEN_LENGTH                               0x1
#define _SSP1CON2_RCEN_MASK                                 0x8
#define _SSP1CON2_ACKEN_POSN                                0x4
#define _SSP1CON2_ACKEN_POSITION                            0x4
#define _SSP1CON2_ACKEN_SIZE                                0x1
#define _SSP1CON2_ACKEN_LENGTH                              0x1
#define _SSP1CON2_ACKEN_MASK                                0x10
#define _SSP1CON2_ACKDT_POSN                                0x5
#define _SSP1CON2_ACKDT_POSITION                            0x5
#define _SSP1CON2_ACKDT_SIZE                                0x1
#define _SSP1CON2_ACKDT_LENGTH                              0x1
#define _SSP1CON2_ACKDT_MASK                                0x20
#define _SSP1CON2_ACKSTAT_POSN                              0x6
#define _SSP1CON2_ACKSTAT_POSITION                          0x6
#define _SSP1CON2_ACKSTAT_SIZE                              0x1
#define _SSP1CON2_ACKSTAT_LENGTH                            0x1
#define _SSP1CON2_ACKSTAT_MASK                              0x40
#define _SSP1CON2_GCEN_POSN                                 0x7
#define _SSP1CON2_GCEN_POSITION                             0x7
#define _SSP1CON2_GCEN_SIZE                                 0x1
#define _SSP1CON2_GCEN_LENGTH                               0x1
#define _SSP1CON2_GCEN_MASK                                 0x80

// Register: SSPCON3
unsigned char           SSPCON3             ; //SWAP 0x217;
#ifndef _LIB_BUILD
asm("SSPCON3 equ 0217h");
#endif
// aliases
unsigned char           SSP1CON3            ; //SWAP 0x217;
#ifndef _LIB_BUILD
asm("SSP1CON3 equ 0217h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned DHEN                   :1;
        unsigned AHEN                   :1;
        unsigned SBCDE                  :1;
        unsigned SDAHT                  :1;
        unsigned BOEN                   :1;
        unsigned SCIE                   :1;
        unsigned PCIE                   :1;
        unsigned ACKTIM                 :1;
    };
} SSPCON3bits_t;
SSPCON3bits_t SSPCON3bits ; //SWAP 0x217;
// bitfield macros
#define _SSPCON3_DHEN_POSN                                  0x0
#define _SSPCON3_DHEN_POSITION                              0x0
#define _SSPCON3_DHEN_SIZE                                  0x1
#define _SSPCON3_DHEN_LENGTH                                0x1
#define _SSPCON3_DHEN_MASK                                  0x1
#define _SSPCON3_AHEN_POSN                                  0x1
#define _SSPCON3_AHEN_POSITION                              0x1
#define _SSPCON3_AHEN_SIZE                                  0x1
#define _SSPCON3_AHEN_LENGTH                                0x1
#define _SSPCON3_AHEN_MASK                                  0x2
#define _SSPCON3_SBCDE_POSN                                 0x2
#define _SSPCON3_SBCDE_POSITION                             0x2
#define _SSPCON3_SBCDE_SIZE                                 0x1
#define _SSPCON3_SBCDE_LENGTH                               0x1
#define _SSPCON3_SBCDE_MASK                                 0x4
#define _SSPCON3_SDAHT_POSN                                 0x3
#define _SSPCON3_SDAHT_POSITION                             0x3
#define _SSPCON3_SDAHT_SIZE                                 0x1
#define _SSPCON3_SDAHT_LENGTH                               0x1
#define _SSPCON3_SDAHT_MASK                                 0x8
#define _SSPCON3_BOEN_POSN                                  0x4
#define _SSPCON3_BOEN_POSITION                              0x4
#define _SSPCON3_BOEN_SIZE                                  0x1
#define _SSPCON3_BOEN_LENGTH                                0x1
#define _SSPCON3_BOEN_MASK                                  0x10
#define _SSPCON3_SCIE_POSN                                  0x5
#define _SSPCON3_SCIE_POSITION                              0x5
#define _SSPCON3_SCIE_SIZE                                  0x1
#define _SSPCON3_SCIE_LENGTH                                0x1
#define _SSPCON3_SCIE_MASK                                  0x20
#define _SSPCON3_PCIE_POSN                                  0x6
#define _SSPCON3_PCIE_POSITION                              0x6
#define _SSPCON3_PCIE_SIZE                                  0x1
#define _SSPCON3_PCIE_LENGTH                                0x1
#define _SSPCON3_PCIE_MASK                                  0x40
#define _SSPCON3_ACKTIM_POSN                                0x7
#define _SSPCON3_ACKTIM_POSITION                            0x7
#define _SSPCON3_ACKTIM_SIZE                                0x1
#define _SSPCON3_ACKTIM_LENGTH                              0x1
#define _SSPCON3_ACKTIM_MASK                                0x80
// alias bitfield definitions
typedef union {
    struct {
        unsigned DHEN                   :1;
        unsigned AHEN                   :1;
        unsigned SBCDE                  :1;
        unsigned SDAHT                  :1;
        unsigned BOEN                   :1;
        unsigned SCIE                   :1;
        unsigned PCIE                   :1;
        unsigned ACKTIM                 :1;
    };
} SSP1CON3bits_t;
SSP1CON3bits_t SSP1CON3bits ; //SWAP 0x217;
// bitfield macros
#define _SSP1CON3_DHEN_POSN                                 0x0
#define _SSP1CON3_DHEN_POSITION                             0x0
#define _SSP1CON3_DHEN_SIZE                                 0x1
#define _SSP1CON3_DHEN_LENGTH                               0x1
#define _SSP1CON3_DHEN_MASK                                 0x1
#define _SSP1CON3_AHEN_POSN                                 0x1
#define _SSP1CON3_AHEN_POSITION                             0x1
#define _SSP1CON3_AHEN_SIZE                                 0x1
#define _SSP1CON3_AHEN_LENGTH                               0x1
#define _SSP1CON3_AHEN_MASK                                 0x2
#define _SSP1CON3_SBCDE_POSN                                0x2
#define _SSP1CON3_SBCDE_POSITION                            0x2
#define _SSP1CON3_SBCDE_SIZE                                0x1
#define _SSP1CON3_SBCDE_LENGTH                              0x1
#define _SSP1CON3_SBCDE_MASK                                0x4
#define _SSP1CON3_SDAHT_POSN                                0x3
#define _SSP1CON3_SDAHT_POSITION                            0x3
#define _SSP1CON3_SDAHT_SIZE                                0x1
#define _SSP1CON3_SDAHT_LENGTH                              0x1
#define _SSP1CON3_SDAHT_MASK                                0x8
#define _SSP1CON3_BOEN_POSN                                 0x4
#define _SSP1CON3_BOEN_POSITION                             0x4
#define _SSP1CON3_BOEN_SIZE                                 0x1
#define _SSP1CON3_BOEN_LENGTH                               0x1
#define _SSP1CON3_BOEN_MASK                                 0x10
#define _SSP1CON3_SCIE_POSN                                 0x5
#define _SSP1CON3_SCIE_POSITION                             0x5
#define _SSP1CON3_SCIE_SIZE                                 0x1
#define _SSP1CON3_SCIE_LENGTH                               0x1
#define _SSP1CON3_SCIE_MASK                                 0x20
#define _SSP1CON3_PCIE_POSN                                 0x6
#define _SSP1CON3_PCIE_POSITION                             0x6
#define _SSP1CON3_PCIE_SIZE                                 0x1
#define _SSP1CON3_PCIE_LENGTH                               0x1
#define _SSP1CON3_PCIE_MASK                                 0x40
#define _SSP1CON3_ACKTIM_POSN                               0x7
#define _SSP1CON3_ACKTIM_POSITION                           0x7
#define _SSP1CON3_ACKTIM_SIZE                               0x1
#define _SSP1CON3_ACKTIM_LENGTH                             0x1
#define _SSP1CON3_ACKTIM_MASK                               0x80

// Register: ODCONA
unsigned char           ODCONA              ; //SWAP 0x28C;
#ifndef _LIB_BUILD
asm("ODCONA equ 028Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCONA0                :1;
        unsigned ODCONA1                :1;
        unsigned ODCONA2                :1;
        unsigned ODCONA3                :1;
        unsigned ODCONA4                :1;
        unsigned ODCONA5                :1;
        unsigned ODCONA6                :1;
        unsigned ODCONA7                :1;
    };
    struct {
        unsigned ODCONA                 :8;
    };
} ODCONAbits_t;
ODCONAbits_t ODCONAbits ; //SWAP 0x28C;
// bitfield macros
#define _ODCONA_ODCONA0_POSN                                0x0
#define _ODCONA_ODCONA0_POSITION                            0x0
#define _ODCONA_ODCONA0_SIZE                                0x1
#define _ODCONA_ODCONA0_LENGTH                              0x1
#define _ODCONA_ODCONA0_MASK                                0x1
#define _ODCONA_ODCONA1_POSN                                0x1
#define _ODCONA_ODCONA1_POSITION                            0x1
#define _ODCONA_ODCONA1_SIZE                                0x1
#define _ODCONA_ODCONA1_LENGTH                              0x1
#define _ODCONA_ODCONA1_MASK                                0x2
#define _ODCONA_ODCONA2_POSN                                0x2
#define _ODCONA_ODCONA2_POSITION                            0x2
#define _ODCONA_ODCONA2_SIZE                                0x1
#define _ODCONA_ODCONA2_LENGTH                              0x1
#define _ODCONA_ODCONA2_MASK                                0x4
#define _ODCONA_ODCONA3_POSN                                0x3
#define _ODCONA_ODCONA3_POSITION                            0x3
#define _ODCONA_ODCONA3_SIZE                                0x1
#define _ODCONA_ODCONA3_LENGTH                              0x1
#define _ODCONA_ODCONA3_MASK                                0x8
#define _ODCONA_ODCONA4_POSN                                0x4
#define _ODCONA_ODCONA4_POSITION                            0x4
#define _ODCONA_ODCONA4_SIZE                                0x1
#define _ODCONA_ODCONA4_LENGTH                              0x1
#define _ODCONA_ODCONA4_MASK                                0x10
#define _ODCONA_ODCONA5_POSN                                0x5
#define _ODCONA_ODCONA5_POSITION                            0x5
#define _ODCONA_ODCONA5_SIZE                                0x1
#define _ODCONA_ODCONA5_LENGTH                              0x1
#define _ODCONA_ODCONA5_MASK                                0x20
#define _ODCONA_ODCONA6_POSN                                0x6
#define _ODCONA_ODCONA6_POSITION                            0x6
#define _ODCONA_ODCONA6_SIZE                                0x1
#define _ODCONA_ODCONA6_LENGTH                              0x1
#define _ODCONA_ODCONA6_MASK                                0x40
#define _ODCONA_ODCONA7_POSN                                0x7
#define _ODCONA_ODCONA7_POSITION                            0x7
#define _ODCONA_ODCONA7_SIZE                                0x1
#define _ODCONA_ODCONA7_LENGTH                              0x1
#define _ODCONA_ODCONA7_MASK                                0x80
#define _ODCONA_ODCONA_POSN                                 0x0
#define _ODCONA_ODCONA_POSITION                             0x0
#define _ODCONA_ODCONA_SIZE                                 0x8
#define _ODCONA_ODCONA_LENGTH                               0x8
#define _ODCONA_ODCONA_MASK                                 0xFF

// Register: ODCONB
unsigned char           ODCONB              ; //SWAP 0x28D;
#ifndef _LIB_BUILD
asm("ODCONB equ 028Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCONB0                :1;
        unsigned ODCONB1                :1;
        unsigned ODCONB2                :1;
        unsigned ODCONB3                :1;
        unsigned ODCONB4                :1;
        unsigned ODCONB5                :1;
        unsigned ODCONB6                :1;
        unsigned ODCONB7                :1;
    };
    struct {
        unsigned ODCONB                 :8;
    };
} ODCONBbits_t;
ODCONBbits_t ODCONBbits ; //SWAP 0x28D;
// bitfield macros
#define _ODCONB_ODCONB0_POSN                                0x0
#define _ODCONB_ODCONB0_POSITION                            0x0
#define _ODCONB_ODCONB0_SIZE                                0x1
#define _ODCONB_ODCONB0_LENGTH                              0x1
#define _ODCONB_ODCONB0_MASK                                0x1
#define _ODCONB_ODCONB1_POSN                                0x1
#define _ODCONB_ODCONB1_POSITION                            0x1
#define _ODCONB_ODCONB1_SIZE                                0x1
#define _ODCONB_ODCONB1_LENGTH                              0x1
#define _ODCONB_ODCONB1_MASK                                0x2
#define _ODCONB_ODCONB2_POSN                                0x2
#define _ODCONB_ODCONB2_POSITION                            0x2
#define _ODCONB_ODCONB2_SIZE                                0x1
#define _ODCONB_ODCONB2_LENGTH                              0x1
#define _ODCONB_ODCONB2_MASK                                0x4
#define _ODCONB_ODCONB3_POSN                                0x3
#define _ODCONB_ODCONB3_POSITION                            0x3
#define _ODCONB_ODCONB3_SIZE                                0x1
#define _ODCONB_ODCONB3_LENGTH                              0x1
#define _ODCONB_ODCONB3_MASK                                0x8
#define _ODCONB_ODCONB4_POSN                                0x4
#define _ODCONB_ODCONB4_POSITION                            0x4
#define _ODCONB_ODCONB4_SIZE                                0x1
#define _ODCONB_ODCONB4_LENGTH                              0x1
#define _ODCONB_ODCONB4_MASK                                0x10
#define _ODCONB_ODCONB5_POSN                                0x5
#define _ODCONB_ODCONB5_POSITION                            0x5
#define _ODCONB_ODCONB5_SIZE                                0x1
#define _ODCONB_ODCONB5_LENGTH                              0x1
#define _ODCONB_ODCONB5_MASK                                0x20
#define _ODCONB_ODCONB6_POSN                                0x6
#define _ODCONB_ODCONB6_POSITION                            0x6
#define _ODCONB_ODCONB6_SIZE                                0x1
#define _ODCONB_ODCONB6_LENGTH                              0x1
#define _ODCONB_ODCONB6_MASK                                0x40
#define _ODCONB_ODCONB7_POSN                                0x7
#define _ODCONB_ODCONB7_POSITION                            0x7
#define _ODCONB_ODCONB7_SIZE                                0x1
#define _ODCONB_ODCONB7_LENGTH                              0x1
#define _ODCONB_ODCONB7_MASK                                0x80
#define _ODCONB_ODCONB_POSN                                 0x0
#define _ODCONB_ODCONB_POSITION                             0x0
#define _ODCONB_ODCONB_SIZE                                 0x8
#define _ODCONB_ODCONB_LENGTH                               0x8
#define _ODCONB_ODCONB_MASK                                 0xFF

// Register: ODCONC
unsigned char           ODCONC              ; //SWAP 0x28E;
#ifndef _LIB_BUILD
asm("ODCONC equ 028Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned ODCONC0                :1;
        unsigned ODCONC1                :1;
        unsigned ODCONC2                :1;
        unsigned ODCONC3                :1;
        unsigned ODCONC4                :1;
        unsigned ODCONC5                :1;
        unsigned ODCONC6                :1;
        unsigned ODCONC7                :1;
    };
    struct {
        unsigned ODCONC                 :8;
    };
} ODCONCbits_t;
ODCONCbits_t ODCONCbits ; //SWAP 0x28E;
// bitfield macros
#define _ODCONC_ODCONC0_POSN                                0x0
#define _ODCONC_ODCONC0_POSITION                            0x0
#define _ODCONC_ODCONC0_SIZE                                0x1
#define _ODCONC_ODCONC0_LENGTH                              0x1
#define _ODCONC_ODCONC0_MASK                                0x1
#define _ODCONC_ODCONC1_POSN                                0x1
#define _ODCONC_ODCONC1_POSITION                            0x1
#define _ODCONC_ODCONC1_SIZE                                0x1
#define _ODCONC_ODCONC1_LENGTH                              0x1
#define _ODCONC_ODCONC1_MASK                                0x2
#define _ODCONC_ODCONC2_POSN                                0x2
#define _ODCONC_ODCONC2_POSITION                            0x2
#define _ODCONC_ODCONC2_SIZE                                0x1
#define _ODCONC_ODCONC2_LENGTH                              0x1
#define _ODCONC_ODCONC2_MASK                                0x4
#define _ODCONC_ODCONC3_POSN                                0x3
#define _ODCONC_ODCONC3_POSITION                            0x3
#define _ODCONC_ODCONC3_SIZE                                0x1
#define _ODCONC_ODCONC3_LENGTH                              0x1
#define _ODCONC_ODCONC3_MASK                                0x8
#define _ODCONC_ODCONC4_POSN                                0x4
#define _ODCONC_ODCONC4_POSITION                            0x4
#define _ODCONC_ODCONC4_SIZE                                0x1
#define _ODCONC_ODCONC4_LENGTH                              0x1
#define _ODCONC_ODCONC4_MASK                                0x10
#define _ODCONC_ODCONC5_POSN                                0x5
#define _ODCONC_ODCONC5_POSITION                            0x5
#define _ODCONC_ODCONC5_SIZE                                0x1
#define _ODCONC_ODCONC5_LENGTH                              0x1
#define _ODCONC_ODCONC5_MASK                                0x20
#define _ODCONC_ODCONC6_POSN                                0x6
#define _ODCONC_ODCONC6_POSITION                            0x6
#define _ODCONC_ODCONC6_SIZE                                0x1
#define _ODCONC_ODCONC6_LENGTH                              0x1
#define _ODCONC_ODCONC6_MASK                                0x40
#define _ODCONC_ODCONC7_POSN                                0x7
#define _ODCONC_ODCONC7_POSITION                            0x7
#define _ODCONC_ODCONC7_SIZE                                0x1
#define _ODCONC_ODCONC7_LENGTH                              0x1
#define _ODCONC_ODCONC7_MASK                                0x80
#define _ODCONC_ODCONC_POSN                                 0x0
#define _ODCONC_ODCONC_POSITION                             0x0
#define _ODCONC_ODCONC_SIZE                                 0x8
#define _ODCONC_ODCONC_LENGTH                               0x8
#define _ODCONC_ODCONC_MASK                                 0xFF

// Register: CCPR1
unsigned short          CCPR1               ; //SWAP 0x291;
#ifndef _LIB_BUILD
asm("CCPR1 equ 0291h");
#endif

// Register: CCPR1L
unsigned char           CCPR1L              ; //SWAP 0x291;
#ifndef _LIB_BUILD
asm("CCPR1L equ 0291h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1L                 :8;
    };
} CCPR1Lbits_t;
CCPR1Lbits_t CCPR1Lbits ; //SWAP 0x291;
// bitfield macros
#define _CCPR1L_CCPR1L_POSN                                 0x0
#define _CCPR1L_CCPR1L_POSITION                             0x0
#define _CCPR1L_CCPR1L_SIZE                                 0x8
#define _CCPR1L_CCPR1L_LENGTH                               0x8
#define _CCPR1L_CCPR1L_MASK                                 0xFF

// Register: CCPR1H
unsigned char           CCPR1H              ; //SWAP 0x292;
#ifndef _LIB_BUILD
asm("CCPR1H equ 0292h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR1H                 :8;
    };
} CCPR1Hbits_t;
CCPR1Hbits_t CCPR1Hbits ; //SWAP 0x292;
// bitfield macros
#define _CCPR1H_CCPR1H_POSN                                 0x0
#define _CCPR1H_CCPR1H_POSITION                             0x0
#define _CCPR1H_CCPR1H_SIZE                                 0x8
#define _CCPR1H_CCPR1H_LENGTH                               0x8
#define _CCPR1H_CCPR1H_MASK                                 0xFF

// Register: CCP1CON
unsigned char           CCP1CON             ; //SWAP 0x293;
#ifndef _LIB_BUILD
asm("CCP1CON equ 0293h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP1M0                 :1;
        unsigned CCP1M1                 :1;
        unsigned CCP1M2                 :1;
        unsigned CCP1M3                 :1;
        unsigned DC1B0                  :1;
        unsigned DC1B1                  :1;
        unsigned P1M0                   :1;
        unsigned P1M1                   :1;
    };
    struct {
        unsigned CCP1M                  :4;
        unsigned DC1B                   :2;
        unsigned P1M                    :2;
    };
} CCP1CONbits_t;
CCP1CONbits_t CCP1CONbits ; //SWAP 0x293;
// bitfield macros
#define _CCP1CON_CCP1M0_POSN                                0x0
#define _CCP1CON_CCP1M0_POSITION                            0x0
#define _CCP1CON_CCP1M0_SIZE                                0x1
#define _CCP1CON_CCP1M0_LENGTH                              0x1
#define _CCP1CON_CCP1M0_MASK                                0x1
#define _CCP1CON_CCP1M1_POSN                                0x1
#define _CCP1CON_CCP1M1_POSITION                            0x1
#define _CCP1CON_CCP1M1_SIZE                                0x1
#define _CCP1CON_CCP1M1_LENGTH                              0x1
#define _CCP1CON_CCP1M1_MASK                                0x2
#define _CCP1CON_CCP1M2_POSN                                0x2
#define _CCP1CON_CCP1M2_POSITION                            0x2
#define _CCP1CON_CCP1M2_SIZE                                0x1
#define _CCP1CON_CCP1M2_LENGTH                              0x1
#define _CCP1CON_CCP1M2_MASK                                0x4
#define _CCP1CON_CCP1M3_POSN                                0x3
#define _CCP1CON_CCP1M3_POSITION                            0x3
#define _CCP1CON_CCP1M3_SIZE                                0x1
#define _CCP1CON_CCP1M3_LENGTH                              0x1
#define _CCP1CON_CCP1M3_MASK                                0x8
#define _CCP1CON_DC1B0_POSN                                 0x4
#define _CCP1CON_DC1B0_POSITION                             0x4
#define _CCP1CON_DC1B0_SIZE                                 0x1
#define _CCP1CON_DC1B0_LENGTH                               0x1
#define _CCP1CON_DC1B0_MASK                                 0x10
#define _CCP1CON_DC1B1_POSN                                 0x5
#define _CCP1CON_DC1B1_POSITION                             0x5
#define _CCP1CON_DC1B1_SIZE                                 0x1
#define _CCP1CON_DC1B1_LENGTH                               0x1
#define _CCP1CON_DC1B1_MASK                                 0x20
#define _CCP1CON_P1M0_POSN                                  0x6
#define _CCP1CON_P1M0_POSITION                              0x6
#define _CCP1CON_P1M0_SIZE                                  0x1
#define _CCP1CON_P1M0_LENGTH                                0x1
#define _CCP1CON_P1M0_MASK                                  0x40
#define _CCP1CON_P1M1_POSN                                  0x7
#define _CCP1CON_P1M1_POSITION                              0x7
#define _CCP1CON_P1M1_SIZE                                  0x1
#define _CCP1CON_P1M1_LENGTH                                0x1
#define _CCP1CON_P1M1_MASK                                  0x80
#define _CCP1CON_CCP1M_POSN                                 0x0
#define _CCP1CON_CCP1M_POSITION                             0x0
#define _CCP1CON_CCP1M_SIZE                                 0x4
#define _CCP1CON_CCP1M_LENGTH                               0x4
#define _CCP1CON_CCP1M_MASK                                 0xF
#define _CCP1CON_DC1B_POSN                                  0x4
#define _CCP1CON_DC1B_POSITION                              0x4
#define _CCP1CON_DC1B_SIZE                                  0x2
#define _CCP1CON_DC1B_LENGTH                                0x2
#define _CCP1CON_DC1B_MASK                                  0x30
#define _CCP1CON_P1M_POSN                                   0x6
#define _CCP1CON_P1M_POSITION                               0x6
#define _CCP1CON_P1M_SIZE                                   0x2
#define _CCP1CON_P1M_LENGTH                                 0x2
#define _CCP1CON_P1M_MASK                                   0xC0

// Register: CCPR2
unsigned short          CCPR2               ; //SWAP 0x298;
#ifndef _LIB_BUILD
asm("CCPR2 equ 0298h");
#endif

// Register: CCPR2L
unsigned char           CCPR2L              ; //SWAP 0x298;
#ifndef _LIB_BUILD
asm("CCPR2L equ 0298h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2L                 :8;
    };
} CCPR2Lbits_t;
CCPR2Lbits_t CCPR2Lbits ; //SWAP 0x298;
// bitfield macros
#define _CCPR2L_CCPR2L_POSN                                 0x0
#define _CCPR2L_CCPR2L_POSITION                             0x0
#define _CCPR2L_CCPR2L_SIZE                                 0x8
#define _CCPR2L_CCPR2L_LENGTH                               0x8
#define _CCPR2L_CCPR2L_MASK                                 0xFF

// Register: CCPR2H
unsigned char           CCPR2H              ; //SWAP 0x299;
#ifndef _LIB_BUILD
asm("CCPR2H equ 0299h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCPR2H                 :8;
    };
} CCPR2Hbits_t;
CCPR2Hbits_t CCPR2Hbits ; //SWAP 0x299;
// bitfield macros
#define _CCPR2H_CCPR2H_POSN                                 0x0
#define _CCPR2H_CCPR2H_POSITION                             0x0
#define _CCPR2H_CCPR2H_SIZE                                 0x8
#define _CCPR2H_CCPR2H_LENGTH                               0x8
#define _CCPR2H_CCPR2H_MASK                                 0xFF

// Register: CCP2CON
unsigned char           CCP2CON             ; //SWAP 0x29A;
#ifndef _LIB_BUILD
asm("CCP2CON equ 029Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CCP2M0                 :1;
        unsigned CCP2M1                 :1;
        unsigned CCP2M2                 :1;
        unsigned CCP2M3                 :1;
        unsigned DC2B0                  :1;
        unsigned DC2B1                  :1;
        unsigned P2M0                   :1;
        unsigned P2M1                   :1;
    };
    struct {
        unsigned CCP2M                  :4;
        unsigned DC2B                   :2;
        unsigned P2M                    :2;
    };
} CCP2CONbits_t;
CCP2CONbits_t CCP2CONbits ; //SWAP 0x29A;
// bitfield macros
#define _CCP2CON_CCP2M0_POSN                                0x0
#define _CCP2CON_CCP2M0_POSITION                            0x0
#define _CCP2CON_CCP2M0_SIZE                                0x1
#define _CCP2CON_CCP2M0_LENGTH                              0x1
#define _CCP2CON_CCP2M0_MASK                                0x1
#define _CCP2CON_CCP2M1_POSN                                0x1
#define _CCP2CON_CCP2M1_POSITION                            0x1
#define _CCP2CON_CCP2M1_SIZE                                0x1
#define _CCP2CON_CCP2M1_LENGTH                              0x1
#define _CCP2CON_CCP2M1_MASK                                0x2
#define _CCP2CON_CCP2M2_POSN                                0x2
#define _CCP2CON_CCP2M2_POSITION                            0x2
#define _CCP2CON_CCP2M2_SIZE                                0x1
#define _CCP2CON_CCP2M2_LENGTH                              0x1
#define _CCP2CON_CCP2M2_MASK                                0x4
#define _CCP2CON_CCP2M3_POSN                                0x3
#define _CCP2CON_CCP2M3_POSITION                            0x3
#define _CCP2CON_CCP2M3_SIZE                                0x1
#define _CCP2CON_CCP2M3_LENGTH                              0x1
#define _CCP2CON_CCP2M3_MASK                                0x8
#define _CCP2CON_DC2B0_POSN                                 0x4
#define _CCP2CON_DC2B0_POSITION                             0x4
#define _CCP2CON_DC2B0_SIZE                                 0x1
#define _CCP2CON_DC2B0_LENGTH                               0x1
#define _CCP2CON_DC2B0_MASK                                 0x10
#define _CCP2CON_DC2B1_POSN                                 0x5
#define _CCP2CON_DC2B1_POSITION                             0x5
#define _CCP2CON_DC2B1_SIZE                                 0x1
#define _CCP2CON_DC2B1_LENGTH                               0x1
#define _CCP2CON_DC2B1_MASK                                 0x20
#define _CCP2CON_P2M0_POSN                                  0x6
#define _CCP2CON_P2M0_POSITION                              0x6
#define _CCP2CON_P2M0_SIZE                                  0x1
#define _CCP2CON_P2M0_LENGTH                                0x1
#define _CCP2CON_P2M0_MASK                                  0x40
#define _CCP2CON_P2M1_POSN                                  0x7
#define _CCP2CON_P2M1_POSITION                              0x7
#define _CCP2CON_P2M1_SIZE                                  0x1
#define _CCP2CON_P2M1_LENGTH                                0x1
#define _CCP2CON_P2M1_MASK                                  0x80
#define _CCP2CON_CCP2M_POSN                                 0x0
#define _CCP2CON_CCP2M_POSITION                             0x0
#define _CCP2CON_CCP2M_SIZE                                 0x4
#define _CCP2CON_CCP2M_LENGTH                               0x4
#define _CCP2CON_CCP2M_MASK                                 0xF
#define _CCP2CON_DC2B_POSN                                  0x4
#define _CCP2CON_DC2B_POSITION                              0x4
#define _CCP2CON_DC2B_SIZE                                  0x2
#define _CCP2CON_DC2B_LENGTH                                0x2
#define _CCP2CON_DC2B_MASK                                  0x30
#define _CCP2CON_P2M_POSN                                   0x6
#define _CCP2CON_P2M_POSITION                               0x6
#define _CCP2CON_P2M_SIZE                                   0x2
#define _CCP2CON_P2M_LENGTH                                 0x2
#define _CCP2CON_P2M_MASK                                   0xC0

// Register: SLRCONA
unsigned char           SLRCONA             ; //SWAP 0x30C;
#ifndef _LIB_BUILD
asm("SLRCONA equ 030Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRCONA0               :1;
        unsigned SLRCONA1               :1;
        unsigned SLRCONA2               :1;
        unsigned SLRCONA3               :1;
        unsigned SLRCONA4               :1;
        unsigned SLRCONA5               :1;
        unsigned SLRCONA6               :1;
        unsigned SLRCONA7               :1;
    };
    struct {
        unsigned SLRCONA                :8;
    };
} SLRCONAbits_t;
SLRCONAbits_t SLRCONAbits ; //SWAP 0x30C;
// bitfield macros
#define _SLRCONA_SLRCONA0_POSN                              0x0
#define _SLRCONA_SLRCONA0_POSITION                          0x0
#define _SLRCONA_SLRCONA0_SIZE                              0x1
#define _SLRCONA_SLRCONA0_LENGTH                            0x1
#define _SLRCONA_SLRCONA0_MASK                              0x1
#define _SLRCONA_SLRCONA1_POSN                              0x1
#define _SLRCONA_SLRCONA1_POSITION                          0x1
#define _SLRCONA_SLRCONA1_SIZE                              0x1
#define _SLRCONA_SLRCONA1_LENGTH                            0x1
#define _SLRCONA_SLRCONA1_MASK                              0x2
#define _SLRCONA_SLRCONA2_POSN                              0x2
#define _SLRCONA_SLRCONA2_POSITION                          0x2
#define _SLRCONA_SLRCONA2_SIZE                              0x1
#define _SLRCONA_SLRCONA2_LENGTH                            0x1
#define _SLRCONA_SLRCONA2_MASK                              0x4
#define _SLRCONA_SLRCONA3_POSN                              0x3
#define _SLRCONA_SLRCONA3_POSITION                          0x3
#define _SLRCONA_SLRCONA3_SIZE                              0x1
#define _SLRCONA_SLRCONA3_LENGTH                            0x1
#define _SLRCONA_SLRCONA3_MASK                              0x8
#define _SLRCONA_SLRCONA4_POSN                              0x4
#define _SLRCONA_SLRCONA4_POSITION                          0x4
#define _SLRCONA_SLRCONA4_SIZE                              0x1
#define _SLRCONA_SLRCONA4_LENGTH                            0x1
#define _SLRCONA_SLRCONA4_MASK                              0x10
#define _SLRCONA_SLRCONA5_POSN                              0x5
#define _SLRCONA_SLRCONA5_POSITION                          0x5
#define _SLRCONA_SLRCONA5_SIZE                              0x1
#define _SLRCONA_SLRCONA5_LENGTH                            0x1
#define _SLRCONA_SLRCONA5_MASK                              0x20
#define _SLRCONA_SLRCONA6_POSN                              0x6
#define _SLRCONA_SLRCONA6_POSITION                          0x6
#define _SLRCONA_SLRCONA6_SIZE                              0x1
#define _SLRCONA_SLRCONA6_LENGTH                            0x1
#define _SLRCONA_SLRCONA6_MASK                              0x40
#define _SLRCONA_SLRCONA7_POSN                              0x7
#define _SLRCONA_SLRCONA7_POSITION                          0x7
#define _SLRCONA_SLRCONA7_SIZE                              0x1
#define _SLRCONA_SLRCONA7_LENGTH                            0x1
#define _SLRCONA_SLRCONA7_MASK                              0x80
#define _SLRCONA_SLRCONA_POSN                               0x0
#define _SLRCONA_SLRCONA_POSITION                           0x0
#define _SLRCONA_SLRCONA_SIZE                               0x8
#define _SLRCONA_SLRCONA_LENGTH                             0x8
#define _SLRCONA_SLRCONA_MASK                               0xFF

// Register: SLRCONB
unsigned char           SLRCONB             ; //SWAP 0x30D;
#ifndef _LIB_BUILD
asm("SLRCONB equ 030Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRCONB0               :1;
        unsigned SLRCONB1               :1;
        unsigned SLRCONB2               :1;
        unsigned SLRCONB3               :1;
        unsigned SLRCONB4               :1;
        unsigned SLRCONB5               :1;
        unsigned SLRCONB6               :1;
        unsigned SLRCONB7               :1;
    };
    struct {
        unsigned SLRCONB                :8;
    };
} SLRCONBbits_t;
SLRCONBbits_t SLRCONBbits ; //SWAP 0x30D;
// bitfield macros
#define _SLRCONB_SLRCONB0_POSN                              0x0
#define _SLRCONB_SLRCONB0_POSITION                          0x0
#define _SLRCONB_SLRCONB0_SIZE                              0x1
#define _SLRCONB_SLRCONB0_LENGTH                            0x1
#define _SLRCONB_SLRCONB0_MASK                              0x1
#define _SLRCONB_SLRCONB1_POSN                              0x1
#define _SLRCONB_SLRCONB1_POSITION                          0x1
#define _SLRCONB_SLRCONB1_SIZE                              0x1
#define _SLRCONB_SLRCONB1_LENGTH                            0x1
#define _SLRCONB_SLRCONB1_MASK                              0x2
#define _SLRCONB_SLRCONB2_POSN                              0x2
#define _SLRCONB_SLRCONB2_POSITION                          0x2
#define _SLRCONB_SLRCONB2_SIZE                              0x1
#define _SLRCONB_SLRCONB2_LENGTH                            0x1
#define _SLRCONB_SLRCONB2_MASK                              0x4
#define _SLRCONB_SLRCONB3_POSN                              0x3
#define _SLRCONB_SLRCONB3_POSITION                          0x3
#define _SLRCONB_SLRCONB3_SIZE                              0x1
#define _SLRCONB_SLRCONB3_LENGTH                            0x1
#define _SLRCONB_SLRCONB3_MASK                              0x8
#define _SLRCONB_SLRCONB4_POSN                              0x4
#define _SLRCONB_SLRCONB4_POSITION                          0x4
#define _SLRCONB_SLRCONB4_SIZE                              0x1
#define _SLRCONB_SLRCONB4_LENGTH                            0x1
#define _SLRCONB_SLRCONB4_MASK                              0x10
#define _SLRCONB_SLRCONB5_POSN                              0x5
#define _SLRCONB_SLRCONB5_POSITION                          0x5
#define _SLRCONB_SLRCONB5_SIZE                              0x1
#define _SLRCONB_SLRCONB5_LENGTH                            0x1
#define _SLRCONB_SLRCONB5_MASK                              0x20
#define _SLRCONB_SLRCONB6_POSN                              0x6
#define _SLRCONB_SLRCONB6_POSITION                          0x6
#define _SLRCONB_SLRCONB6_SIZE                              0x1
#define _SLRCONB_SLRCONB6_LENGTH                            0x1
#define _SLRCONB_SLRCONB6_MASK                              0x40
#define _SLRCONB_SLRCONB7_POSN                              0x7
#define _SLRCONB_SLRCONB7_POSITION                          0x7
#define _SLRCONB_SLRCONB7_SIZE                              0x1
#define _SLRCONB_SLRCONB7_LENGTH                            0x1
#define _SLRCONB_SLRCONB7_MASK                              0x80
#define _SLRCONB_SLRCONB_POSN                               0x0
#define _SLRCONB_SLRCONB_POSITION                           0x0
#define _SLRCONB_SLRCONB_SIZE                               0x8
#define _SLRCONB_SLRCONB_LENGTH                             0x8
#define _SLRCONB_SLRCONB_MASK                               0xFF

// Register: SLRCONC
unsigned char           SLRCONC             ; //SWAP 0x30E;
#ifndef _LIB_BUILD
asm("SLRCONC equ 030Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned SLRCONC0               :1;
        unsigned SLRCONC1               :1;
        unsigned SLRCONC2               :1;
        unsigned SLRCONC3               :1;
        unsigned SLRCONC4               :1;
        unsigned SLRCONC5               :1;
        unsigned SLRCONC6               :1;
        unsigned SLRCONC7               :1;
    };
    struct {
        unsigned SLRCONC                :8;
    };
} SLRCONCbits_t;
SLRCONCbits_t SLRCONCbits ; //SWAP 0x30E;
// bitfield macros
#define _SLRCONC_SLRCONC0_POSN                              0x0
#define _SLRCONC_SLRCONC0_POSITION                          0x0
#define _SLRCONC_SLRCONC0_SIZE                              0x1
#define _SLRCONC_SLRCONC0_LENGTH                            0x1
#define _SLRCONC_SLRCONC0_MASK                              0x1
#define _SLRCONC_SLRCONC1_POSN                              0x1
#define _SLRCONC_SLRCONC1_POSITION                          0x1
#define _SLRCONC_SLRCONC1_SIZE                              0x1
#define _SLRCONC_SLRCONC1_LENGTH                            0x1
#define _SLRCONC_SLRCONC1_MASK                              0x2
#define _SLRCONC_SLRCONC2_POSN                              0x2
#define _SLRCONC_SLRCONC2_POSITION                          0x2
#define _SLRCONC_SLRCONC2_SIZE                              0x1
#define _SLRCONC_SLRCONC2_LENGTH                            0x1
#define _SLRCONC_SLRCONC2_MASK                              0x4
#define _SLRCONC_SLRCONC3_POSN                              0x3
#define _SLRCONC_SLRCONC3_POSITION                          0x3
#define _SLRCONC_SLRCONC3_SIZE                              0x1
#define _SLRCONC_SLRCONC3_LENGTH                            0x1
#define _SLRCONC_SLRCONC3_MASK                              0x8
#define _SLRCONC_SLRCONC4_POSN                              0x4
#define _SLRCONC_SLRCONC4_POSITION                          0x4
#define _SLRCONC_SLRCONC4_SIZE                              0x1
#define _SLRCONC_SLRCONC4_LENGTH                            0x1
#define _SLRCONC_SLRCONC4_MASK                              0x10
#define _SLRCONC_SLRCONC5_POSN                              0x5
#define _SLRCONC_SLRCONC5_POSITION                          0x5
#define _SLRCONC_SLRCONC5_SIZE                              0x1
#define _SLRCONC_SLRCONC5_LENGTH                            0x1
#define _SLRCONC_SLRCONC5_MASK                              0x20
#define _SLRCONC_SLRCONC6_POSN                              0x6
#define _SLRCONC_SLRCONC6_POSITION                          0x6
#define _SLRCONC_SLRCONC6_SIZE                              0x1
#define _SLRCONC_SLRCONC6_LENGTH                            0x1
#define _SLRCONC_SLRCONC6_MASK                              0x40
#define _SLRCONC_SLRCONC7_POSN                              0x7
#define _SLRCONC_SLRCONC7_POSITION                          0x7
#define _SLRCONC_SLRCONC7_SIZE                              0x1
#define _SLRCONC_SLRCONC7_LENGTH                            0x1
#define _SLRCONC_SLRCONC7_MASK                              0x80
#define _SLRCONC_SLRCONC_POSN                               0x0
#define _SLRCONC_SLRCONC_POSITION                           0x0
#define _SLRCONC_SLRCONC_SIZE                               0x8
#define _SLRCONC_SLRCONC_LENGTH                             0x8
#define _SLRCONC_SLRCONC_MASK                               0xFF

// Register: INLVLA
unsigned char           INLVLA              ; //SWAP 0x38C;
#ifndef _LIB_BUILD
asm("INLVLA equ 038Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLA0                :1;
        unsigned INLVLA1                :1;
        unsigned INLVLA2                :1;
        unsigned INLVLA3                :1;
        unsigned INLVLA4                :1;
        unsigned INLVLA5                :1;
        unsigned INLVLA6                :1;
        unsigned INLVLA7                :1;
    };
    struct {
        unsigned INLVLA                 :8;
    };
} INLVLAbits_t;
INLVLAbits_t INLVLAbits ; //SWAP 0x38C;
// bitfield macros
#define _INLVLA_INLVLA0_POSN                                0x0
#define _INLVLA_INLVLA0_POSITION                            0x0
#define _INLVLA_INLVLA0_SIZE                                0x1
#define _INLVLA_INLVLA0_LENGTH                              0x1
#define _INLVLA_INLVLA0_MASK                                0x1
#define _INLVLA_INLVLA1_POSN                                0x1
#define _INLVLA_INLVLA1_POSITION                            0x1
#define _INLVLA_INLVLA1_SIZE                                0x1
#define _INLVLA_INLVLA1_LENGTH                              0x1
#define _INLVLA_INLVLA1_MASK                                0x2
#define _INLVLA_INLVLA2_POSN                                0x2
#define _INLVLA_INLVLA2_POSITION                            0x2
#define _INLVLA_INLVLA2_SIZE                                0x1
#define _INLVLA_INLVLA2_LENGTH                              0x1
#define _INLVLA_INLVLA2_MASK                                0x4
#define _INLVLA_INLVLA3_POSN                                0x3
#define _INLVLA_INLVLA3_POSITION                            0x3
#define _INLVLA_INLVLA3_SIZE                                0x1
#define _INLVLA_INLVLA3_LENGTH                              0x1
#define _INLVLA_INLVLA3_MASK                                0x8
#define _INLVLA_INLVLA4_POSN                                0x4
#define _INLVLA_INLVLA4_POSITION                            0x4
#define _INLVLA_INLVLA4_SIZE                                0x1
#define _INLVLA_INLVLA4_LENGTH                              0x1
#define _INLVLA_INLVLA4_MASK                                0x10
#define _INLVLA_INLVLA5_POSN                                0x5
#define _INLVLA_INLVLA5_POSITION                            0x5
#define _INLVLA_INLVLA5_SIZE                                0x1
#define _INLVLA_INLVLA5_LENGTH                              0x1
#define _INLVLA_INLVLA5_MASK                                0x20
#define _INLVLA_INLVLA6_POSN                                0x6
#define _INLVLA_INLVLA6_POSITION                            0x6
#define _INLVLA_INLVLA6_SIZE                                0x1
#define _INLVLA_INLVLA6_LENGTH                              0x1
#define _INLVLA_INLVLA6_MASK                                0x40
#define _INLVLA_INLVLA7_POSN                                0x7
#define _INLVLA_INLVLA7_POSITION                            0x7
#define _INLVLA_INLVLA7_SIZE                                0x1
#define _INLVLA_INLVLA7_LENGTH                              0x1
#define _INLVLA_INLVLA7_MASK                                0x80
#define _INLVLA_INLVLA_POSN                                 0x0
#define _INLVLA_INLVLA_POSITION                             0x0
#define _INLVLA_INLVLA_SIZE                                 0x8
#define _INLVLA_INLVLA_LENGTH                               0x8
#define _INLVLA_INLVLA_MASK                                 0xFF

// Register: INLVLB
unsigned char           INLVLB              ; //SWAP 0x38D;
#ifndef _LIB_BUILD
asm("INLVLB equ 038Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLB0                :1;
        unsigned INLVLB1                :1;
        unsigned INLVLB2                :1;
        unsigned INLVLB3                :1;
        unsigned INLVLB4                :1;
        unsigned INLVLB5                :1;
        unsigned INLVLB6                :1;
        unsigned INLVLB7                :1;
    };
    struct {
        unsigned INLVLB                 :8;
    };
} INLVLBbits_t;
INLVLBbits_t INLVLBbits ; //SWAP 0x38D;
// bitfield macros
#define _INLVLB_INLVLB0_POSN                                0x0
#define _INLVLB_INLVLB0_POSITION                            0x0
#define _INLVLB_INLVLB0_SIZE                                0x1
#define _INLVLB_INLVLB0_LENGTH                              0x1
#define _INLVLB_INLVLB0_MASK                                0x1
#define _INLVLB_INLVLB1_POSN                                0x1
#define _INLVLB_INLVLB1_POSITION                            0x1
#define _INLVLB_INLVLB1_SIZE                                0x1
#define _INLVLB_INLVLB1_LENGTH                              0x1
#define _INLVLB_INLVLB1_MASK                                0x2
#define _INLVLB_INLVLB2_POSN                                0x2
#define _INLVLB_INLVLB2_POSITION                            0x2
#define _INLVLB_INLVLB2_SIZE                                0x1
#define _INLVLB_INLVLB2_LENGTH                              0x1
#define _INLVLB_INLVLB2_MASK                                0x4
#define _INLVLB_INLVLB3_POSN                                0x3
#define _INLVLB_INLVLB3_POSITION                            0x3
#define _INLVLB_INLVLB3_SIZE                                0x1
#define _INLVLB_INLVLB3_LENGTH                              0x1
#define _INLVLB_INLVLB3_MASK                                0x8
#define _INLVLB_INLVLB4_POSN                                0x4
#define _INLVLB_INLVLB4_POSITION                            0x4
#define _INLVLB_INLVLB4_SIZE                                0x1
#define _INLVLB_INLVLB4_LENGTH                              0x1
#define _INLVLB_INLVLB4_MASK                                0x10
#define _INLVLB_INLVLB5_POSN                                0x5
#define _INLVLB_INLVLB5_POSITION                            0x5
#define _INLVLB_INLVLB5_SIZE                                0x1
#define _INLVLB_INLVLB5_LENGTH                              0x1
#define _INLVLB_INLVLB5_MASK                                0x20
#define _INLVLB_INLVLB6_POSN                                0x6
#define _INLVLB_INLVLB6_POSITION                            0x6
#define _INLVLB_INLVLB6_SIZE                                0x1
#define _INLVLB_INLVLB6_LENGTH                              0x1
#define _INLVLB_INLVLB6_MASK                                0x40
#define _INLVLB_INLVLB7_POSN                                0x7
#define _INLVLB_INLVLB7_POSITION                            0x7
#define _INLVLB_INLVLB7_SIZE                                0x1
#define _INLVLB_INLVLB7_LENGTH                              0x1
#define _INLVLB_INLVLB7_MASK                                0x80
#define _INLVLB_INLVLB_POSN                                 0x0
#define _INLVLB_INLVLB_POSITION                             0x0
#define _INLVLB_INLVLB_SIZE                                 0x8
#define _INLVLB_INLVLB_LENGTH                               0x8
#define _INLVLB_INLVLB_MASK                                 0xFF

// Register: INLVLC
unsigned char           INLVLC              ; //SWAP 0x38E;
#ifndef _LIB_BUILD
asm("INLVLC equ 038Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned INLVLC0                :1;
        unsigned INLVLC1                :1;
        unsigned INLVLC2                :1;
        unsigned INLVLC3                :1;
        unsigned INLVLC4                :1;
        unsigned INLVLC5                :1;
        unsigned INLVLC6                :1;
        unsigned INLVLC7                :1;
    };
    struct {
        unsigned INLVLC                 :8;
    };
} INLVLCbits_t;
INLVLCbits_t INLVLCbits ; //SWAP 0x38E;
// bitfield macros
#define _INLVLC_INLVLC0_POSN                                0x0
#define _INLVLC_INLVLC0_POSITION                            0x0
#define _INLVLC_INLVLC0_SIZE                                0x1
#define _INLVLC_INLVLC0_LENGTH                              0x1
#define _INLVLC_INLVLC0_MASK                                0x1
#define _INLVLC_INLVLC1_POSN                                0x1
#define _INLVLC_INLVLC1_POSITION                            0x1
#define _INLVLC_INLVLC1_SIZE                                0x1
#define _INLVLC_INLVLC1_LENGTH                              0x1
#define _INLVLC_INLVLC1_MASK                                0x2
#define _INLVLC_INLVLC2_POSN                                0x2
#define _INLVLC_INLVLC2_POSITION                            0x2
#define _INLVLC_INLVLC2_SIZE                                0x1
#define _INLVLC_INLVLC2_LENGTH                              0x1
#define _INLVLC_INLVLC2_MASK                                0x4
#define _INLVLC_INLVLC3_POSN                                0x3
#define _INLVLC_INLVLC3_POSITION                            0x3
#define _INLVLC_INLVLC3_SIZE                                0x1
#define _INLVLC_INLVLC3_LENGTH                              0x1
#define _INLVLC_INLVLC3_MASK                                0x8
#define _INLVLC_INLVLC4_POSN                                0x4
#define _INLVLC_INLVLC4_POSITION                            0x4
#define _INLVLC_INLVLC4_SIZE                                0x1
#define _INLVLC_INLVLC4_LENGTH                              0x1
#define _INLVLC_INLVLC4_MASK                                0x10
#define _INLVLC_INLVLC5_POSN                                0x5
#define _INLVLC_INLVLC5_POSITION                            0x5
#define _INLVLC_INLVLC5_SIZE                                0x1
#define _INLVLC_INLVLC5_LENGTH                              0x1
#define _INLVLC_INLVLC5_MASK                                0x20
#define _INLVLC_INLVLC6_POSN                                0x6
#define _INLVLC_INLVLC6_POSITION                            0x6
#define _INLVLC_INLVLC6_SIZE                                0x1
#define _INLVLC_INLVLC6_LENGTH                              0x1
#define _INLVLC_INLVLC6_MASK                                0x40
#define _INLVLC_INLVLC7_POSN                                0x7
#define _INLVLC_INLVLC7_POSITION                            0x7
#define _INLVLC_INLVLC7_SIZE                                0x1
#define _INLVLC_INLVLC7_LENGTH                              0x1
#define _INLVLC_INLVLC7_MASK                                0x80
#define _INLVLC_INLVLC_POSN                                 0x0
#define _INLVLC_INLVLC_POSITION                             0x0
#define _INLVLC_INLVLC_SIZE                                 0x8
#define _INLVLC_INLVLC_LENGTH                               0x8
#define _INLVLC_INLVLC_MASK                                 0xFF

// Register: INLVLE
unsigned char           INLVLE              ; //SWAP 0x390;
#ifndef _LIB_BUILD
asm("INLVLE equ 0390h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned INLVLE3                :1;
    };
} INLVLEbits_t;
INLVLEbits_t INLVLEbits ; //SWAP 0x390;
// bitfield macros
#define _INLVLE_INLVLE3_POSN                                0x3
#define _INLVLE_INLVLE3_POSITION                            0x3
#define _INLVLE_INLVLE3_SIZE                                0x1
#define _INLVLE_INLVLE3_LENGTH                              0x1
#define _INLVLE_INLVLE3_MASK                                0x8

// Register: IOCAP
unsigned char           IOCAP               ; //SWAP 0x391;
#ifndef _LIB_BUILD
asm("IOCAP equ 0391h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAP0                 :1;
        unsigned IOCAP1                 :1;
        unsigned IOCAP2                 :1;
        unsigned IOCAP3                 :1;
        unsigned IOCAP4                 :1;
        unsigned IOCAP5                 :1;
        unsigned IOCAP6                 :1;
        unsigned IOCAP7                 :1;
    };
    struct {
        unsigned IOCAP                  :8;
    };
} IOCAPbits_t;
IOCAPbits_t IOCAPbits ; //SWAP 0x391;
// bitfield macros
#define _IOCAP_IOCAP0_POSN                                  0x0
#define _IOCAP_IOCAP0_POSITION                              0x0
#define _IOCAP_IOCAP0_SIZE                                  0x1
#define _IOCAP_IOCAP0_LENGTH                                0x1
#define _IOCAP_IOCAP0_MASK                                  0x1
#define _IOCAP_IOCAP1_POSN                                  0x1
#define _IOCAP_IOCAP1_POSITION                              0x1
#define _IOCAP_IOCAP1_SIZE                                  0x1
#define _IOCAP_IOCAP1_LENGTH                                0x1
#define _IOCAP_IOCAP1_MASK                                  0x2
#define _IOCAP_IOCAP2_POSN                                  0x2
#define _IOCAP_IOCAP2_POSITION                              0x2
#define _IOCAP_IOCAP2_SIZE                                  0x1
#define _IOCAP_IOCAP2_LENGTH                                0x1
#define _IOCAP_IOCAP2_MASK                                  0x4
#define _IOCAP_IOCAP3_POSN                                  0x3
#define _IOCAP_IOCAP3_POSITION                              0x3
#define _IOCAP_IOCAP3_SIZE                                  0x1
#define _IOCAP_IOCAP3_LENGTH                                0x1
#define _IOCAP_IOCAP3_MASK                                  0x8
#define _IOCAP_IOCAP4_POSN                                  0x4
#define _IOCAP_IOCAP4_POSITION                              0x4
#define _IOCAP_IOCAP4_SIZE                                  0x1
#define _IOCAP_IOCAP4_LENGTH                                0x1
#define _IOCAP_IOCAP4_MASK                                  0x10
#define _IOCAP_IOCAP5_POSN                                  0x5
#define _IOCAP_IOCAP5_POSITION                              0x5
#define _IOCAP_IOCAP5_SIZE                                  0x1
#define _IOCAP_IOCAP5_LENGTH                                0x1
#define _IOCAP_IOCAP5_MASK                                  0x20
#define _IOCAP_IOCAP6_POSN                                  0x6
#define _IOCAP_IOCAP6_POSITION                              0x6
#define _IOCAP_IOCAP6_SIZE                                  0x1
#define _IOCAP_IOCAP6_LENGTH                                0x1
#define _IOCAP_IOCAP6_MASK                                  0x40
#define _IOCAP_IOCAP7_POSN                                  0x7
#define _IOCAP_IOCAP7_POSITION                              0x7
#define _IOCAP_IOCAP7_SIZE                                  0x1
#define _IOCAP_IOCAP7_LENGTH                                0x1
#define _IOCAP_IOCAP7_MASK                                  0x80
#define _IOCAP_IOCAP_POSN                                   0x0
#define _IOCAP_IOCAP_POSITION                               0x0
#define _IOCAP_IOCAP_SIZE                                   0x8
#define _IOCAP_IOCAP_LENGTH                                 0x8
#define _IOCAP_IOCAP_MASK                                   0xFF

// Register: IOCAN
unsigned char           IOCAN               ; //SWAP 0x392;
#ifndef _LIB_BUILD
asm("IOCAN equ 0392h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAN0                 :1;
        unsigned IOCAN1                 :1;
        unsigned IOCAN2                 :1;
        unsigned IOCAN3                 :1;
        unsigned IOCAN4                 :1;
        unsigned IOCAN5                 :1;
        unsigned IOCAN6                 :1;
        unsigned IOCAN7                 :1;
    };
    struct {
        unsigned IOCAN                  :8;
    };
} IOCANbits_t;
IOCANbits_t IOCANbits ; //SWAP 0x392;
// bitfield macros
#define _IOCAN_IOCAN0_POSN                                  0x0
#define _IOCAN_IOCAN0_POSITION                              0x0
#define _IOCAN_IOCAN0_SIZE                                  0x1
#define _IOCAN_IOCAN0_LENGTH                                0x1
#define _IOCAN_IOCAN0_MASK                                  0x1
#define _IOCAN_IOCAN1_POSN                                  0x1
#define _IOCAN_IOCAN1_POSITION                              0x1
#define _IOCAN_IOCAN1_SIZE                                  0x1
#define _IOCAN_IOCAN1_LENGTH                                0x1
#define _IOCAN_IOCAN1_MASK                                  0x2
#define _IOCAN_IOCAN2_POSN                                  0x2
#define _IOCAN_IOCAN2_POSITION                              0x2
#define _IOCAN_IOCAN2_SIZE                                  0x1
#define _IOCAN_IOCAN2_LENGTH                                0x1
#define _IOCAN_IOCAN2_MASK                                  0x4
#define _IOCAN_IOCAN3_POSN                                  0x3
#define _IOCAN_IOCAN3_POSITION                              0x3
#define _IOCAN_IOCAN3_SIZE                                  0x1
#define _IOCAN_IOCAN3_LENGTH                                0x1
#define _IOCAN_IOCAN3_MASK                                  0x8
#define _IOCAN_IOCAN4_POSN                                  0x4
#define _IOCAN_IOCAN4_POSITION                              0x4
#define _IOCAN_IOCAN4_SIZE                                  0x1
#define _IOCAN_IOCAN4_LENGTH                                0x1
#define _IOCAN_IOCAN4_MASK                                  0x10
#define _IOCAN_IOCAN5_POSN                                  0x5
#define _IOCAN_IOCAN5_POSITION                              0x5
#define _IOCAN_IOCAN5_SIZE                                  0x1
#define _IOCAN_IOCAN5_LENGTH                                0x1
#define _IOCAN_IOCAN5_MASK                                  0x20
#define _IOCAN_IOCAN6_POSN                                  0x6
#define _IOCAN_IOCAN6_POSITION                              0x6
#define _IOCAN_IOCAN6_SIZE                                  0x1
#define _IOCAN_IOCAN6_LENGTH                                0x1
#define _IOCAN_IOCAN6_MASK                                  0x40
#define _IOCAN_IOCAN7_POSN                                  0x7
#define _IOCAN_IOCAN7_POSITION                              0x7
#define _IOCAN_IOCAN7_SIZE                                  0x1
#define _IOCAN_IOCAN7_LENGTH                                0x1
#define _IOCAN_IOCAN7_MASK                                  0x80
#define _IOCAN_IOCAN_POSN                                   0x0
#define _IOCAN_IOCAN_POSITION                               0x0
#define _IOCAN_IOCAN_SIZE                                   0x8
#define _IOCAN_IOCAN_LENGTH                                 0x8
#define _IOCAN_IOCAN_MASK                                   0xFF

// Register: IOCAF
unsigned char           IOCAF               ; //SWAP 0x393;
#ifndef _LIB_BUILD
asm("IOCAF equ 0393h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCAF0                 :1;
        unsigned IOCAF1                 :1;
        unsigned IOCAF2                 :1;
        unsigned IOCAF3                 :1;
        unsigned IOCAF4                 :1;
        unsigned IOCAF5                 :1;
        unsigned IOCAF6                 :1;
        unsigned IOCAF7                 :1;
    };
    struct {
        unsigned IOCAF                  :8;
    };
} IOCAFbits_t;
IOCAFbits_t IOCAFbits ; //SWAP 0x393;
// bitfield macros
#define _IOCAF_IOCAF0_POSN                                  0x0
#define _IOCAF_IOCAF0_POSITION                              0x0
#define _IOCAF_IOCAF0_SIZE                                  0x1
#define _IOCAF_IOCAF0_LENGTH                                0x1
#define _IOCAF_IOCAF0_MASK                                  0x1
#define _IOCAF_IOCAF1_POSN                                  0x1
#define _IOCAF_IOCAF1_POSITION                              0x1
#define _IOCAF_IOCAF1_SIZE                                  0x1
#define _IOCAF_IOCAF1_LENGTH                                0x1
#define _IOCAF_IOCAF1_MASK                                  0x2
#define _IOCAF_IOCAF2_POSN                                  0x2
#define _IOCAF_IOCAF2_POSITION                              0x2
#define _IOCAF_IOCAF2_SIZE                                  0x1
#define _IOCAF_IOCAF2_LENGTH                                0x1
#define _IOCAF_IOCAF2_MASK                                  0x4
#define _IOCAF_IOCAF3_POSN                                  0x3
#define _IOCAF_IOCAF3_POSITION                              0x3
#define _IOCAF_IOCAF3_SIZE                                  0x1
#define _IOCAF_IOCAF3_LENGTH                                0x1
#define _IOCAF_IOCAF3_MASK                                  0x8
#define _IOCAF_IOCAF4_POSN                                  0x4
#define _IOCAF_IOCAF4_POSITION                              0x4
#define _IOCAF_IOCAF4_SIZE                                  0x1
#define _IOCAF_IOCAF4_LENGTH                                0x1
#define _IOCAF_IOCAF4_MASK                                  0x10
#define _IOCAF_IOCAF5_POSN                                  0x5
#define _IOCAF_IOCAF5_POSITION                              0x5
#define _IOCAF_IOCAF5_SIZE                                  0x1
#define _IOCAF_IOCAF5_LENGTH                                0x1
#define _IOCAF_IOCAF5_MASK                                  0x20
#define _IOCAF_IOCAF6_POSN                                  0x6
#define _IOCAF_IOCAF6_POSITION                              0x6
#define _IOCAF_IOCAF6_SIZE                                  0x1
#define _IOCAF_IOCAF6_LENGTH                                0x1
#define _IOCAF_IOCAF6_MASK                                  0x40
#define _IOCAF_IOCAF7_POSN                                  0x7
#define _IOCAF_IOCAF7_POSITION                              0x7
#define _IOCAF_IOCAF7_SIZE                                  0x1
#define _IOCAF_IOCAF7_LENGTH                                0x1
#define _IOCAF_IOCAF7_MASK                                  0x80
#define _IOCAF_IOCAF_POSN                                   0x0
#define _IOCAF_IOCAF_POSITION                               0x0
#define _IOCAF_IOCAF_SIZE                                   0x8
#define _IOCAF_IOCAF_LENGTH                                 0x8
#define _IOCAF_IOCAF_MASK                                   0xFF

// Register: IOCBP
unsigned char           IOCBP               ; //SWAP 0x394;
#ifndef _LIB_BUILD
asm("IOCBP equ 0394h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCBP0                 :1;
        unsigned IOCBP1                 :1;
        unsigned IOCBP2                 :1;
        unsigned IOCBP3                 :1;
        unsigned IOCBP4                 :1;
        unsigned IOCBP5                 :1;
        unsigned IOCBP6                 :1;
        unsigned IOCBP7                 :1;
    };
    struct {
        unsigned IOCBP                  :8;
    };
} IOCBPbits_t;
IOCBPbits_t IOCBPbits ; //SWAP 0x394;
// bitfield macros
#define _IOCBP_IOCBP0_POSN                                  0x0
#define _IOCBP_IOCBP0_POSITION                              0x0
#define _IOCBP_IOCBP0_SIZE                                  0x1
#define _IOCBP_IOCBP0_LENGTH                                0x1
#define _IOCBP_IOCBP0_MASK                                  0x1
#define _IOCBP_IOCBP1_POSN                                  0x1
#define _IOCBP_IOCBP1_POSITION                              0x1
#define _IOCBP_IOCBP1_SIZE                                  0x1
#define _IOCBP_IOCBP1_LENGTH                                0x1
#define _IOCBP_IOCBP1_MASK                                  0x2
#define _IOCBP_IOCBP2_POSN                                  0x2
#define _IOCBP_IOCBP2_POSITION                              0x2
#define _IOCBP_IOCBP2_SIZE                                  0x1
#define _IOCBP_IOCBP2_LENGTH                                0x1
#define _IOCBP_IOCBP2_MASK                                  0x4
#define _IOCBP_IOCBP3_POSN                                  0x3
#define _IOCBP_IOCBP3_POSITION                              0x3
#define _IOCBP_IOCBP3_SIZE                                  0x1
#define _IOCBP_IOCBP3_LENGTH                                0x1
#define _IOCBP_IOCBP3_MASK                                  0x8
#define _IOCBP_IOCBP4_POSN                                  0x4
#define _IOCBP_IOCBP4_POSITION                              0x4
#define _IOCBP_IOCBP4_SIZE                                  0x1
#define _IOCBP_IOCBP4_LENGTH                                0x1
#define _IOCBP_IOCBP4_MASK                                  0x10
#define _IOCBP_IOCBP5_POSN                                  0x5
#define _IOCBP_IOCBP5_POSITION                              0x5
#define _IOCBP_IOCBP5_SIZE                                  0x1
#define _IOCBP_IOCBP5_LENGTH                                0x1
#define _IOCBP_IOCBP5_MASK                                  0x20
#define _IOCBP_IOCBP6_POSN                                  0x6
#define _IOCBP_IOCBP6_POSITION                              0x6
#define _IOCBP_IOCBP6_SIZE                                  0x1
#define _IOCBP_IOCBP6_LENGTH                                0x1
#define _IOCBP_IOCBP6_MASK                                  0x40
#define _IOCBP_IOCBP7_POSN                                  0x7
#define _IOCBP_IOCBP7_POSITION                              0x7
#define _IOCBP_IOCBP7_SIZE                                  0x1
#define _IOCBP_IOCBP7_LENGTH                                0x1
#define _IOCBP_IOCBP7_MASK                                  0x80
#define _IOCBP_IOCBP_POSN                                   0x0
#define _IOCBP_IOCBP_POSITION                               0x0
#define _IOCBP_IOCBP_SIZE                                   0x8
#define _IOCBP_IOCBP_LENGTH                                 0x8
#define _IOCBP_IOCBP_MASK                                   0xFF

// Register: IOCBN
unsigned char           IOCBN               ; //SWAP 0x395;
#ifndef _LIB_BUILD
asm("IOCBN equ 0395h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCBN0                 :1;
        unsigned IOCBN1                 :1;
        unsigned IOCBN2                 :1;
        unsigned IOCBN3                 :1;
        unsigned IOCBN4                 :1;
        unsigned IOCBN5                 :1;
        unsigned IOCBN6                 :1;
        unsigned IOCBN7                 :1;
    };
    struct {
        unsigned IOCBN                  :8;
    };
} IOCBNbits_t;
IOCBNbits_t IOCBNbits ; //SWAP 0x395;
// bitfield macros
#define _IOCBN_IOCBN0_POSN                                  0x0
#define _IOCBN_IOCBN0_POSITION                              0x0
#define _IOCBN_IOCBN0_SIZE                                  0x1
#define _IOCBN_IOCBN0_LENGTH                                0x1
#define _IOCBN_IOCBN0_MASK                                  0x1
#define _IOCBN_IOCBN1_POSN                                  0x1
#define _IOCBN_IOCBN1_POSITION                              0x1
#define _IOCBN_IOCBN1_SIZE                                  0x1
#define _IOCBN_IOCBN1_LENGTH                                0x1
#define _IOCBN_IOCBN1_MASK                                  0x2
#define _IOCBN_IOCBN2_POSN                                  0x2
#define _IOCBN_IOCBN2_POSITION                              0x2
#define _IOCBN_IOCBN2_SIZE                                  0x1
#define _IOCBN_IOCBN2_LENGTH                                0x1
#define _IOCBN_IOCBN2_MASK                                  0x4
#define _IOCBN_IOCBN3_POSN                                  0x3
#define _IOCBN_IOCBN3_POSITION                              0x3
#define _IOCBN_IOCBN3_SIZE                                  0x1
#define _IOCBN_IOCBN3_LENGTH                                0x1
#define _IOCBN_IOCBN3_MASK                                  0x8
#define _IOCBN_IOCBN4_POSN                                  0x4
#define _IOCBN_IOCBN4_POSITION                              0x4
#define _IOCBN_IOCBN4_SIZE                                  0x1
#define _IOCBN_IOCBN4_LENGTH                                0x1
#define _IOCBN_IOCBN4_MASK                                  0x10
#define _IOCBN_IOCBN5_POSN                                  0x5
#define _IOCBN_IOCBN5_POSITION                              0x5
#define _IOCBN_IOCBN5_SIZE                                  0x1
#define _IOCBN_IOCBN5_LENGTH                                0x1
#define _IOCBN_IOCBN5_MASK                                  0x20
#define _IOCBN_IOCBN6_POSN                                  0x6
#define _IOCBN_IOCBN6_POSITION                              0x6
#define _IOCBN_IOCBN6_SIZE                                  0x1
#define _IOCBN_IOCBN6_LENGTH                                0x1
#define _IOCBN_IOCBN6_MASK                                  0x40
#define _IOCBN_IOCBN7_POSN                                  0x7
#define _IOCBN_IOCBN7_POSITION                              0x7
#define _IOCBN_IOCBN7_SIZE                                  0x1
#define _IOCBN_IOCBN7_LENGTH                                0x1
#define _IOCBN_IOCBN7_MASK                                  0x80
#define _IOCBN_IOCBN_POSN                                   0x0
#define _IOCBN_IOCBN_POSITION                               0x0
#define _IOCBN_IOCBN_SIZE                                   0x8
#define _IOCBN_IOCBN_LENGTH                                 0x8
#define _IOCBN_IOCBN_MASK                                   0xFF

// Register: IOCBF
unsigned char           IOCBF               ; //SWAP 0x396;
#ifndef _LIB_BUILD
asm("IOCBF equ 0396h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCBF0                 :1;
        unsigned IOCBF1                 :1;
        unsigned IOCBF2                 :1;
        unsigned IOCBF3                 :1;
        unsigned IOCBF4                 :1;
        unsigned IOCBF5                 :1;
        unsigned IOCBF6                 :1;
        unsigned IOCBF7                 :1;
    };
    struct {
        unsigned IOCBF                  :8;
    };
} IOCBFbits_t;
IOCBFbits_t IOCBFbits ; //SWAP 0x396;
// bitfield macros
#define _IOCBF_IOCBF0_POSN                                  0x0
#define _IOCBF_IOCBF0_POSITION                              0x0
#define _IOCBF_IOCBF0_SIZE                                  0x1
#define _IOCBF_IOCBF0_LENGTH                                0x1
#define _IOCBF_IOCBF0_MASK                                  0x1
#define _IOCBF_IOCBF1_POSN                                  0x1
#define _IOCBF_IOCBF1_POSITION                              0x1
#define _IOCBF_IOCBF1_SIZE                                  0x1
#define _IOCBF_IOCBF1_LENGTH                                0x1
#define _IOCBF_IOCBF1_MASK                                  0x2
#define _IOCBF_IOCBF2_POSN                                  0x2
#define _IOCBF_IOCBF2_POSITION                              0x2
#define _IOCBF_IOCBF2_SIZE                                  0x1
#define _IOCBF_IOCBF2_LENGTH                                0x1
#define _IOCBF_IOCBF2_MASK                                  0x4
#define _IOCBF_IOCBF3_POSN                                  0x3
#define _IOCBF_IOCBF3_POSITION                              0x3
#define _IOCBF_IOCBF3_SIZE                                  0x1
#define _IOCBF_IOCBF3_LENGTH                                0x1
#define _IOCBF_IOCBF3_MASK                                  0x8
#define _IOCBF_IOCBF4_POSN                                  0x4
#define _IOCBF_IOCBF4_POSITION                              0x4
#define _IOCBF_IOCBF4_SIZE                                  0x1
#define _IOCBF_IOCBF4_LENGTH                                0x1
#define _IOCBF_IOCBF4_MASK                                  0x10
#define _IOCBF_IOCBF5_POSN                                  0x5
#define _IOCBF_IOCBF5_POSITION                              0x5
#define _IOCBF_IOCBF5_SIZE                                  0x1
#define _IOCBF_IOCBF5_LENGTH                                0x1
#define _IOCBF_IOCBF5_MASK                                  0x20
#define _IOCBF_IOCBF6_POSN                                  0x6
#define _IOCBF_IOCBF6_POSITION                              0x6
#define _IOCBF_IOCBF6_SIZE                                  0x1
#define _IOCBF_IOCBF6_LENGTH                                0x1
#define _IOCBF_IOCBF6_MASK                                  0x40
#define _IOCBF_IOCBF7_POSN                                  0x7
#define _IOCBF_IOCBF7_POSITION                              0x7
#define _IOCBF_IOCBF7_SIZE                                  0x1
#define _IOCBF_IOCBF7_LENGTH                                0x1
#define _IOCBF_IOCBF7_MASK                                  0x80
#define _IOCBF_IOCBF_POSN                                   0x0
#define _IOCBF_IOCBF_POSITION                               0x0
#define _IOCBF_IOCBF_SIZE                                   0x8
#define _IOCBF_IOCBF_LENGTH                                 0x8
#define _IOCBF_IOCBF_MASK                                   0xFF

// Register: IOCCP
unsigned char           IOCCP               ; //SWAP 0x397;
#ifndef _LIB_BUILD
asm("IOCCP equ 0397h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCP0                 :1;
        unsigned IOCCP1                 :1;
        unsigned IOCCP2                 :1;
        unsigned IOCCP3                 :1;
        unsigned IOCCP4                 :1;
        unsigned IOCCP5                 :1;
        unsigned IOCCP6                 :1;
        unsigned IOCCP7                 :1;
    };
    struct {
        unsigned IOCCP                  :8;
    };
} IOCCPbits_t;
IOCCPbits_t IOCCPbits ; //SWAP 0x397;
// bitfield macros
#define _IOCCP_IOCCP0_POSN                                  0x0
#define _IOCCP_IOCCP0_POSITION                              0x0
#define _IOCCP_IOCCP0_SIZE                                  0x1
#define _IOCCP_IOCCP0_LENGTH                                0x1
#define _IOCCP_IOCCP0_MASK                                  0x1
#define _IOCCP_IOCCP1_POSN                                  0x1
#define _IOCCP_IOCCP1_POSITION                              0x1
#define _IOCCP_IOCCP1_SIZE                                  0x1
#define _IOCCP_IOCCP1_LENGTH                                0x1
#define _IOCCP_IOCCP1_MASK                                  0x2
#define _IOCCP_IOCCP2_POSN                                  0x2
#define _IOCCP_IOCCP2_POSITION                              0x2
#define _IOCCP_IOCCP2_SIZE                                  0x1
#define _IOCCP_IOCCP2_LENGTH                                0x1
#define _IOCCP_IOCCP2_MASK                                  0x4
#define _IOCCP_IOCCP3_POSN                                  0x3
#define _IOCCP_IOCCP3_POSITION                              0x3
#define _IOCCP_IOCCP3_SIZE                                  0x1
#define _IOCCP_IOCCP3_LENGTH                                0x1
#define _IOCCP_IOCCP3_MASK                                  0x8
#define _IOCCP_IOCCP4_POSN                                  0x4
#define _IOCCP_IOCCP4_POSITION                              0x4
#define _IOCCP_IOCCP4_SIZE                                  0x1
#define _IOCCP_IOCCP4_LENGTH                                0x1
#define _IOCCP_IOCCP4_MASK                                  0x10
#define _IOCCP_IOCCP5_POSN                                  0x5
#define _IOCCP_IOCCP5_POSITION                              0x5
#define _IOCCP_IOCCP5_SIZE                                  0x1
#define _IOCCP_IOCCP5_LENGTH                                0x1
#define _IOCCP_IOCCP5_MASK                                  0x20
#define _IOCCP_IOCCP6_POSN                                  0x6
#define _IOCCP_IOCCP6_POSITION                              0x6
#define _IOCCP_IOCCP6_SIZE                                  0x1
#define _IOCCP_IOCCP6_LENGTH                                0x1
#define _IOCCP_IOCCP6_MASK                                  0x40
#define _IOCCP_IOCCP7_POSN                                  0x7
#define _IOCCP_IOCCP7_POSITION                              0x7
#define _IOCCP_IOCCP7_SIZE                                  0x1
#define _IOCCP_IOCCP7_LENGTH                                0x1
#define _IOCCP_IOCCP7_MASK                                  0x80
#define _IOCCP_IOCCP_POSN                                   0x0
#define _IOCCP_IOCCP_POSITION                               0x0
#define _IOCCP_IOCCP_SIZE                                   0x8
#define _IOCCP_IOCCP_LENGTH                                 0x8
#define _IOCCP_IOCCP_MASK                                   0xFF

// Register: IOCCN
unsigned char           IOCCN               ; //SWAP 0x398;
#ifndef _LIB_BUILD
asm("IOCCN equ 0398h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCN0                 :1;
        unsigned IOCCN1                 :1;
        unsigned IOCCN2                 :1;
        unsigned IOCCN3                 :1;
        unsigned IOCCN4                 :1;
        unsigned IOCCN5                 :1;
        unsigned IOCCN6                 :1;
        unsigned IOCCN7                 :1;
    };
    struct {
        unsigned IOCCN                  :8;
    };
} IOCCNbits_t;
IOCCNbits_t IOCCNbits ; //SWAP 0x398;
// bitfield macros
#define _IOCCN_IOCCN0_POSN                                  0x0
#define _IOCCN_IOCCN0_POSITION                              0x0
#define _IOCCN_IOCCN0_SIZE                                  0x1
#define _IOCCN_IOCCN0_LENGTH                                0x1
#define _IOCCN_IOCCN0_MASK                                  0x1
#define _IOCCN_IOCCN1_POSN                                  0x1
#define _IOCCN_IOCCN1_POSITION                              0x1
#define _IOCCN_IOCCN1_SIZE                                  0x1
#define _IOCCN_IOCCN1_LENGTH                                0x1
#define _IOCCN_IOCCN1_MASK                                  0x2
#define _IOCCN_IOCCN2_POSN                                  0x2
#define _IOCCN_IOCCN2_POSITION                              0x2
#define _IOCCN_IOCCN2_SIZE                                  0x1
#define _IOCCN_IOCCN2_LENGTH                                0x1
#define _IOCCN_IOCCN2_MASK                                  0x4
#define _IOCCN_IOCCN3_POSN                                  0x3
#define _IOCCN_IOCCN3_POSITION                              0x3
#define _IOCCN_IOCCN3_SIZE                                  0x1
#define _IOCCN_IOCCN3_LENGTH                                0x1
#define _IOCCN_IOCCN3_MASK                                  0x8
#define _IOCCN_IOCCN4_POSN                                  0x4
#define _IOCCN_IOCCN4_POSITION                              0x4
#define _IOCCN_IOCCN4_SIZE                                  0x1
#define _IOCCN_IOCCN4_LENGTH                                0x1
#define _IOCCN_IOCCN4_MASK                                  0x10
#define _IOCCN_IOCCN5_POSN                                  0x5
#define _IOCCN_IOCCN5_POSITION                              0x5
#define _IOCCN_IOCCN5_SIZE                                  0x1
#define _IOCCN_IOCCN5_LENGTH                                0x1
#define _IOCCN_IOCCN5_MASK                                  0x20
#define _IOCCN_IOCCN6_POSN                                  0x6
#define _IOCCN_IOCCN6_POSITION                              0x6
#define _IOCCN_IOCCN6_SIZE                                  0x1
#define _IOCCN_IOCCN6_LENGTH                                0x1
#define _IOCCN_IOCCN6_MASK                                  0x40
#define _IOCCN_IOCCN7_POSN                                  0x7
#define _IOCCN_IOCCN7_POSITION                              0x7
#define _IOCCN_IOCCN7_SIZE                                  0x1
#define _IOCCN_IOCCN7_LENGTH                                0x1
#define _IOCCN_IOCCN7_MASK                                  0x80
#define _IOCCN_IOCCN_POSN                                   0x0
#define _IOCCN_IOCCN_POSITION                               0x0
#define _IOCCN_IOCCN_SIZE                                   0x8
#define _IOCCN_IOCCN_LENGTH                                 0x8
#define _IOCCN_IOCCN_MASK                                   0xFF

// Register: IOCCF
unsigned char           IOCCF               ; //SWAP 0x399;
#ifndef _LIB_BUILD
asm("IOCCF equ 0399h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned IOCCF0                 :1;
        unsigned IOCCF1                 :1;
        unsigned IOCCF2                 :1;
        unsigned IOCCF3                 :1;
        unsigned IOCCF4                 :1;
        unsigned IOCCF5                 :1;
        unsigned IOCCF6                 :1;
        unsigned IOCCF7                 :1;
    };
    struct {
        unsigned IOCCF                  :8;
    };
} IOCCFbits_t;
IOCCFbits_t IOCCFbits ; //SWAP 0x399;
// bitfield macros
#define _IOCCF_IOCCF0_POSN                                  0x0
#define _IOCCF_IOCCF0_POSITION                              0x0
#define _IOCCF_IOCCF0_SIZE                                  0x1
#define _IOCCF_IOCCF0_LENGTH                                0x1
#define _IOCCF_IOCCF0_MASK                                  0x1
#define _IOCCF_IOCCF1_POSN                                  0x1
#define _IOCCF_IOCCF1_POSITION                              0x1
#define _IOCCF_IOCCF1_SIZE                                  0x1
#define _IOCCF_IOCCF1_LENGTH                                0x1
#define _IOCCF_IOCCF1_MASK                                  0x2
#define _IOCCF_IOCCF2_POSN                                  0x2
#define _IOCCF_IOCCF2_POSITION                              0x2
#define _IOCCF_IOCCF2_SIZE                                  0x1
#define _IOCCF_IOCCF2_LENGTH                                0x1
#define _IOCCF_IOCCF2_MASK                                  0x4
#define _IOCCF_IOCCF3_POSN                                  0x3
#define _IOCCF_IOCCF3_POSITION                              0x3
#define _IOCCF_IOCCF3_SIZE                                  0x1
#define _IOCCF_IOCCF3_LENGTH                                0x1
#define _IOCCF_IOCCF3_MASK                                  0x8
#define _IOCCF_IOCCF4_POSN                                  0x4
#define _IOCCF_IOCCF4_POSITION                              0x4
#define _IOCCF_IOCCF4_SIZE                                  0x1
#define _IOCCF_IOCCF4_LENGTH                                0x1
#define _IOCCF_IOCCF4_MASK                                  0x10
#define _IOCCF_IOCCF5_POSN                                  0x5
#define _IOCCF_IOCCF5_POSITION                              0x5
#define _IOCCF_IOCCF5_SIZE                                  0x1
#define _IOCCF_IOCCF5_LENGTH                                0x1
#define _IOCCF_IOCCF5_MASK                                  0x20
#define _IOCCF_IOCCF6_POSN                                  0x6
#define _IOCCF_IOCCF6_POSITION                              0x6
#define _IOCCF_IOCCF6_SIZE                                  0x1
#define _IOCCF_IOCCF6_LENGTH                                0x1
#define _IOCCF_IOCCF6_MASK                                  0x40
#define _IOCCF_IOCCF7_POSN                                  0x7
#define _IOCCF_IOCCF7_POSITION                              0x7
#define _IOCCF_IOCCF7_SIZE                                  0x1
#define _IOCCF_IOCCF7_LENGTH                                0x1
#define _IOCCF_IOCCF7_MASK                                  0x80
#define _IOCCF_IOCCF_POSN                                   0x0
#define _IOCCF_IOCCF_POSITION                               0x0
#define _IOCCF_IOCCF_SIZE                                   0x8
#define _IOCCF_IOCCF_LENGTH                                 0x8
#define _IOCCF_IOCCF_MASK                                   0xFF

// Register: IOCEP
unsigned char           IOCEP               ; //SWAP 0x39D;
#ifndef _LIB_BUILD
asm("IOCEP equ 039Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned IOCEP3                 :1;
    };
} IOCEPbits_t;
IOCEPbits_t IOCEPbits ; //SWAP 0x39D;
// bitfield macros
#define _IOCEP_IOCEP3_POSN                                  0x3
#define _IOCEP_IOCEP3_POSITION                              0x3
#define _IOCEP_IOCEP3_SIZE                                  0x1
#define _IOCEP_IOCEP3_LENGTH                                0x1
#define _IOCEP_IOCEP3_MASK                                  0x8

// Register: IOCEN
unsigned char           IOCEN               ; //SWAP 0x39E;
#ifndef _LIB_BUILD
asm("IOCEN equ 039Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned IOCEN3                 :1;
    };
} IOCENbits_t;
IOCENbits_t IOCENbits ; //SWAP 0x39E;
// bitfield macros
#define _IOCEN_IOCEN3_POSN                                  0x3
#define _IOCEN_IOCEN3_POSITION                              0x3
#define _IOCEN_IOCEN3_SIZE                                  0x1
#define _IOCEN_IOCEN3_LENGTH                                0x1
#define _IOCEN_IOCEN3_MASK                                  0x8

// Register: IOCEF
unsigned char           IOCEF               ; //SWAP 0x39F;
#ifndef _LIB_BUILD
asm("IOCEF equ 039Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :3;
        unsigned IOCEF3                 :1;
    };
} IOCEFbits_t;
IOCEFbits_t IOCEFbits ; //SWAP 0x39F;
// bitfield macros
#define _IOCEF_IOCEF3_POSN                                  0x3
#define _IOCEF_IOCEF3_POSITION                              0x3
#define _IOCEF_IOCEF3_SIZE                                  0x1
#define _IOCEF_IOCEF3_LENGTH                                0x1
#define _IOCEF_IOCEF3_MASK                                  0x8

// Register: OPA1CON
unsigned char           OPA1CON             ; //SWAP 0x511;
#ifndef _LIB_BUILD
asm("OPA1CON equ 0511h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OPA1CH0                :1;
        unsigned OPA1CH1                :1;
        unsigned                        :4;
        unsigned OPA1SP                 :1;
        unsigned OPA1EN                 :1;
    };
    struct {
        unsigned OPA1CH                 :2;
    };
} OPA1CONbits_t;
OPA1CONbits_t OPA1CONbits ; //SWAP 0x511;
// bitfield macros
#define _OPA1CON_OPA1CH0_POSN                               0x0
#define _OPA1CON_OPA1CH0_POSITION                           0x0
#define _OPA1CON_OPA1CH0_SIZE                               0x1
#define _OPA1CON_OPA1CH0_LENGTH                             0x1
#define _OPA1CON_OPA1CH0_MASK                               0x1
#define _OPA1CON_OPA1CH1_POSN                               0x1
#define _OPA1CON_OPA1CH1_POSITION                           0x1
#define _OPA1CON_OPA1CH1_SIZE                               0x1
#define _OPA1CON_OPA1CH1_LENGTH                             0x1
#define _OPA1CON_OPA1CH1_MASK                               0x2
#define _OPA1CON_OPA1SP_POSN                                0x6
#define _OPA1CON_OPA1SP_POSITION                            0x6
#define _OPA1CON_OPA1SP_SIZE                                0x1
#define _OPA1CON_OPA1SP_LENGTH                              0x1
#define _OPA1CON_OPA1SP_MASK                                0x40
#define _OPA1CON_OPA1EN_POSN                                0x7
#define _OPA1CON_OPA1EN_POSITION                            0x7
#define _OPA1CON_OPA1EN_SIZE                                0x1
#define _OPA1CON_OPA1EN_LENGTH                              0x1
#define _OPA1CON_OPA1EN_MASK                                0x80
#define _OPA1CON_OPA1CH_POSN                                0x0
#define _OPA1CON_OPA1CH_POSITION                            0x0
#define _OPA1CON_OPA1CH_SIZE                                0x2
#define _OPA1CON_OPA1CH_LENGTH                              0x2
#define _OPA1CON_OPA1CH_MASK                                0x3

// Register: OPA2CON
unsigned char           OPA2CON             ; //SWAP 0x513;
#ifndef _LIB_BUILD
asm("OPA2CON equ 0513h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned OPA2CH0                :1;
        unsigned OPA2CH1                :1;
        unsigned                        :4;
        unsigned OPA2SP                 :1;
        unsigned OPA2EN                 :1;
    };
    struct {
        unsigned OPA2CH                 :2;
    };
} OPA2CONbits_t;
OPA2CONbits_t OPA2CONbits ; //SWAP 0x513;
// bitfield macros
#define _OPA2CON_OPA2CH0_POSN                               0x0
#define _OPA2CON_OPA2CH0_POSITION                           0x0
#define _OPA2CON_OPA2CH0_SIZE                               0x1
#define _OPA2CON_OPA2CH0_LENGTH                             0x1
#define _OPA2CON_OPA2CH0_MASK                               0x1
#define _OPA2CON_OPA2CH1_POSN                               0x1
#define _OPA2CON_OPA2CH1_POSITION                           0x1
#define _OPA2CON_OPA2CH1_SIZE                               0x1
#define _OPA2CON_OPA2CH1_LENGTH                             0x1
#define _OPA2CON_OPA2CH1_MASK                               0x2
#define _OPA2CON_OPA2SP_POSN                                0x6
#define _OPA2CON_OPA2SP_POSITION                            0x6
#define _OPA2CON_OPA2SP_SIZE                                0x1
#define _OPA2CON_OPA2SP_LENGTH                              0x1
#define _OPA2CON_OPA2SP_MASK                                0x40
#define _OPA2CON_OPA2EN_POSN                                0x7
#define _OPA2CON_OPA2EN_POSITION                            0x7
#define _OPA2CON_OPA2EN_SIZE                                0x1
#define _OPA2CON_OPA2EN_LENGTH                              0x1
#define _OPA2CON_OPA2EN_MASK                                0x80
#define _OPA2CON_OPA2CH_POSN                                0x0
#define _OPA2CON_OPA2CH_POSITION                            0x0
#define _OPA2CON_OPA2CH_SIZE                                0x2
#define _OPA2CON_OPA2CH_LENGTH                              0x2
#define _OPA2CON_OPA2CH_MASK                                0x3

// Register: CLKRCON
unsigned char           CLKRCON             ; //SWAP 0x51A;
#ifndef _LIB_BUILD
asm("CLKRCON equ 051Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned CLKRDIV0               :1;
        unsigned CLKRDIV1               :1;
        unsigned CLKRDIV2               :1;
        unsigned CLKRDC0                :1;
        unsigned CLKRDC1                :1;
        unsigned CLKRSLR                :1;
        unsigned CLKROE                 :1;
        unsigned CLKREN                 :1;
    };
    struct {
        unsigned CLKRDIV                :3;
        unsigned CLKRDC                 :2;
    };
} CLKRCONbits_t;
CLKRCONbits_t CLKRCONbits ; //SWAP 0x51A;
// bitfield macros
#define _CLKRCON_CLKRDIV0_POSN                              0x0
#define _CLKRCON_CLKRDIV0_POSITION                          0x0
#define _CLKRCON_CLKRDIV0_SIZE                              0x1
#define _CLKRCON_CLKRDIV0_LENGTH                            0x1
#define _CLKRCON_CLKRDIV0_MASK                              0x1
#define _CLKRCON_CLKRDIV1_POSN                              0x1
#define _CLKRCON_CLKRDIV1_POSITION                          0x1
#define _CLKRCON_CLKRDIV1_SIZE                              0x1
#define _CLKRCON_CLKRDIV1_LENGTH                            0x1
#define _CLKRCON_CLKRDIV1_MASK                              0x2
#define _CLKRCON_CLKRDIV2_POSN                              0x2
#define _CLKRCON_CLKRDIV2_POSITION                          0x2
#define _CLKRCON_CLKRDIV2_SIZE                              0x1
#define _CLKRCON_CLKRDIV2_LENGTH                            0x1
#define _CLKRCON_CLKRDIV2_MASK                              0x4
#define _CLKRCON_CLKRDC0_POSN                               0x3
#define _CLKRCON_CLKRDC0_POSITION                           0x3
#define _CLKRCON_CLKRDC0_SIZE                               0x1
#define _CLKRCON_CLKRDC0_LENGTH                             0x1
#define _CLKRCON_CLKRDC0_MASK                               0x8
#define _CLKRCON_CLKRDC1_POSN                               0x4
#define _CLKRCON_CLKRDC1_POSITION                           0x4
#define _CLKRCON_CLKRDC1_SIZE                               0x1
#define _CLKRCON_CLKRDC1_LENGTH                             0x1
#define _CLKRCON_CLKRDC1_MASK                               0x10
#define _CLKRCON_CLKRSLR_POSN                               0x5
#define _CLKRCON_CLKRSLR_POSITION                           0x5
#define _CLKRCON_CLKRSLR_SIZE                               0x1
#define _CLKRCON_CLKRSLR_LENGTH                             0x1
#define _CLKRCON_CLKRSLR_MASK                               0x20
#define _CLKRCON_CLKROE_POSN                                0x6
#define _CLKRCON_CLKROE_POSITION                            0x6
#define _CLKRCON_CLKROE_SIZE                                0x1
#define _CLKRCON_CLKROE_LENGTH                              0x1
#define _CLKRCON_CLKROE_MASK                                0x40
#define _CLKRCON_CLKREN_POSN                                0x7
#define _CLKRCON_CLKREN_POSITION                            0x7
#define _CLKRCON_CLKREN_SIZE                                0x1
#define _CLKRCON_CLKREN_LENGTH                              0x1
#define _CLKRCON_CLKREN_MASK                                0x80
#define _CLKRCON_CLKRDIV_POSN                               0x0
#define _CLKRCON_CLKRDIV_POSITION                           0x0
#define _CLKRCON_CLKRDIV_SIZE                               0x3
#define _CLKRCON_CLKRDIV_LENGTH                             0x3
#define _CLKRCON_CLKRDIV_MASK                               0x7
#define _CLKRCON_CLKRDC_POSN                                0x3
#define _CLKRCON_CLKRDC_POSITION                            0x3
#define _CLKRCON_CLKRDC_SIZE                                0x2
#define _CLKRCON_CLKRDC_LENGTH                              0x2
#define _CLKRCON_CLKRDC_MASK                                0x18

// Register: PSMC1CON
unsigned char           PSMC1CON            ; //SWAP 0x811;
#ifndef _LIB_BUILD
asm("PSMC1CON equ 0811h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1MODE                 :4;
        unsigned P1DBRE                 :1;
        unsigned P1DBFE                 :1;
        unsigned PSMC1LD                :1;
        unsigned PSMC1EN                :1;
    };
    struct {
        unsigned P1MODE0                :1;
        unsigned P1MODE1                :1;
        unsigned P1MODE2                :1;
        unsigned P1MODE3                :1;
    };
} PSMC1CONbits_t;
PSMC1CONbits_t PSMC1CONbits ; //SWAP 0x811;
// bitfield macros
#define _PSMC1CON_P1MODE_POSN                               0x0
#define _PSMC1CON_P1MODE_POSITION                           0x0
#define _PSMC1CON_P1MODE_SIZE                               0x4
#define _PSMC1CON_P1MODE_LENGTH                             0x4
#define _PSMC1CON_P1MODE_MASK                               0xF
#define _PSMC1CON_P1DBRE_POSN                               0x4
#define _PSMC1CON_P1DBRE_POSITION                           0x4
#define _PSMC1CON_P1DBRE_SIZE                               0x1
#define _PSMC1CON_P1DBRE_LENGTH                             0x1
#define _PSMC1CON_P1DBRE_MASK                               0x10
#define _PSMC1CON_P1DBFE_POSN                               0x5
#define _PSMC1CON_P1DBFE_POSITION                           0x5
#define _PSMC1CON_P1DBFE_SIZE                               0x1
#define _PSMC1CON_P1DBFE_LENGTH                             0x1
#define _PSMC1CON_P1DBFE_MASK                               0x20
#define _PSMC1CON_PSMC1LD_POSN                              0x6
#define _PSMC1CON_PSMC1LD_POSITION                          0x6
#define _PSMC1CON_PSMC1LD_SIZE                              0x1
#define _PSMC1CON_PSMC1LD_LENGTH                            0x1
#define _PSMC1CON_PSMC1LD_MASK                              0x40
#define _PSMC1CON_PSMC1EN_POSN                              0x7
#define _PSMC1CON_PSMC1EN_POSITION                          0x7
#define _PSMC1CON_PSMC1EN_SIZE                              0x1
#define _PSMC1CON_PSMC1EN_LENGTH                            0x1
#define _PSMC1CON_PSMC1EN_MASK                              0x80
#define _PSMC1CON_P1MODE0_POSN                              0x0
#define _PSMC1CON_P1MODE0_POSITION                          0x0
#define _PSMC1CON_P1MODE0_SIZE                              0x1
#define _PSMC1CON_P1MODE0_LENGTH                            0x1
#define _PSMC1CON_P1MODE0_MASK                              0x1
#define _PSMC1CON_P1MODE1_POSN                              0x1
#define _PSMC1CON_P1MODE1_POSITION                          0x1
#define _PSMC1CON_P1MODE1_SIZE                              0x1
#define _PSMC1CON_P1MODE1_LENGTH                            0x1
#define _PSMC1CON_P1MODE1_MASK                              0x2
#define _PSMC1CON_P1MODE2_POSN                              0x2
#define _PSMC1CON_P1MODE2_POSITION                          0x2
#define _PSMC1CON_P1MODE2_SIZE                              0x1
#define _PSMC1CON_P1MODE2_LENGTH                            0x1
#define _PSMC1CON_P1MODE2_MASK                              0x4
#define _PSMC1CON_P1MODE3_POSN                              0x3
#define _PSMC1CON_P1MODE3_POSITION                          0x3
#define _PSMC1CON_P1MODE3_SIZE                              0x1
#define _PSMC1CON_P1MODE3_LENGTH                            0x1
#define _PSMC1CON_P1MODE3_MASK                              0x8

// Register: PSMC1MDL
unsigned char           PSMC1MDL            ; //SWAP 0x812;
#ifndef _LIB_BUILD
asm("PSMC1MDL equ 0812h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1MSRC                 :4;
        unsigned                        :1;
        unsigned P1MDLBIT               :1;
        unsigned P1MDLPOL               :1;
        unsigned P1MDLEN                :1;
    };
    struct {
        unsigned P1MSRC0                :1;
        unsigned P1MSRC1                :1;
        unsigned P1MSRC2                :1;
        unsigned P1MSRC3                :1;
    };
} PSMC1MDLbits_t;
PSMC1MDLbits_t PSMC1MDLbits ; //SWAP 0x812;
// bitfield macros
#define _PSMC1MDL_P1MSRC_POSN                               0x0
#define _PSMC1MDL_P1MSRC_POSITION                           0x0
#define _PSMC1MDL_P1MSRC_SIZE                               0x4
#define _PSMC1MDL_P1MSRC_LENGTH                             0x4
#define _PSMC1MDL_P1MSRC_MASK                               0xF
#define _PSMC1MDL_P1MDLBIT_POSN                             0x5
#define _PSMC1MDL_P1MDLBIT_POSITION                         0x5
#define _PSMC1MDL_P1MDLBIT_SIZE                             0x1
#define _PSMC1MDL_P1MDLBIT_LENGTH                           0x1
#define _PSMC1MDL_P1MDLBIT_MASK                             0x20
#define _PSMC1MDL_P1MDLPOL_POSN                             0x6
#define _PSMC1MDL_P1MDLPOL_POSITION                         0x6
#define _PSMC1MDL_P1MDLPOL_SIZE                             0x1
#define _PSMC1MDL_P1MDLPOL_LENGTH                           0x1
#define _PSMC1MDL_P1MDLPOL_MASK                             0x40
#define _PSMC1MDL_P1MDLEN_POSN                              0x7
#define _PSMC1MDL_P1MDLEN_POSITION                          0x7
#define _PSMC1MDL_P1MDLEN_SIZE                              0x1
#define _PSMC1MDL_P1MDLEN_LENGTH                            0x1
#define _PSMC1MDL_P1MDLEN_MASK                              0x80
#define _PSMC1MDL_P1MSRC0_POSN                              0x0
#define _PSMC1MDL_P1MSRC0_POSITION                          0x0
#define _PSMC1MDL_P1MSRC0_SIZE                              0x1
#define _PSMC1MDL_P1MSRC0_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC0_MASK                              0x1
#define _PSMC1MDL_P1MSRC1_POSN                              0x1
#define _PSMC1MDL_P1MSRC1_POSITION                          0x1
#define _PSMC1MDL_P1MSRC1_SIZE                              0x1
#define _PSMC1MDL_P1MSRC1_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC1_MASK                              0x2
#define _PSMC1MDL_P1MSRC2_POSN                              0x2
#define _PSMC1MDL_P1MSRC2_POSITION                          0x2
#define _PSMC1MDL_P1MSRC2_SIZE                              0x1
#define _PSMC1MDL_P1MSRC2_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC2_MASK                              0x4
#define _PSMC1MDL_P1MSRC3_POSN                              0x3
#define _PSMC1MDL_P1MSRC3_POSITION                          0x3
#define _PSMC1MDL_P1MSRC3_SIZE                              0x1
#define _PSMC1MDL_P1MSRC3_LENGTH                            0x1
#define _PSMC1MDL_P1MSRC3_MASK                              0x8

// Register: PSMC1SYNC
unsigned char           PSMC1SYNC           ; //SWAP 0x813;
#ifndef _LIB_BUILD
asm("PSMC1SYNC equ 0813h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1SYNC0                :1;
        unsigned P1SYNC1                :1;
    };
} PSMC1SYNCbits_t;
PSMC1SYNCbits_t PSMC1SYNCbits ; //SWAP 0x813;
// bitfield macros
#define _PSMC1SYNC_P1SYNC0_POSN                             0x0
#define _PSMC1SYNC_P1SYNC0_POSITION                         0x0
#define _PSMC1SYNC_P1SYNC0_SIZE                             0x1
#define _PSMC1SYNC_P1SYNC0_LENGTH                           0x1
#define _PSMC1SYNC_P1SYNC0_MASK                             0x1
#define _PSMC1SYNC_P1SYNC1_POSN                             0x1
#define _PSMC1SYNC_P1SYNC1_POSITION                         0x1
#define _PSMC1SYNC_P1SYNC1_SIZE                             0x1
#define _PSMC1SYNC_P1SYNC1_LENGTH                           0x1
#define _PSMC1SYNC_P1SYNC1_MASK                             0x2

// Register: PSMC1CLK
unsigned char           PSMC1CLK            ; //SWAP 0x814;
#ifndef _LIB_BUILD
asm("PSMC1CLK equ 0814h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1CSRC0                :1;
        unsigned P1CSRC1                :1;
        unsigned                        :2;
        unsigned P1CPRE0                :1;
        unsigned P1CPRE1                :1;
    };
    struct {
        unsigned P1CSRC                 :2;
        unsigned                        :2;
        unsigned P1CPRE                 :2;
    };
} PSMC1CLKbits_t;
PSMC1CLKbits_t PSMC1CLKbits ; //SWAP 0x814;
// bitfield macros
#define _PSMC1CLK_P1CSRC0_POSN                              0x0
#define _PSMC1CLK_P1CSRC0_POSITION                          0x0
#define _PSMC1CLK_P1CSRC0_SIZE                              0x1
#define _PSMC1CLK_P1CSRC0_LENGTH                            0x1
#define _PSMC1CLK_P1CSRC0_MASK                              0x1
#define _PSMC1CLK_P1CSRC1_POSN                              0x1
#define _PSMC1CLK_P1CSRC1_POSITION                          0x1
#define _PSMC1CLK_P1CSRC1_SIZE                              0x1
#define _PSMC1CLK_P1CSRC1_LENGTH                            0x1
#define _PSMC1CLK_P1CSRC1_MASK                              0x2
#define _PSMC1CLK_P1CPRE0_POSN                              0x4
#define _PSMC1CLK_P1CPRE0_POSITION                          0x4
#define _PSMC1CLK_P1CPRE0_SIZE                              0x1
#define _PSMC1CLK_P1CPRE0_LENGTH                            0x1
#define _PSMC1CLK_P1CPRE0_MASK                              0x10
#define _PSMC1CLK_P1CPRE1_POSN                              0x5
#define _PSMC1CLK_P1CPRE1_POSITION                          0x5
#define _PSMC1CLK_P1CPRE1_SIZE                              0x1
#define _PSMC1CLK_P1CPRE1_LENGTH                            0x1
#define _PSMC1CLK_P1CPRE1_MASK                              0x20
#define _PSMC1CLK_P1CSRC_POSN                               0x0
#define _PSMC1CLK_P1CSRC_POSITION                           0x0
#define _PSMC1CLK_P1CSRC_SIZE                               0x2
#define _PSMC1CLK_P1CSRC_LENGTH                             0x2
#define _PSMC1CLK_P1CSRC_MASK                               0x3
#define _PSMC1CLK_P1CPRE_POSN                               0x4
#define _PSMC1CLK_P1CPRE_POSITION                           0x4
#define _PSMC1CLK_P1CPRE_SIZE                               0x2
#define _PSMC1CLK_P1CPRE_LENGTH                             0x2
#define _PSMC1CLK_P1CPRE_MASK                               0x30

// Register: PSMC1OEN
unsigned char           PSMC1OEN            ; //SWAP 0x815;
#ifndef _LIB_BUILD
asm("PSMC1OEN equ 0815h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1OEA                  :1;
        unsigned P1OEB                  :1;
        unsigned P1OEC                  :1;
        unsigned P1OED                  :1;
        unsigned P1OEE                  :1;
        unsigned P1OEF                  :1;
    };
} PSMC1OENbits_t;
PSMC1OENbits_t PSMC1OENbits ; //SWAP 0x815;
// bitfield macros
#define _PSMC1OEN_P1OEA_POSN                                0x0
#define _PSMC1OEN_P1OEA_POSITION                            0x0
#define _PSMC1OEN_P1OEA_SIZE                                0x1
#define _PSMC1OEN_P1OEA_LENGTH                              0x1
#define _PSMC1OEN_P1OEA_MASK                                0x1
#define _PSMC1OEN_P1OEB_POSN                                0x1
#define _PSMC1OEN_P1OEB_POSITION                            0x1
#define _PSMC1OEN_P1OEB_SIZE                                0x1
#define _PSMC1OEN_P1OEB_LENGTH                              0x1
#define _PSMC1OEN_P1OEB_MASK                                0x2
#define _PSMC1OEN_P1OEC_POSN                                0x2
#define _PSMC1OEN_P1OEC_POSITION                            0x2
#define _PSMC1OEN_P1OEC_SIZE                                0x1
#define _PSMC1OEN_P1OEC_LENGTH                              0x1
#define _PSMC1OEN_P1OEC_MASK                                0x4
#define _PSMC1OEN_P1OED_POSN                                0x3
#define _PSMC1OEN_P1OED_POSITION                            0x3
#define _PSMC1OEN_P1OED_SIZE                                0x1
#define _PSMC1OEN_P1OED_LENGTH                              0x1
#define _PSMC1OEN_P1OED_MASK                                0x8
#define _PSMC1OEN_P1OEE_POSN                                0x4
#define _PSMC1OEN_P1OEE_POSITION                            0x4
#define _PSMC1OEN_P1OEE_SIZE                                0x1
#define _PSMC1OEN_P1OEE_LENGTH                              0x1
#define _PSMC1OEN_P1OEE_MASK                                0x10
#define _PSMC1OEN_P1OEF_POSN                                0x5
#define _PSMC1OEN_P1OEF_POSITION                            0x5
#define _PSMC1OEN_P1OEF_SIZE                                0x1
#define _PSMC1OEN_P1OEF_LENGTH                              0x1
#define _PSMC1OEN_P1OEF_MASK                                0x20

// Register: PSMC1POL
unsigned char           PSMC1POL            ; //SWAP 0x816;
#ifndef _LIB_BUILD
asm("PSMC1POL equ 0816h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1POLA                 :1;
        unsigned P1POLB                 :1;
        unsigned P1POLC                 :1;
        unsigned P1POLD                 :1;
        unsigned P1POLE                 :1;
        unsigned P1POLF                 :1;
        unsigned P1INPOL                :1;
    };
} PSMC1POLbits_t;
PSMC1POLbits_t PSMC1POLbits ; //SWAP 0x816;
// bitfield macros
#define _PSMC1POL_P1POLA_POSN                               0x0
#define _PSMC1POL_P1POLA_POSITION                           0x0
#define _PSMC1POL_P1POLA_SIZE                               0x1
#define _PSMC1POL_P1POLA_LENGTH                             0x1
#define _PSMC1POL_P1POLA_MASK                               0x1
#define _PSMC1POL_P1POLB_POSN                               0x1
#define _PSMC1POL_P1POLB_POSITION                           0x1
#define _PSMC1POL_P1POLB_SIZE                               0x1
#define _PSMC1POL_P1POLB_LENGTH                             0x1
#define _PSMC1POL_P1POLB_MASK                               0x2
#define _PSMC1POL_P1POLC_POSN                               0x2
#define _PSMC1POL_P1POLC_POSITION                           0x2
#define _PSMC1POL_P1POLC_SIZE                               0x1
#define _PSMC1POL_P1POLC_LENGTH                             0x1
#define _PSMC1POL_P1POLC_MASK                               0x4
#define _PSMC1POL_P1POLD_POSN                               0x3
#define _PSMC1POL_P1POLD_POSITION                           0x3
#define _PSMC1POL_P1POLD_SIZE                               0x1
#define _PSMC1POL_P1POLD_LENGTH                             0x1
#define _PSMC1POL_P1POLD_MASK                               0x8
#define _PSMC1POL_P1POLE_POSN                               0x4
#define _PSMC1POL_P1POLE_POSITION                           0x4
#define _PSMC1POL_P1POLE_SIZE                               0x1
#define _PSMC1POL_P1POLE_LENGTH                             0x1
#define _PSMC1POL_P1POLE_MASK                               0x10
#define _PSMC1POL_P1POLF_POSN                               0x5
#define _PSMC1POL_P1POLF_POSITION                           0x5
#define _PSMC1POL_P1POLF_SIZE                               0x1
#define _PSMC1POL_P1POLF_LENGTH                             0x1
#define _PSMC1POL_P1POLF_MASK                               0x20
#define _PSMC1POL_P1INPOL_POSN                              0x6
#define _PSMC1POL_P1INPOL_POSITION                          0x6
#define _PSMC1POL_P1INPOL_SIZE                              0x1
#define _PSMC1POL_P1INPOL_LENGTH                            0x1
#define _PSMC1POL_P1INPOL_MASK                              0x40

// Register: PSMC1BLNK
unsigned char           PSMC1BLNK           ; //SWAP 0x817;
#ifndef _LIB_BUILD
asm("PSMC1BLNK equ 0817h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1REBM                 :2;
        unsigned                        :2;
        unsigned P1FEBM                 :2;
    };
    struct {
        unsigned P1REBM0                :1;
        unsigned P1REBM1                :1;
        unsigned                        :2;
        unsigned P1FEBM0                :1;
        unsigned P1FEBM1                :1;
    };
} PSMC1BLNKbits_t;
PSMC1BLNKbits_t PSMC1BLNKbits ; //SWAP 0x817;
// bitfield macros
#define _PSMC1BLNK_P1REBM_POSN                              0x0
#define _PSMC1BLNK_P1REBM_POSITION                          0x0
#define _PSMC1BLNK_P1REBM_SIZE                              0x2
#define _PSMC1BLNK_P1REBM_LENGTH                            0x2
#define _PSMC1BLNK_P1REBM_MASK                              0x3
#define _PSMC1BLNK_P1FEBM_POSN                              0x4
#define _PSMC1BLNK_P1FEBM_POSITION                          0x4
#define _PSMC1BLNK_P1FEBM_SIZE                              0x2
#define _PSMC1BLNK_P1FEBM_LENGTH                            0x2
#define _PSMC1BLNK_P1FEBM_MASK                              0x30
#define _PSMC1BLNK_P1REBM0_POSN                             0x0
#define _PSMC1BLNK_P1REBM0_POSITION                         0x0
#define _PSMC1BLNK_P1REBM0_SIZE                             0x1
#define _PSMC1BLNK_P1REBM0_LENGTH                           0x1
#define _PSMC1BLNK_P1REBM0_MASK                             0x1
#define _PSMC1BLNK_P1REBM1_POSN                             0x1
#define _PSMC1BLNK_P1REBM1_POSITION                         0x1
#define _PSMC1BLNK_P1REBM1_SIZE                             0x1
#define _PSMC1BLNK_P1REBM1_LENGTH                           0x1
#define _PSMC1BLNK_P1REBM1_MASK                             0x2
#define _PSMC1BLNK_P1FEBM0_POSN                             0x4
#define _PSMC1BLNK_P1FEBM0_POSITION                         0x4
#define _PSMC1BLNK_P1FEBM0_SIZE                             0x1
#define _PSMC1BLNK_P1FEBM0_LENGTH                           0x1
#define _PSMC1BLNK_P1FEBM0_MASK                             0x10
#define _PSMC1BLNK_P1FEBM1_POSN                             0x5
#define _PSMC1BLNK_P1FEBM1_POSITION                         0x5
#define _PSMC1BLNK_P1FEBM1_SIZE                             0x1
#define _PSMC1BLNK_P1FEBM1_LENGTH                           0x1
#define _PSMC1BLNK_P1FEBM1_MASK                             0x20

// Register: PSMC1REBS
unsigned char           PSMC1REBS           ; //SWAP 0x818;
#ifndef _LIB_BUILD
asm("PSMC1REBS equ 0818h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P1REBSC1               :1;
        unsigned P1REBSC2               :1;
        unsigned P1REBSC3               :1;
        unsigned                        :3;
        unsigned P1REBSIN               :1;
    };
} PSMC1REBSbits_t;
PSMC1REBSbits_t PSMC1REBSbits ; //SWAP 0x818;
// bitfield macros
#define _PSMC1REBS_P1REBSC1_POSN                            0x1
#define _PSMC1REBS_P1REBSC1_POSITION                        0x1
#define _PSMC1REBS_P1REBSC1_SIZE                            0x1
#define _PSMC1REBS_P1REBSC1_LENGTH                          0x1
#define _PSMC1REBS_P1REBSC1_MASK                            0x2
#define _PSMC1REBS_P1REBSC2_POSN                            0x2
#define _PSMC1REBS_P1REBSC2_POSITION                        0x2
#define _PSMC1REBS_P1REBSC2_SIZE                            0x1
#define _PSMC1REBS_P1REBSC2_LENGTH                          0x1
#define _PSMC1REBS_P1REBSC2_MASK                            0x4
#define _PSMC1REBS_P1REBSC3_POSN                            0x3
#define _PSMC1REBS_P1REBSC3_POSITION                        0x3
#define _PSMC1REBS_P1REBSC3_SIZE                            0x1
#define _PSMC1REBS_P1REBSC3_LENGTH                          0x1
#define _PSMC1REBS_P1REBSC3_MASK                            0x8
#define _PSMC1REBS_P1REBSIN_POSN                            0x7
#define _PSMC1REBS_P1REBSIN_POSITION                        0x7
#define _PSMC1REBS_P1REBSIN_SIZE                            0x1
#define _PSMC1REBS_P1REBSIN_LENGTH                          0x1
#define _PSMC1REBS_P1REBSIN_MASK                            0x80

// Register: PSMC1FEBS
unsigned char           PSMC1FEBS           ; //SWAP 0x819;
#ifndef _LIB_BUILD
asm("PSMC1FEBS equ 0819h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P1FEBSC1               :1;
        unsigned P1FEBSC2               :1;
        unsigned P1FEBSC3               :1;
        unsigned                        :3;
        unsigned P1FEBSIN               :1;
    };
} PSMC1FEBSbits_t;
PSMC1FEBSbits_t PSMC1FEBSbits ; //SWAP 0x819;
// bitfield macros
#define _PSMC1FEBS_P1FEBSC1_POSN                            0x1
#define _PSMC1FEBS_P1FEBSC1_POSITION                        0x1
#define _PSMC1FEBS_P1FEBSC1_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSC1_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSC1_MASK                            0x2
#define _PSMC1FEBS_P1FEBSC2_POSN                            0x2
#define _PSMC1FEBS_P1FEBSC2_POSITION                        0x2
#define _PSMC1FEBS_P1FEBSC2_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSC2_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSC2_MASK                            0x4
#define _PSMC1FEBS_P1FEBSC3_POSN                            0x3
#define _PSMC1FEBS_P1FEBSC3_POSITION                        0x3
#define _PSMC1FEBS_P1FEBSC3_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSC3_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSC3_MASK                            0x8
#define _PSMC1FEBS_P1FEBSIN_POSN                            0x7
#define _PSMC1FEBS_P1FEBSIN_POSITION                        0x7
#define _PSMC1FEBS_P1FEBSIN_SIZE                            0x1
#define _PSMC1FEBS_P1FEBSIN_LENGTH                          0x1
#define _PSMC1FEBS_P1FEBSIN_MASK                            0x80

// Register: PSMC1PHS
unsigned char           PSMC1PHS            ; //SWAP 0x81A;
#ifndef _LIB_BUILD
asm("PSMC1PHS equ 081Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1PHST                 :1;
        unsigned P1PHSC1                :1;
        unsigned P1PHSC2                :1;
        unsigned P1PHSC3                :1;
        unsigned                        :3;
        unsigned P1PHSIN                :1;
    };
} PSMC1PHSbits_t;
PSMC1PHSbits_t PSMC1PHSbits ; //SWAP 0x81A;
// bitfield macros
#define _PSMC1PHS_P1PHST_POSN                               0x0
#define _PSMC1PHS_P1PHST_POSITION                           0x0
#define _PSMC1PHS_P1PHST_SIZE                               0x1
#define _PSMC1PHS_P1PHST_LENGTH                             0x1
#define _PSMC1PHS_P1PHST_MASK                               0x1
#define _PSMC1PHS_P1PHSC1_POSN                              0x1
#define _PSMC1PHS_P1PHSC1_POSITION                          0x1
#define _PSMC1PHS_P1PHSC1_SIZE                              0x1
#define _PSMC1PHS_P1PHSC1_LENGTH                            0x1
#define _PSMC1PHS_P1PHSC1_MASK                              0x2
#define _PSMC1PHS_P1PHSC2_POSN                              0x2
#define _PSMC1PHS_P1PHSC2_POSITION                          0x2
#define _PSMC1PHS_P1PHSC2_SIZE                              0x1
#define _PSMC1PHS_P1PHSC2_LENGTH                            0x1
#define _PSMC1PHS_P1PHSC2_MASK                              0x4
#define _PSMC1PHS_P1PHSC3_POSN                              0x3
#define _PSMC1PHS_P1PHSC3_POSITION                          0x3
#define _PSMC1PHS_P1PHSC3_SIZE                              0x1
#define _PSMC1PHS_P1PHSC3_LENGTH                            0x1
#define _PSMC1PHS_P1PHSC3_MASK                              0x8
#define _PSMC1PHS_P1PHSIN_POSN                              0x7
#define _PSMC1PHS_P1PHSIN_POSITION                          0x7
#define _PSMC1PHS_P1PHSIN_SIZE                              0x1
#define _PSMC1PHS_P1PHSIN_LENGTH                            0x1
#define _PSMC1PHS_P1PHSIN_MASK                              0x80

// Register: PSMC1DCS
unsigned char           PSMC1DCS            ; //SWAP 0x81B;
#ifndef _LIB_BUILD
asm("PSMC1DCS equ 081Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1DCST                 :1;
        unsigned P1DCSC1                :1;
        unsigned P1DCSC2                :1;
        unsigned P1DCSC3                :1;
        unsigned                        :3;
        unsigned P1DCSIN                :1;
    };
} PSMC1DCSbits_t;
PSMC1DCSbits_t PSMC1DCSbits ; //SWAP 0x81B;
// bitfield macros
#define _PSMC1DCS_P1DCST_POSN                               0x0
#define _PSMC1DCS_P1DCST_POSITION                           0x0
#define _PSMC1DCS_P1DCST_SIZE                               0x1
#define _PSMC1DCS_P1DCST_LENGTH                             0x1
#define _PSMC1DCS_P1DCST_MASK                               0x1
#define _PSMC1DCS_P1DCSC1_POSN                              0x1
#define _PSMC1DCS_P1DCSC1_POSITION                          0x1
#define _PSMC1DCS_P1DCSC1_SIZE                              0x1
#define _PSMC1DCS_P1DCSC1_LENGTH                            0x1
#define _PSMC1DCS_P1DCSC1_MASK                              0x2
#define _PSMC1DCS_P1DCSC2_POSN                              0x2
#define _PSMC1DCS_P1DCSC2_POSITION                          0x2
#define _PSMC1DCS_P1DCSC2_SIZE                              0x1
#define _PSMC1DCS_P1DCSC2_LENGTH                            0x1
#define _PSMC1DCS_P1DCSC2_MASK                              0x4
#define _PSMC1DCS_P1DCSC3_POSN                              0x3
#define _PSMC1DCS_P1DCSC3_POSITION                          0x3
#define _PSMC1DCS_P1DCSC3_SIZE                              0x1
#define _PSMC1DCS_P1DCSC3_LENGTH                            0x1
#define _PSMC1DCS_P1DCSC3_MASK                              0x8
#define _PSMC1DCS_P1DCSIN_POSN                              0x7
#define _PSMC1DCS_P1DCSIN_POSITION                          0x7
#define _PSMC1DCS_P1DCSIN_SIZE                              0x1
#define _PSMC1DCS_P1DCSIN_LENGTH                            0x1
#define _PSMC1DCS_P1DCSIN_MASK                              0x80

// Register: PSMC1PRS
unsigned char           PSMC1PRS            ; //SWAP 0x81C;
#ifndef _LIB_BUILD
asm("PSMC1PRS equ 081Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1PRST                 :1;
        unsigned P1PRSC1                :1;
        unsigned P1PRSC2                :1;
        unsigned P1PRSC3                :1;
        unsigned                        :3;
        unsigned P1PRSIN                :1;
    };
} PSMC1PRSbits_t;
PSMC1PRSbits_t PSMC1PRSbits ; //SWAP 0x81C;
// bitfield macros
#define _PSMC1PRS_P1PRST_POSN                               0x0
#define _PSMC1PRS_P1PRST_POSITION                           0x0
#define _PSMC1PRS_P1PRST_SIZE                               0x1
#define _PSMC1PRS_P1PRST_LENGTH                             0x1
#define _PSMC1PRS_P1PRST_MASK                               0x1
#define _PSMC1PRS_P1PRSC1_POSN                              0x1
#define _PSMC1PRS_P1PRSC1_POSITION                          0x1
#define _PSMC1PRS_P1PRSC1_SIZE                              0x1
#define _PSMC1PRS_P1PRSC1_LENGTH                            0x1
#define _PSMC1PRS_P1PRSC1_MASK                              0x2
#define _PSMC1PRS_P1PRSC2_POSN                              0x2
#define _PSMC1PRS_P1PRSC2_POSITION                          0x2
#define _PSMC1PRS_P1PRSC2_SIZE                              0x1
#define _PSMC1PRS_P1PRSC2_LENGTH                            0x1
#define _PSMC1PRS_P1PRSC2_MASK                              0x4
#define _PSMC1PRS_P1PRSC3_POSN                              0x3
#define _PSMC1PRS_P1PRSC3_POSITION                          0x3
#define _PSMC1PRS_P1PRSC3_SIZE                              0x1
#define _PSMC1PRS_P1PRSC3_LENGTH                            0x1
#define _PSMC1PRS_P1PRSC3_MASK                              0x8
#define _PSMC1PRS_P1PRSIN_POSN                              0x7
#define _PSMC1PRS_P1PRSIN_POSITION                          0x7
#define _PSMC1PRS_P1PRSIN_SIZE                              0x1
#define _PSMC1PRS_P1PRSIN_LENGTH                            0x1
#define _PSMC1PRS_P1PRSIN_MASK                              0x80

// Register: PSMC1ASDC
unsigned char           PSMC1ASDC           ; //SWAP 0x81D;
#ifndef _LIB_BUILD
asm("PSMC1ASDC equ 081Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1ASDOV                :1;
        unsigned                        :4;
        unsigned P1ARSEN                :1;
        unsigned P1ASDEN                :1;
        unsigned P1ASE                  :1;
    };
} PSMC1ASDCbits_t;
PSMC1ASDCbits_t PSMC1ASDCbits ; //SWAP 0x81D;
// bitfield macros
#define _PSMC1ASDC_P1ASDOV_POSN                             0x0
#define _PSMC1ASDC_P1ASDOV_POSITION                         0x0
#define _PSMC1ASDC_P1ASDOV_SIZE                             0x1
#define _PSMC1ASDC_P1ASDOV_LENGTH                           0x1
#define _PSMC1ASDC_P1ASDOV_MASK                             0x1
#define _PSMC1ASDC_P1ARSEN_POSN                             0x5
#define _PSMC1ASDC_P1ARSEN_POSITION                         0x5
#define _PSMC1ASDC_P1ARSEN_SIZE                             0x1
#define _PSMC1ASDC_P1ARSEN_LENGTH                           0x1
#define _PSMC1ASDC_P1ARSEN_MASK                             0x20
#define _PSMC1ASDC_P1ASDEN_POSN                             0x6
#define _PSMC1ASDC_P1ASDEN_POSITION                         0x6
#define _PSMC1ASDC_P1ASDEN_SIZE                             0x1
#define _PSMC1ASDC_P1ASDEN_LENGTH                           0x1
#define _PSMC1ASDC_P1ASDEN_MASK                             0x40
#define _PSMC1ASDC_P1ASE_POSN                               0x7
#define _PSMC1ASDC_P1ASE_POSITION                           0x7
#define _PSMC1ASDC_P1ASE_SIZE                               0x1
#define _PSMC1ASDC_P1ASE_LENGTH                             0x1
#define _PSMC1ASDC_P1ASE_MASK                               0x80

// Register: PSMC1ASDL
unsigned char           PSMC1ASDL           ; //SWAP 0x81E;
#ifndef _LIB_BUILD
asm("PSMC1ASDL equ 081Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1ASDLA                :1;
        unsigned P1ASDLB                :1;
        unsigned P1ASDLC                :1;
        unsigned P1ASDLD                :1;
        unsigned P1ASDLE                :1;
        unsigned P1ASDLF                :1;
    };
} PSMC1ASDLbits_t;
PSMC1ASDLbits_t PSMC1ASDLbits ; //SWAP 0x81E;
// bitfield macros
#define _PSMC1ASDL_P1ASDLA_POSN                             0x0
#define _PSMC1ASDL_P1ASDLA_POSITION                         0x0
#define _PSMC1ASDL_P1ASDLA_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLA_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLA_MASK                             0x1
#define _PSMC1ASDL_P1ASDLB_POSN                             0x1
#define _PSMC1ASDL_P1ASDLB_POSITION                         0x1
#define _PSMC1ASDL_P1ASDLB_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLB_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLB_MASK                             0x2
#define _PSMC1ASDL_P1ASDLC_POSN                             0x2
#define _PSMC1ASDL_P1ASDLC_POSITION                         0x2
#define _PSMC1ASDL_P1ASDLC_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLC_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLC_MASK                             0x4
#define _PSMC1ASDL_P1ASDLD_POSN                             0x3
#define _PSMC1ASDL_P1ASDLD_POSITION                         0x3
#define _PSMC1ASDL_P1ASDLD_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLD_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLD_MASK                             0x8
#define _PSMC1ASDL_P1ASDLE_POSN                             0x4
#define _PSMC1ASDL_P1ASDLE_POSITION                         0x4
#define _PSMC1ASDL_P1ASDLE_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLE_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLE_MASK                             0x10
#define _PSMC1ASDL_P1ASDLF_POSN                             0x5
#define _PSMC1ASDL_P1ASDLF_POSITION                         0x5
#define _PSMC1ASDL_P1ASDLF_SIZE                             0x1
#define _PSMC1ASDL_P1ASDLF_LENGTH                           0x1
#define _PSMC1ASDL_P1ASDLF_MASK                             0x20

// Register: PSMC1ASDS
unsigned char           PSMC1ASDS           ; //SWAP 0x81F;
#ifndef _LIB_BUILD
asm("PSMC1ASDS equ 081Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P1ASDSC1               :1;
        unsigned P1ASDSC2               :1;
        unsigned P1ASDSC3               :1;
        unsigned                        :3;
        unsigned P1ASDSIN               :1;
    };
} PSMC1ASDSbits_t;
PSMC1ASDSbits_t PSMC1ASDSbits ; //SWAP 0x81F;
// bitfield macros
#define _PSMC1ASDS_P1ASDSC1_POSN                            0x1
#define _PSMC1ASDS_P1ASDSC1_POSITION                        0x1
#define _PSMC1ASDS_P1ASDSC1_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSC1_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSC1_MASK                            0x2
#define _PSMC1ASDS_P1ASDSC2_POSN                            0x2
#define _PSMC1ASDS_P1ASDSC2_POSITION                        0x2
#define _PSMC1ASDS_P1ASDSC2_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSC2_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSC2_MASK                            0x4
#define _PSMC1ASDS_P1ASDSC3_POSN                            0x3
#define _PSMC1ASDS_P1ASDSC3_POSITION                        0x3
#define _PSMC1ASDS_P1ASDSC3_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSC3_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSC3_MASK                            0x8
#define _PSMC1ASDS_P1ASDSIN_POSN                            0x7
#define _PSMC1ASDS_P1ASDSIN_POSITION                        0x7
#define _PSMC1ASDS_P1ASDSIN_SIZE                            0x1
#define _PSMC1ASDS_P1ASDSIN_LENGTH                          0x1
#define _PSMC1ASDS_P1ASDSIN_MASK                            0x80

// Register: PSMC1INT
unsigned char           PSMC1INT            ; //SWAP 0x820;
#ifndef _LIB_BUILD
asm("PSMC1INT equ 0820h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1TPRIF                :1;
        unsigned P1TDCIF                :1;
        unsigned P1TPHIF                :1;
        unsigned P1TOVIF                :1;
        unsigned P1TPRIE                :1;
        unsigned P1TDCIE                :1;
        unsigned P1TPHIE                :1;
        unsigned P1TOVIE                :1;
    };
} PSMC1INTbits_t;
PSMC1INTbits_t PSMC1INTbits ; //SWAP 0x820;
// bitfield macros
#define _PSMC1INT_P1TPRIF_POSN                              0x0
#define _PSMC1INT_P1TPRIF_POSITION                          0x0
#define _PSMC1INT_P1TPRIF_SIZE                              0x1
#define _PSMC1INT_P1TPRIF_LENGTH                            0x1
#define _PSMC1INT_P1TPRIF_MASK                              0x1
#define _PSMC1INT_P1TDCIF_POSN                              0x1
#define _PSMC1INT_P1TDCIF_POSITION                          0x1
#define _PSMC1INT_P1TDCIF_SIZE                              0x1
#define _PSMC1INT_P1TDCIF_LENGTH                            0x1
#define _PSMC1INT_P1TDCIF_MASK                              0x2
#define _PSMC1INT_P1TPHIF_POSN                              0x2
#define _PSMC1INT_P1TPHIF_POSITION                          0x2
#define _PSMC1INT_P1TPHIF_SIZE                              0x1
#define _PSMC1INT_P1TPHIF_LENGTH                            0x1
#define _PSMC1INT_P1TPHIF_MASK                              0x4
#define _PSMC1INT_P1TOVIF_POSN                              0x3
#define _PSMC1INT_P1TOVIF_POSITION                          0x3
#define _PSMC1INT_P1TOVIF_SIZE                              0x1
#define _PSMC1INT_P1TOVIF_LENGTH                            0x1
#define _PSMC1INT_P1TOVIF_MASK                              0x8
#define _PSMC1INT_P1TPRIE_POSN                              0x4
#define _PSMC1INT_P1TPRIE_POSITION                          0x4
#define _PSMC1INT_P1TPRIE_SIZE                              0x1
#define _PSMC1INT_P1TPRIE_LENGTH                            0x1
#define _PSMC1INT_P1TPRIE_MASK                              0x10
#define _PSMC1INT_P1TDCIE_POSN                              0x5
#define _PSMC1INT_P1TDCIE_POSITION                          0x5
#define _PSMC1INT_P1TDCIE_SIZE                              0x1
#define _PSMC1INT_P1TDCIE_LENGTH                            0x1
#define _PSMC1INT_P1TDCIE_MASK                              0x20
#define _PSMC1INT_P1TPHIE_POSN                              0x6
#define _PSMC1INT_P1TPHIE_POSITION                          0x6
#define _PSMC1INT_P1TPHIE_SIZE                              0x1
#define _PSMC1INT_P1TPHIE_LENGTH                            0x1
#define _PSMC1INT_P1TPHIE_MASK                              0x40
#define _PSMC1INT_P1TOVIE_POSN                              0x7
#define _PSMC1INT_P1TOVIE_POSITION                          0x7
#define _PSMC1INT_P1TOVIE_SIZE                              0x1
#define _PSMC1INT_P1TOVIE_LENGTH                            0x1
#define _PSMC1INT_P1TOVIE_MASK                              0x80

// Register: PSMC1PH
unsigned short          PSMC1PH             ; //SWAP 0x821;
#ifndef _LIB_BUILD
asm("PSMC1PH equ 0821h");
#endif

// Register: PSMC1PHL
unsigned char           PSMC1PHL            ; //SWAP 0x821;
#ifndef _LIB_BUILD
asm("PSMC1PHL equ 0821h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PH0               :1;
        unsigned PSMC1PH1               :1;
        unsigned PSMC1PH2               :1;
        unsigned PSMC1PH3               :1;
        unsigned PSMC1PH4               :1;
        unsigned PSMC1PH5               :1;
        unsigned PSMC1PH6               :1;
        unsigned PSMC1PH7               :1;
    };
} PSMC1PHLbits_t;
PSMC1PHLbits_t PSMC1PHLbits ; //SWAP 0x821;
// bitfield macros
#define _PSMC1PHL_PSMC1PH0_POSN                             0x0
#define _PSMC1PHL_PSMC1PH0_POSITION                         0x0
#define _PSMC1PHL_PSMC1PH0_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH0_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH0_MASK                             0x1
#define _PSMC1PHL_PSMC1PH1_POSN                             0x1
#define _PSMC1PHL_PSMC1PH1_POSITION                         0x1
#define _PSMC1PHL_PSMC1PH1_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH1_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH1_MASK                             0x2
#define _PSMC1PHL_PSMC1PH2_POSN                             0x2
#define _PSMC1PHL_PSMC1PH2_POSITION                         0x2
#define _PSMC1PHL_PSMC1PH2_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH2_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH2_MASK                             0x4
#define _PSMC1PHL_PSMC1PH3_POSN                             0x3
#define _PSMC1PHL_PSMC1PH3_POSITION                         0x3
#define _PSMC1PHL_PSMC1PH3_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH3_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH3_MASK                             0x8
#define _PSMC1PHL_PSMC1PH4_POSN                             0x4
#define _PSMC1PHL_PSMC1PH4_POSITION                         0x4
#define _PSMC1PHL_PSMC1PH4_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH4_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH4_MASK                             0x10
#define _PSMC1PHL_PSMC1PH5_POSN                             0x5
#define _PSMC1PHL_PSMC1PH5_POSITION                         0x5
#define _PSMC1PHL_PSMC1PH5_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH5_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH5_MASK                             0x20
#define _PSMC1PHL_PSMC1PH6_POSN                             0x6
#define _PSMC1PHL_PSMC1PH6_POSITION                         0x6
#define _PSMC1PHL_PSMC1PH6_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH6_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH6_MASK                             0x40
#define _PSMC1PHL_PSMC1PH7_POSN                             0x7
#define _PSMC1PHL_PSMC1PH7_POSITION                         0x7
#define _PSMC1PHL_PSMC1PH7_SIZE                             0x1
#define _PSMC1PHL_PSMC1PH7_LENGTH                           0x1
#define _PSMC1PHL_PSMC1PH7_MASK                             0x80

// Register: PSMC1PHH
unsigned char           PSMC1PHH            ; //SWAP 0x822;
#ifndef _LIB_BUILD
asm("PSMC1PHH equ 0822h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PH8               :1;
        unsigned PSMC1PH9               :1;
        unsigned PSMC1PH10              :1;
        unsigned PSMC1PH11              :1;
        unsigned PSMC1PH12              :1;
        unsigned PSMC1PH13              :1;
        unsigned PSMC1PH14              :1;
        unsigned PSMC1PH15              :1;
    };
} PSMC1PHHbits_t;
PSMC1PHHbits_t PSMC1PHHbits ; //SWAP 0x822;
// bitfield macros
#define _PSMC1PHH_PSMC1PH8_POSN                             0x0
#define _PSMC1PHH_PSMC1PH8_POSITION                         0x0
#define _PSMC1PHH_PSMC1PH8_SIZE                             0x1
#define _PSMC1PHH_PSMC1PH8_LENGTH                           0x1
#define _PSMC1PHH_PSMC1PH8_MASK                             0x1
#define _PSMC1PHH_PSMC1PH9_POSN                             0x1
#define _PSMC1PHH_PSMC1PH9_POSITION                         0x1
#define _PSMC1PHH_PSMC1PH9_SIZE                             0x1
#define _PSMC1PHH_PSMC1PH9_LENGTH                           0x1
#define _PSMC1PHH_PSMC1PH9_MASK                             0x2
#define _PSMC1PHH_PSMC1PH10_POSN                            0x2
#define _PSMC1PHH_PSMC1PH10_POSITION                        0x2
#define _PSMC1PHH_PSMC1PH10_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH10_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH10_MASK                            0x4
#define _PSMC1PHH_PSMC1PH11_POSN                            0x3
#define _PSMC1PHH_PSMC1PH11_POSITION                        0x3
#define _PSMC1PHH_PSMC1PH11_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH11_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH11_MASK                            0x8
#define _PSMC1PHH_PSMC1PH12_POSN                            0x4
#define _PSMC1PHH_PSMC1PH12_POSITION                        0x4
#define _PSMC1PHH_PSMC1PH12_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH12_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH12_MASK                            0x10
#define _PSMC1PHH_PSMC1PH13_POSN                            0x5
#define _PSMC1PHH_PSMC1PH13_POSITION                        0x5
#define _PSMC1PHH_PSMC1PH13_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH13_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH13_MASK                            0x20
#define _PSMC1PHH_PSMC1PH14_POSN                            0x6
#define _PSMC1PHH_PSMC1PH14_POSITION                        0x6
#define _PSMC1PHH_PSMC1PH14_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH14_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH14_MASK                            0x40
#define _PSMC1PHH_PSMC1PH15_POSN                            0x7
#define _PSMC1PHH_PSMC1PH15_POSITION                        0x7
#define _PSMC1PHH_PSMC1PH15_SIZE                            0x1
#define _PSMC1PHH_PSMC1PH15_LENGTH                          0x1
#define _PSMC1PHH_PSMC1PH15_MASK                            0x80

// Register: PSMC1DC
unsigned short          PSMC1DC             ; //SWAP 0x823;
#ifndef _LIB_BUILD
asm("PSMC1DC equ 0823h");
#endif

// Register: PSMC1DCL
unsigned char           PSMC1DCL            ; //SWAP 0x823;
#ifndef _LIB_BUILD
asm("PSMC1DCL equ 0823h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DC0               :1;
        unsigned PSMC1DC1               :1;
        unsigned PSMC1DC2               :1;
        unsigned PSMC1DC3               :1;
        unsigned PSMC1DC4               :1;
        unsigned PSMC1DC5               :1;
        unsigned PSMC1DC6               :1;
        unsigned PSMC1DC7               :1;
    };
} PSMC1DCLbits_t;
PSMC1DCLbits_t PSMC1DCLbits ; //SWAP 0x823;
// bitfield macros
#define _PSMC1DCL_PSMC1DC0_POSN                             0x0
#define _PSMC1DCL_PSMC1DC0_POSITION                         0x0
#define _PSMC1DCL_PSMC1DC0_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC0_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC0_MASK                             0x1
#define _PSMC1DCL_PSMC1DC1_POSN                             0x1
#define _PSMC1DCL_PSMC1DC1_POSITION                         0x1
#define _PSMC1DCL_PSMC1DC1_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC1_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC1_MASK                             0x2
#define _PSMC1DCL_PSMC1DC2_POSN                             0x2
#define _PSMC1DCL_PSMC1DC2_POSITION                         0x2
#define _PSMC1DCL_PSMC1DC2_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC2_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC2_MASK                             0x4
#define _PSMC1DCL_PSMC1DC3_POSN                             0x3
#define _PSMC1DCL_PSMC1DC3_POSITION                         0x3
#define _PSMC1DCL_PSMC1DC3_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC3_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC3_MASK                             0x8
#define _PSMC1DCL_PSMC1DC4_POSN                             0x4
#define _PSMC1DCL_PSMC1DC4_POSITION                         0x4
#define _PSMC1DCL_PSMC1DC4_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC4_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC4_MASK                             0x10
#define _PSMC1DCL_PSMC1DC5_POSN                             0x5
#define _PSMC1DCL_PSMC1DC5_POSITION                         0x5
#define _PSMC1DCL_PSMC1DC5_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC5_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC5_MASK                             0x20
#define _PSMC1DCL_PSMC1DC6_POSN                             0x6
#define _PSMC1DCL_PSMC1DC6_POSITION                         0x6
#define _PSMC1DCL_PSMC1DC6_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC6_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC6_MASK                             0x40
#define _PSMC1DCL_PSMC1DC7_POSN                             0x7
#define _PSMC1DCL_PSMC1DC7_POSITION                         0x7
#define _PSMC1DCL_PSMC1DC7_SIZE                             0x1
#define _PSMC1DCL_PSMC1DC7_LENGTH                           0x1
#define _PSMC1DCL_PSMC1DC7_MASK                             0x80

// Register: PSMC1DCH
unsigned char           PSMC1DCH            ; //SWAP 0x824;
#ifndef _LIB_BUILD
asm("PSMC1DCH equ 0824h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DC8               :1;
        unsigned PSMC1DC9               :1;
        unsigned PSMC1DC10              :1;
        unsigned PSMC1DC11              :1;
        unsigned PSMC1DC12              :1;
        unsigned PSMC1DC13              :1;
        unsigned PSMC1DC14              :1;
        unsigned PSMC1DC15              :1;
    };
} PSMC1DCHbits_t;
PSMC1DCHbits_t PSMC1DCHbits ; //SWAP 0x824;
// bitfield macros
#define _PSMC1DCH_PSMC1DC8_POSN                             0x0
#define _PSMC1DCH_PSMC1DC8_POSITION                         0x0
#define _PSMC1DCH_PSMC1DC8_SIZE                             0x1
#define _PSMC1DCH_PSMC1DC8_LENGTH                           0x1
#define _PSMC1DCH_PSMC1DC8_MASK                             0x1
#define _PSMC1DCH_PSMC1DC9_POSN                             0x1
#define _PSMC1DCH_PSMC1DC9_POSITION                         0x1
#define _PSMC1DCH_PSMC1DC9_SIZE                             0x1
#define _PSMC1DCH_PSMC1DC9_LENGTH                           0x1
#define _PSMC1DCH_PSMC1DC9_MASK                             0x2
#define _PSMC1DCH_PSMC1DC10_POSN                            0x2
#define _PSMC1DCH_PSMC1DC10_POSITION                        0x2
#define _PSMC1DCH_PSMC1DC10_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC10_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC10_MASK                            0x4
#define _PSMC1DCH_PSMC1DC11_POSN                            0x3
#define _PSMC1DCH_PSMC1DC11_POSITION                        0x3
#define _PSMC1DCH_PSMC1DC11_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC11_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC11_MASK                            0x8
#define _PSMC1DCH_PSMC1DC12_POSN                            0x4
#define _PSMC1DCH_PSMC1DC12_POSITION                        0x4
#define _PSMC1DCH_PSMC1DC12_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC12_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC12_MASK                            0x10
#define _PSMC1DCH_PSMC1DC13_POSN                            0x5
#define _PSMC1DCH_PSMC1DC13_POSITION                        0x5
#define _PSMC1DCH_PSMC1DC13_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC13_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC13_MASK                            0x20
#define _PSMC1DCH_PSMC1DC14_POSN                            0x6
#define _PSMC1DCH_PSMC1DC14_POSITION                        0x6
#define _PSMC1DCH_PSMC1DC14_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC14_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC14_MASK                            0x40
#define _PSMC1DCH_PSMC1DC15_POSN                            0x7
#define _PSMC1DCH_PSMC1DC15_POSITION                        0x7
#define _PSMC1DCH_PSMC1DC15_SIZE                            0x1
#define _PSMC1DCH_PSMC1DC15_LENGTH                          0x1
#define _PSMC1DCH_PSMC1DC15_MASK                            0x80

// Register: PSMC1PR
unsigned short          PSMC1PR             ; //SWAP 0x825;
#ifndef _LIB_BUILD
asm("PSMC1PR equ 0825h");
#endif

// Register: PSMC1PRL
unsigned char           PSMC1PRL            ; //SWAP 0x825;
#ifndef _LIB_BUILD
asm("PSMC1PRL equ 0825h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PR0               :1;
        unsigned PSMC1PR1               :1;
        unsigned PSMC1PR2               :1;
        unsigned PSMC1PR3               :1;
        unsigned PSMC1PR4               :1;
        unsigned PSMC1PR5               :1;
        unsigned PSMC1PR6               :1;
        unsigned PSMC1PR7               :1;
    };
} PSMC1PRLbits_t;
PSMC1PRLbits_t PSMC1PRLbits ; //SWAP 0x825;
// bitfield macros
#define _PSMC1PRL_PSMC1PR0_POSN                             0x0
#define _PSMC1PRL_PSMC1PR0_POSITION                         0x0
#define _PSMC1PRL_PSMC1PR0_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR0_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR0_MASK                             0x1
#define _PSMC1PRL_PSMC1PR1_POSN                             0x1
#define _PSMC1PRL_PSMC1PR1_POSITION                         0x1
#define _PSMC1PRL_PSMC1PR1_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR1_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR1_MASK                             0x2
#define _PSMC1PRL_PSMC1PR2_POSN                             0x2
#define _PSMC1PRL_PSMC1PR2_POSITION                         0x2
#define _PSMC1PRL_PSMC1PR2_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR2_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR2_MASK                             0x4
#define _PSMC1PRL_PSMC1PR3_POSN                             0x3
#define _PSMC1PRL_PSMC1PR3_POSITION                         0x3
#define _PSMC1PRL_PSMC1PR3_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR3_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR3_MASK                             0x8
#define _PSMC1PRL_PSMC1PR4_POSN                             0x4
#define _PSMC1PRL_PSMC1PR4_POSITION                         0x4
#define _PSMC1PRL_PSMC1PR4_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR4_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR4_MASK                             0x10
#define _PSMC1PRL_PSMC1PR5_POSN                             0x5
#define _PSMC1PRL_PSMC1PR5_POSITION                         0x5
#define _PSMC1PRL_PSMC1PR5_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR5_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR5_MASK                             0x20
#define _PSMC1PRL_PSMC1PR6_POSN                             0x6
#define _PSMC1PRL_PSMC1PR6_POSITION                         0x6
#define _PSMC1PRL_PSMC1PR6_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR6_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR6_MASK                             0x40
#define _PSMC1PRL_PSMC1PR7_POSN                             0x7
#define _PSMC1PRL_PSMC1PR7_POSITION                         0x7
#define _PSMC1PRL_PSMC1PR7_SIZE                             0x1
#define _PSMC1PRL_PSMC1PR7_LENGTH                           0x1
#define _PSMC1PRL_PSMC1PR7_MASK                             0x80

// Register: PSMC1PRH
unsigned char           PSMC1PRH            ; //SWAP 0x826;
#ifndef _LIB_BUILD
asm("PSMC1PRH equ 0826h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1PR8               :1;
        unsigned PSMC1PR9               :1;
        unsigned PSMC1PR10              :1;
        unsigned PSMC1PR11              :1;
        unsigned PSMC1PR12              :1;
        unsigned PSMC1PR13              :1;
        unsigned PSMC1PR14              :1;
        unsigned PSMC1PR15              :1;
    };
} PSMC1PRHbits_t;
PSMC1PRHbits_t PSMC1PRHbits ; //SWAP 0x826;
// bitfield macros
#define _PSMC1PRH_PSMC1PR8_POSN                             0x0
#define _PSMC1PRH_PSMC1PR8_POSITION                         0x0
#define _PSMC1PRH_PSMC1PR8_SIZE                             0x1
#define _PSMC1PRH_PSMC1PR8_LENGTH                           0x1
#define _PSMC1PRH_PSMC1PR8_MASK                             0x1
#define _PSMC1PRH_PSMC1PR9_POSN                             0x1
#define _PSMC1PRH_PSMC1PR9_POSITION                         0x1
#define _PSMC1PRH_PSMC1PR9_SIZE                             0x1
#define _PSMC1PRH_PSMC1PR9_LENGTH                           0x1
#define _PSMC1PRH_PSMC1PR9_MASK                             0x2
#define _PSMC1PRH_PSMC1PR10_POSN                            0x2
#define _PSMC1PRH_PSMC1PR10_POSITION                        0x2
#define _PSMC1PRH_PSMC1PR10_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR10_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR10_MASK                            0x4
#define _PSMC1PRH_PSMC1PR11_POSN                            0x3
#define _PSMC1PRH_PSMC1PR11_POSITION                        0x3
#define _PSMC1PRH_PSMC1PR11_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR11_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR11_MASK                            0x8
#define _PSMC1PRH_PSMC1PR12_POSN                            0x4
#define _PSMC1PRH_PSMC1PR12_POSITION                        0x4
#define _PSMC1PRH_PSMC1PR12_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR12_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR12_MASK                            0x10
#define _PSMC1PRH_PSMC1PR13_POSN                            0x5
#define _PSMC1PRH_PSMC1PR13_POSITION                        0x5
#define _PSMC1PRH_PSMC1PR13_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR13_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR13_MASK                            0x20
#define _PSMC1PRH_PSMC1PR14_POSN                            0x6
#define _PSMC1PRH_PSMC1PR14_POSITION                        0x6
#define _PSMC1PRH_PSMC1PR14_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR14_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR14_MASK                            0x40
#define _PSMC1PRH_PSMC1PR15_POSN                            0x7
#define _PSMC1PRH_PSMC1PR15_POSITION                        0x7
#define _PSMC1PRH_PSMC1PR15_SIZE                            0x1
#define _PSMC1PRH_PSMC1PR15_LENGTH                          0x1
#define _PSMC1PRH_PSMC1PR15_MASK                            0x80

// Register: PSMC1TMR
unsigned short          PSMC1TMR            ; //SWAP 0x827;
#ifndef _LIB_BUILD
asm("PSMC1TMR equ 0827h");
#endif

// Register: PSMC1TMRL
unsigned char           PSMC1TMRL           ; //SWAP 0x827;
#ifndef _LIB_BUILD
asm("PSMC1TMRL equ 0827h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1TMR0              :1;
        unsigned PSMC1TMR1              :1;
        unsigned PSMC1TMR2              :1;
        unsigned PSMC1TMR3              :1;
        unsigned PSMC1TMR4              :1;
        unsigned PSMC1TMR5              :1;
        unsigned PSMC1TMR6              :1;
        unsigned PSMC1TMR7              :1;
    };
} PSMC1TMRLbits_t;
PSMC1TMRLbits_t PSMC1TMRLbits ; //SWAP 0x827;
// bitfield macros
#define _PSMC1TMRL_PSMC1TMR0_POSN                           0x0
#define _PSMC1TMRL_PSMC1TMR0_POSITION                       0x0
#define _PSMC1TMRL_PSMC1TMR0_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR0_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR0_MASK                           0x1
#define _PSMC1TMRL_PSMC1TMR1_POSN                           0x1
#define _PSMC1TMRL_PSMC1TMR1_POSITION                       0x1
#define _PSMC1TMRL_PSMC1TMR1_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR1_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR1_MASK                           0x2
#define _PSMC1TMRL_PSMC1TMR2_POSN                           0x2
#define _PSMC1TMRL_PSMC1TMR2_POSITION                       0x2
#define _PSMC1TMRL_PSMC1TMR2_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR2_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR2_MASK                           0x4
#define _PSMC1TMRL_PSMC1TMR3_POSN                           0x3
#define _PSMC1TMRL_PSMC1TMR3_POSITION                       0x3
#define _PSMC1TMRL_PSMC1TMR3_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR3_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR3_MASK                           0x8
#define _PSMC1TMRL_PSMC1TMR4_POSN                           0x4
#define _PSMC1TMRL_PSMC1TMR4_POSITION                       0x4
#define _PSMC1TMRL_PSMC1TMR4_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR4_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR4_MASK                           0x10
#define _PSMC1TMRL_PSMC1TMR5_POSN                           0x5
#define _PSMC1TMRL_PSMC1TMR5_POSITION                       0x5
#define _PSMC1TMRL_PSMC1TMR5_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR5_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR5_MASK                           0x20
#define _PSMC1TMRL_PSMC1TMR6_POSN                           0x6
#define _PSMC1TMRL_PSMC1TMR6_POSITION                       0x6
#define _PSMC1TMRL_PSMC1TMR6_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR6_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR6_MASK                           0x40
#define _PSMC1TMRL_PSMC1TMR7_POSN                           0x7
#define _PSMC1TMRL_PSMC1TMR7_POSITION                       0x7
#define _PSMC1TMRL_PSMC1TMR7_SIZE                           0x1
#define _PSMC1TMRL_PSMC1TMR7_LENGTH                         0x1
#define _PSMC1TMRL_PSMC1TMR7_MASK                           0x80

// Register: PSMC1TMRH
unsigned char           PSMC1TMRH           ; //SWAP 0x828;
#ifndef _LIB_BUILD
asm("PSMC1TMRH equ 0828h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1TMR8              :1;
        unsigned PSMC1TMR9              :1;
        unsigned PSMC1TMR10             :1;
        unsigned PSMC1TMR11             :1;
        unsigned PSMC1TMR12             :1;
        unsigned PSMC1TMR13             :1;
        unsigned PSMC1TMR14             :1;
        unsigned PSMC1TMR15             :1;
    };
} PSMC1TMRHbits_t;
PSMC1TMRHbits_t PSMC1TMRHbits ; //SWAP 0x828;
// bitfield macros
#define _PSMC1TMRH_PSMC1TMR8_POSN                           0x0
#define _PSMC1TMRH_PSMC1TMR8_POSITION                       0x0
#define _PSMC1TMRH_PSMC1TMR8_SIZE                           0x1
#define _PSMC1TMRH_PSMC1TMR8_LENGTH                         0x1
#define _PSMC1TMRH_PSMC1TMR8_MASK                           0x1
#define _PSMC1TMRH_PSMC1TMR9_POSN                           0x1
#define _PSMC1TMRH_PSMC1TMR9_POSITION                       0x1
#define _PSMC1TMRH_PSMC1TMR9_SIZE                           0x1
#define _PSMC1TMRH_PSMC1TMR9_LENGTH                         0x1
#define _PSMC1TMRH_PSMC1TMR9_MASK                           0x2
#define _PSMC1TMRH_PSMC1TMR10_POSN                          0x2
#define _PSMC1TMRH_PSMC1TMR10_POSITION                      0x2
#define _PSMC1TMRH_PSMC1TMR10_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR10_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR10_MASK                          0x4
#define _PSMC1TMRH_PSMC1TMR11_POSN                          0x3
#define _PSMC1TMRH_PSMC1TMR11_POSITION                      0x3
#define _PSMC1TMRH_PSMC1TMR11_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR11_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR11_MASK                          0x8
#define _PSMC1TMRH_PSMC1TMR12_POSN                          0x4
#define _PSMC1TMRH_PSMC1TMR12_POSITION                      0x4
#define _PSMC1TMRH_PSMC1TMR12_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR12_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR12_MASK                          0x10
#define _PSMC1TMRH_PSMC1TMR13_POSN                          0x5
#define _PSMC1TMRH_PSMC1TMR13_POSITION                      0x5
#define _PSMC1TMRH_PSMC1TMR13_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR13_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR13_MASK                          0x20
#define _PSMC1TMRH_PSMC1TMR14_POSN                          0x6
#define _PSMC1TMRH_PSMC1TMR14_POSITION                      0x6
#define _PSMC1TMRH_PSMC1TMR14_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR14_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR14_MASK                          0x40
#define _PSMC1TMRH_PSMC1TMR15_POSN                          0x7
#define _PSMC1TMRH_PSMC1TMR15_POSITION                      0x7
#define _PSMC1TMRH_PSMC1TMR15_SIZE                          0x1
#define _PSMC1TMRH_PSMC1TMR15_LENGTH                        0x1
#define _PSMC1TMRH_PSMC1TMR15_MASK                          0x80

// Register: PSMC1DBR
unsigned char           PSMC1DBR            ; //SWAP 0x829;
#ifndef _LIB_BUILD
asm("PSMC1DBR equ 0829h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DBR0              :1;
        unsigned PSMC1DBR1              :1;
        unsigned PSMC1DBR2              :1;
        unsigned PSMC1DBR3              :1;
        unsigned PSMC1DBR4              :1;
        unsigned PSMC1DBR5              :1;
        unsigned PSMC1DBR6              :1;
        unsigned PSMC1DBR7              :1;
    };
} PSMC1DBRbits_t;
PSMC1DBRbits_t PSMC1DBRbits ; //SWAP 0x829;
// bitfield macros
#define _PSMC1DBR_PSMC1DBR0_POSN                            0x0
#define _PSMC1DBR_PSMC1DBR0_POSITION                        0x0
#define _PSMC1DBR_PSMC1DBR0_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR0_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR0_MASK                            0x1
#define _PSMC1DBR_PSMC1DBR1_POSN                            0x1
#define _PSMC1DBR_PSMC1DBR1_POSITION                        0x1
#define _PSMC1DBR_PSMC1DBR1_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR1_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR1_MASK                            0x2
#define _PSMC1DBR_PSMC1DBR2_POSN                            0x2
#define _PSMC1DBR_PSMC1DBR2_POSITION                        0x2
#define _PSMC1DBR_PSMC1DBR2_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR2_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR2_MASK                            0x4
#define _PSMC1DBR_PSMC1DBR3_POSN                            0x3
#define _PSMC1DBR_PSMC1DBR3_POSITION                        0x3
#define _PSMC1DBR_PSMC1DBR3_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR3_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR3_MASK                            0x8
#define _PSMC1DBR_PSMC1DBR4_POSN                            0x4
#define _PSMC1DBR_PSMC1DBR4_POSITION                        0x4
#define _PSMC1DBR_PSMC1DBR4_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR4_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR4_MASK                            0x10
#define _PSMC1DBR_PSMC1DBR5_POSN                            0x5
#define _PSMC1DBR_PSMC1DBR5_POSITION                        0x5
#define _PSMC1DBR_PSMC1DBR5_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR5_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR5_MASK                            0x20
#define _PSMC1DBR_PSMC1DBR6_POSN                            0x6
#define _PSMC1DBR_PSMC1DBR6_POSITION                        0x6
#define _PSMC1DBR_PSMC1DBR6_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR6_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR6_MASK                            0x40
#define _PSMC1DBR_PSMC1DBR7_POSN                            0x7
#define _PSMC1DBR_PSMC1DBR7_POSITION                        0x7
#define _PSMC1DBR_PSMC1DBR7_SIZE                            0x1
#define _PSMC1DBR_PSMC1DBR7_LENGTH                          0x1
#define _PSMC1DBR_PSMC1DBR7_MASK                            0x80

// Register: PSMC1DBF
unsigned char           PSMC1DBF            ; //SWAP 0x82A;
#ifndef _LIB_BUILD
asm("PSMC1DBF equ 082Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1DBF0              :1;
        unsigned PSMC1DBF1              :1;
        unsigned PSMC1DBF2              :1;
        unsigned PSMC1DBF3              :1;
        unsigned PSMC1DBF4              :1;
        unsigned PSMC1DBF5              :1;
        unsigned PSMC1DBF6              :1;
        unsigned PSMC1DBF7              :1;
    };
} PSMC1DBFbits_t;
PSMC1DBFbits_t PSMC1DBFbits ; //SWAP 0x82A;
// bitfield macros
#define _PSMC1DBF_PSMC1DBF0_POSN                            0x0
#define _PSMC1DBF_PSMC1DBF0_POSITION                        0x0
#define _PSMC1DBF_PSMC1DBF0_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF0_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF0_MASK                            0x1
#define _PSMC1DBF_PSMC1DBF1_POSN                            0x1
#define _PSMC1DBF_PSMC1DBF1_POSITION                        0x1
#define _PSMC1DBF_PSMC1DBF1_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF1_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF1_MASK                            0x2
#define _PSMC1DBF_PSMC1DBF2_POSN                            0x2
#define _PSMC1DBF_PSMC1DBF2_POSITION                        0x2
#define _PSMC1DBF_PSMC1DBF2_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF2_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF2_MASK                            0x4
#define _PSMC1DBF_PSMC1DBF3_POSN                            0x3
#define _PSMC1DBF_PSMC1DBF3_POSITION                        0x3
#define _PSMC1DBF_PSMC1DBF3_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF3_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF3_MASK                            0x8
#define _PSMC1DBF_PSMC1DBF4_POSN                            0x4
#define _PSMC1DBF_PSMC1DBF4_POSITION                        0x4
#define _PSMC1DBF_PSMC1DBF4_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF4_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF4_MASK                            0x10
#define _PSMC1DBF_PSMC1DBF5_POSN                            0x5
#define _PSMC1DBF_PSMC1DBF5_POSITION                        0x5
#define _PSMC1DBF_PSMC1DBF5_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF5_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF5_MASK                            0x20
#define _PSMC1DBF_PSMC1DBF6_POSN                            0x6
#define _PSMC1DBF_PSMC1DBF6_POSITION                        0x6
#define _PSMC1DBF_PSMC1DBF6_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF6_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF6_MASK                            0x40
#define _PSMC1DBF_PSMC1DBF7_POSN                            0x7
#define _PSMC1DBF_PSMC1DBF7_POSITION                        0x7
#define _PSMC1DBF_PSMC1DBF7_SIZE                            0x1
#define _PSMC1DBF_PSMC1DBF7_LENGTH                          0x1
#define _PSMC1DBF_PSMC1DBF7_MASK                            0x80

// Register: PSMC1BLKR
unsigned char           PSMC1BLKR           ; //SWAP 0x82B;
#ifndef _LIB_BUILD
asm("PSMC1BLKR equ 082Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1BLKR0             :1;
        unsigned PSMC1BLKR1             :1;
        unsigned PSMC1BLKR2             :1;
        unsigned PSMC1BLKR3             :1;
        unsigned PSMC1BLKR4             :1;
        unsigned PSMC1BLKR5             :1;
        unsigned PSMC1BLKR6             :1;
        unsigned PSMC1BLKR7             :1;
    };
} PSMC1BLKRbits_t;
PSMC1BLKRbits_t PSMC1BLKRbits ; //SWAP 0x82B;
// bitfield macros
#define _PSMC1BLKR_PSMC1BLKR0_POSN                          0x0
#define _PSMC1BLKR_PSMC1BLKR0_POSITION                      0x0
#define _PSMC1BLKR_PSMC1BLKR0_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR0_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR0_MASK                          0x1
#define _PSMC1BLKR_PSMC1BLKR1_POSN                          0x1
#define _PSMC1BLKR_PSMC1BLKR1_POSITION                      0x1
#define _PSMC1BLKR_PSMC1BLKR1_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR1_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR1_MASK                          0x2
#define _PSMC1BLKR_PSMC1BLKR2_POSN                          0x2
#define _PSMC1BLKR_PSMC1BLKR2_POSITION                      0x2
#define _PSMC1BLKR_PSMC1BLKR2_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR2_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR2_MASK                          0x4
#define _PSMC1BLKR_PSMC1BLKR3_POSN                          0x3
#define _PSMC1BLKR_PSMC1BLKR3_POSITION                      0x3
#define _PSMC1BLKR_PSMC1BLKR3_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR3_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR3_MASK                          0x8
#define _PSMC1BLKR_PSMC1BLKR4_POSN                          0x4
#define _PSMC1BLKR_PSMC1BLKR4_POSITION                      0x4
#define _PSMC1BLKR_PSMC1BLKR4_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR4_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR4_MASK                          0x10
#define _PSMC1BLKR_PSMC1BLKR5_POSN                          0x5
#define _PSMC1BLKR_PSMC1BLKR5_POSITION                      0x5
#define _PSMC1BLKR_PSMC1BLKR5_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR5_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR5_MASK                          0x20
#define _PSMC1BLKR_PSMC1BLKR6_POSN                          0x6
#define _PSMC1BLKR_PSMC1BLKR6_POSITION                      0x6
#define _PSMC1BLKR_PSMC1BLKR6_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR6_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR6_MASK                          0x40
#define _PSMC1BLKR_PSMC1BLKR7_POSN                          0x7
#define _PSMC1BLKR_PSMC1BLKR7_POSITION                      0x7
#define _PSMC1BLKR_PSMC1BLKR7_SIZE                          0x1
#define _PSMC1BLKR_PSMC1BLKR7_LENGTH                        0x1
#define _PSMC1BLKR_PSMC1BLKR7_MASK                          0x80

// Register: PSMC1BLKF
unsigned char           PSMC1BLKF           ; //SWAP 0x82C;
#ifndef _LIB_BUILD
asm("PSMC1BLKF equ 082Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1BLKF0             :1;
        unsigned PSMC1BLKF1             :1;
        unsigned PSMC1BLKF2             :1;
        unsigned PSMC1BLKF3             :1;
        unsigned PSMC1BLKF4             :1;
        unsigned PSMC1BLKF5             :1;
        unsigned PSMC1BLKF6             :1;
        unsigned PSMC1BLKF7             :1;
    };
} PSMC1BLKFbits_t;
PSMC1BLKFbits_t PSMC1BLKFbits ; //SWAP 0x82C;
// bitfield macros
#define _PSMC1BLKF_PSMC1BLKF0_POSN                          0x0
#define _PSMC1BLKF_PSMC1BLKF0_POSITION                      0x0
#define _PSMC1BLKF_PSMC1BLKF0_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF0_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF0_MASK                          0x1
#define _PSMC1BLKF_PSMC1BLKF1_POSN                          0x1
#define _PSMC1BLKF_PSMC1BLKF1_POSITION                      0x1
#define _PSMC1BLKF_PSMC1BLKF1_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF1_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF1_MASK                          0x2
#define _PSMC1BLKF_PSMC1BLKF2_POSN                          0x2
#define _PSMC1BLKF_PSMC1BLKF2_POSITION                      0x2
#define _PSMC1BLKF_PSMC1BLKF2_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF2_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF2_MASK                          0x4
#define _PSMC1BLKF_PSMC1BLKF3_POSN                          0x3
#define _PSMC1BLKF_PSMC1BLKF3_POSITION                      0x3
#define _PSMC1BLKF_PSMC1BLKF3_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF3_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF3_MASK                          0x8
#define _PSMC1BLKF_PSMC1BLKF4_POSN                          0x4
#define _PSMC1BLKF_PSMC1BLKF4_POSITION                      0x4
#define _PSMC1BLKF_PSMC1BLKF4_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF4_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF4_MASK                          0x10
#define _PSMC1BLKF_PSMC1BLKF5_POSN                          0x5
#define _PSMC1BLKF_PSMC1BLKF5_POSITION                      0x5
#define _PSMC1BLKF_PSMC1BLKF5_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF5_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF5_MASK                          0x20
#define _PSMC1BLKF_PSMC1BLKF6_POSN                          0x6
#define _PSMC1BLKF_PSMC1BLKF6_POSITION                      0x6
#define _PSMC1BLKF_PSMC1BLKF6_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF6_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF6_MASK                          0x40
#define _PSMC1BLKF_PSMC1BLKF7_POSN                          0x7
#define _PSMC1BLKF_PSMC1BLKF7_POSITION                      0x7
#define _PSMC1BLKF_PSMC1BLKF7_SIZE                          0x1
#define _PSMC1BLKF_PSMC1BLKF7_LENGTH                        0x1
#define _PSMC1BLKF_PSMC1BLKF7_MASK                          0x80

// Register: PSMC1FFA
unsigned char           PSMC1FFA            ; //SWAP 0x82D;
#ifndef _LIB_BUILD
asm("PSMC1FFA equ 082Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC1FFA0              :1;
        unsigned PSMC1FFA1              :1;
        unsigned PSMC1FFA2              :1;
        unsigned PSMC1FFA3              :1;
    };
} PSMC1FFAbits_t;
PSMC1FFAbits_t PSMC1FFAbits ; //SWAP 0x82D;
// bitfield macros
#define _PSMC1FFA_PSMC1FFA0_POSN                            0x0
#define _PSMC1FFA_PSMC1FFA0_POSITION                        0x0
#define _PSMC1FFA_PSMC1FFA0_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA0_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA0_MASK                            0x1
#define _PSMC1FFA_PSMC1FFA1_POSN                            0x1
#define _PSMC1FFA_PSMC1FFA1_POSITION                        0x1
#define _PSMC1FFA_PSMC1FFA1_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA1_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA1_MASK                            0x2
#define _PSMC1FFA_PSMC1FFA2_POSN                            0x2
#define _PSMC1FFA_PSMC1FFA2_POSITION                        0x2
#define _PSMC1FFA_PSMC1FFA2_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA2_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA2_MASK                            0x4
#define _PSMC1FFA_PSMC1FFA3_POSN                            0x3
#define _PSMC1FFA_PSMC1FFA3_POSITION                        0x3
#define _PSMC1FFA_PSMC1FFA3_SIZE                            0x1
#define _PSMC1FFA_PSMC1FFA3_LENGTH                          0x1
#define _PSMC1FFA_PSMC1FFA3_MASK                            0x8

// Register: PSMC1STR0
unsigned char           PSMC1STR0           ; //SWAP 0x82E;
#ifndef _LIB_BUILD
asm("PSMC1STR0 equ 082Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1STRA                 :1;
        unsigned P1STRB                 :1;
        unsigned P1STRC                 :1;
        unsigned P1STRD                 :1;
        unsigned P1STRE                 :1;
        unsigned P1STRF                 :1;
    };
} PSMC1STR0bits_t;
PSMC1STR0bits_t PSMC1STR0bits ; //SWAP 0x82E;
// bitfield macros
#define _PSMC1STR0_P1STRA_POSN                              0x0
#define _PSMC1STR0_P1STRA_POSITION                          0x0
#define _PSMC1STR0_P1STRA_SIZE                              0x1
#define _PSMC1STR0_P1STRA_LENGTH                            0x1
#define _PSMC1STR0_P1STRA_MASK                              0x1
#define _PSMC1STR0_P1STRB_POSN                              0x1
#define _PSMC1STR0_P1STRB_POSITION                          0x1
#define _PSMC1STR0_P1STRB_SIZE                              0x1
#define _PSMC1STR0_P1STRB_LENGTH                            0x1
#define _PSMC1STR0_P1STRB_MASK                              0x2
#define _PSMC1STR0_P1STRC_POSN                              0x2
#define _PSMC1STR0_P1STRC_POSITION                          0x2
#define _PSMC1STR0_P1STRC_SIZE                              0x1
#define _PSMC1STR0_P1STRC_LENGTH                            0x1
#define _PSMC1STR0_P1STRC_MASK                              0x4
#define _PSMC1STR0_P1STRD_POSN                              0x3
#define _PSMC1STR0_P1STRD_POSITION                          0x3
#define _PSMC1STR0_P1STRD_SIZE                              0x1
#define _PSMC1STR0_P1STRD_LENGTH                            0x1
#define _PSMC1STR0_P1STRD_MASK                              0x8
#define _PSMC1STR0_P1STRE_POSN                              0x4
#define _PSMC1STR0_P1STRE_POSITION                          0x4
#define _PSMC1STR0_P1STRE_SIZE                              0x1
#define _PSMC1STR0_P1STRE_LENGTH                            0x1
#define _PSMC1STR0_P1STRE_MASK                              0x10
#define _PSMC1STR0_P1STRF_POSN                              0x5
#define _PSMC1STR0_P1STRF_POSITION                          0x5
#define _PSMC1STR0_P1STRF_SIZE                              0x1
#define _PSMC1STR0_P1STRF_LENGTH                            0x1
#define _PSMC1STR0_P1STRF_MASK                              0x20

// Register: PSMC1STR1
unsigned char           PSMC1STR1           ; //SWAP 0x82F;
#ifndef _LIB_BUILD
asm("PSMC1STR1 equ 082Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P1HSMEN                :1;
        unsigned P1LSMEN                :1;
        unsigned                        :5;
        unsigned P1SSYNC                :1;
    };
} PSMC1STR1bits_t;
PSMC1STR1bits_t PSMC1STR1bits ; //SWAP 0x82F;
// bitfield macros
#define _PSMC1STR1_P1HSMEN_POSN                             0x0
#define _PSMC1STR1_P1HSMEN_POSITION                         0x0
#define _PSMC1STR1_P1HSMEN_SIZE                             0x1
#define _PSMC1STR1_P1HSMEN_LENGTH                           0x1
#define _PSMC1STR1_P1HSMEN_MASK                             0x1
#define _PSMC1STR1_P1LSMEN_POSN                             0x1
#define _PSMC1STR1_P1LSMEN_POSITION                         0x1
#define _PSMC1STR1_P1LSMEN_SIZE                             0x1
#define _PSMC1STR1_P1LSMEN_LENGTH                           0x1
#define _PSMC1STR1_P1LSMEN_MASK                             0x2
#define _PSMC1STR1_P1SSYNC_POSN                             0x7
#define _PSMC1STR1_P1SSYNC_POSITION                         0x7
#define _PSMC1STR1_P1SSYNC_SIZE                             0x1
#define _PSMC1STR1_P1SSYNC_LENGTH                           0x1
#define _PSMC1STR1_P1SSYNC_MASK                             0x80

// Register: PSMC2CON
unsigned char           PSMC2CON            ; //SWAP 0x831;
#ifndef _LIB_BUILD
asm("PSMC2CON equ 0831h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2MODE                 :4;
        unsigned P2DBRE                 :1;
        unsigned P2DBFE                 :1;
        unsigned PSMC2LD                :1;
        unsigned PSMC2EN                :1;
    };
    struct {
        unsigned P2MODE0                :1;
        unsigned P2MODE1                :1;
        unsigned P2MODE2                :1;
        unsigned P2MODE3                :1;
    };
} PSMC2CONbits_t;
PSMC2CONbits_t PSMC2CONbits ; //SWAP 0x831;
// bitfield macros
#define _PSMC2CON_P2MODE_POSN                               0x0
#define _PSMC2CON_P2MODE_POSITION                           0x0
#define _PSMC2CON_P2MODE_SIZE                               0x4
#define _PSMC2CON_P2MODE_LENGTH                             0x4
#define _PSMC2CON_P2MODE_MASK                               0xF
#define _PSMC2CON_P2DBRE_POSN                               0x4
#define _PSMC2CON_P2DBRE_POSITION                           0x4
#define _PSMC2CON_P2DBRE_SIZE                               0x1
#define _PSMC2CON_P2DBRE_LENGTH                             0x1
#define _PSMC2CON_P2DBRE_MASK                               0x10
#define _PSMC2CON_P2DBFE_POSN                               0x5
#define _PSMC2CON_P2DBFE_POSITION                           0x5
#define _PSMC2CON_P2DBFE_SIZE                               0x1
#define _PSMC2CON_P2DBFE_LENGTH                             0x1
#define _PSMC2CON_P2DBFE_MASK                               0x20
#define _PSMC2CON_PSMC2LD_POSN                              0x6
#define _PSMC2CON_PSMC2LD_POSITION                          0x6
#define _PSMC2CON_PSMC2LD_SIZE                              0x1
#define _PSMC2CON_PSMC2LD_LENGTH                            0x1
#define _PSMC2CON_PSMC2LD_MASK                              0x40
#define _PSMC2CON_PSMC2EN_POSN                              0x7
#define _PSMC2CON_PSMC2EN_POSITION                          0x7
#define _PSMC2CON_PSMC2EN_SIZE                              0x1
#define _PSMC2CON_PSMC2EN_LENGTH                            0x1
#define _PSMC2CON_PSMC2EN_MASK                              0x80
#define _PSMC2CON_P2MODE0_POSN                              0x0
#define _PSMC2CON_P2MODE0_POSITION                          0x0
#define _PSMC2CON_P2MODE0_SIZE                              0x1
#define _PSMC2CON_P2MODE0_LENGTH                            0x1
#define _PSMC2CON_P2MODE0_MASK                              0x1
#define _PSMC2CON_P2MODE1_POSN                              0x1
#define _PSMC2CON_P2MODE1_POSITION                          0x1
#define _PSMC2CON_P2MODE1_SIZE                              0x1
#define _PSMC2CON_P2MODE1_LENGTH                            0x1
#define _PSMC2CON_P2MODE1_MASK                              0x2
#define _PSMC2CON_P2MODE2_POSN                              0x2
#define _PSMC2CON_P2MODE2_POSITION                          0x2
#define _PSMC2CON_P2MODE2_SIZE                              0x1
#define _PSMC2CON_P2MODE2_LENGTH                            0x1
#define _PSMC2CON_P2MODE2_MASK                              0x4
#define _PSMC2CON_P2MODE3_POSN                              0x3
#define _PSMC2CON_P2MODE3_POSITION                          0x3
#define _PSMC2CON_P2MODE3_SIZE                              0x1
#define _PSMC2CON_P2MODE3_LENGTH                            0x1
#define _PSMC2CON_P2MODE3_MASK                              0x8

// Register: PSMC2MDL
unsigned char           PSMC2MDL            ; //SWAP 0x832;
#ifndef _LIB_BUILD
asm("PSMC2MDL equ 0832h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2MSRC                 :4;
        unsigned                        :1;
        unsigned P2MDLBIT               :1;
        unsigned P2MDLPOL               :1;
        unsigned P2MDLEN                :1;
    };
    struct {
        unsigned P2MSRC0                :1;
        unsigned P2MSRC1                :1;
        unsigned P2MSRC2                :1;
        unsigned P2MSRC3                :1;
    };
} PSMC2MDLbits_t;
PSMC2MDLbits_t PSMC2MDLbits ; //SWAP 0x832;
// bitfield macros
#define _PSMC2MDL_P2MSRC_POSN                               0x0
#define _PSMC2MDL_P2MSRC_POSITION                           0x0
#define _PSMC2MDL_P2MSRC_SIZE                               0x4
#define _PSMC2MDL_P2MSRC_LENGTH                             0x4
#define _PSMC2MDL_P2MSRC_MASK                               0xF
#define _PSMC2MDL_P2MDLBIT_POSN                             0x5
#define _PSMC2MDL_P2MDLBIT_POSITION                         0x5
#define _PSMC2MDL_P2MDLBIT_SIZE                             0x1
#define _PSMC2MDL_P2MDLBIT_LENGTH                           0x1
#define _PSMC2MDL_P2MDLBIT_MASK                             0x20
#define _PSMC2MDL_P2MDLPOL_POSN                             0x6
#define _PSMC2MDL_P2MDLPOL_POSITION                         0x6
#define _PSMC2MDL_P2MDLPOL_SIZE                             0x1
#define _PSMC2MDL_P2MDLPOL_LENGTH                           0x1
#define _PSMC2MDL_P2MDLPOL_MASK                             0x40
#define _PSMC2MDL_P2MDLEN_POSN                              0x7
#define _PSMC2MDL_P2MDLEN_POSITION                          0x7
#define _PSMC2MDL_P2MDLEN_SIZE                              0x1
#define _PSMC2MDL_P2MDLEN_LENGTH                            0x1
#define _PSMC2MDL_P2MDLEN_MASK                              0x80
#define _PSMC2MDL_P2MSRC0_POSN                              0x0
#define _PSMC2MDL_P2MSRC0_POSITION                          0x0
#define _PSMC2MDL_P2MSRC0_SIZE                              0x1
#define _PSMC2MDL_P2MSRC0_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC0_MASK                              0x1
#define _PSMC2MDL_P2MSRC1_POSN                              0x1
#define _PSMC2MDL_P2MSRC1_POSITION                          0x1
#define _PSMC2MDL_P2MSRC1_SIZE                              0x1
#define _PSMC2MDL_P2MSRC1_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC1_MASK                              0x2
#define _PSMC2MDL_P2MSRC2_POSN                              0x2
#define _PSMC2MDL_P2MSRC2_POSITION                          0x2
#define _PSMC2MDL_P2MSRC2_SIZE                              0x1
#define _PSMC2MDL_P2MSRC2_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC2_MASK                              0x4
#define _PSMC2MDL_P2MSRC3_POSN                              0x3
#define _PSMC2MDL_P2MSRC3_POSITION                          0x3
#define _PSMC2MDL_P2MSRC3_SIZE                              0x1
#define _PSMC2MDL_P2MSRC3_LENGTH                            0x1
#define _PSMC2MDL_P2MSRC3_MASK                              0x8

// Register: PSMC2SYNC
unsigned char           PSMC2SYNC           ; //SWAP 0x833;
#ifndef _LIB_BUILD
asm("PSMC2SYNC equ 0833h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2SYNC0                :1;
        unsigned P2SYNC1                :1;
    };
} PSMC2SYNCbits_t;
PSMC2SYNCbits_t PSMC2SYNCbits ; //SWAP 0x833;
// bitfield macros
#define _PSMC2SYNC_P2SYNC0_POSN                             0x0
#define _PSMC2SYNC_P2SYNC0_POSITION                         0x0
#define _PSMC2SYNC_P2SYNC0_SIZE                             0x1
#define _PSMC2SYNC_P2SYNC0_LENGTH                           0x1
#define _PSMC2SYNC_P2SYNC0_MASK                             0x1
#define _PSMC2SYNC_P2SYNC1_POSN                             0x1
#define _PSMC2SYNC_P2SYNC1_POSITION                         0x1
#define _PSMC2SYNC_P2SYNC1_SIZE                             0x1
#define _PSMC2SYNC_P2SYNC1_LENGTH                           0x1
#define _PSMC2SYNC_P2SYNC1_MASK                             0x2

// Register: PSMC2CLK
unsigned char           PSMC2CLK            ; //SWAP 0x834;
#ifndef _LIB_BUILD
asm("PSMC2CLK equ 0834h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2CSRC0                :1;
        unsigned P2CSRC1                :1;
        unsigned                        :2;
        unsigned P2CPRE0                :1;
        unsigned P2CPRE1                :1;
    };
    struct {
        unsigned P2CSRC                 :2;
        unsigned                        :2;
        unsigned P2CPRE                 :2;
    };
} PSMC2CLKbits_t;
PSMC2CLKbits_t PSMC2CLKbits ; //SWAP 0x834;
// bitfield macros
#define _PSMC2CLK_P2CSRC0_POSN                              0x0
#define _PSMC2CLK_P2CSRC0_POSITION                          0x0
#define _PSMC2CLK_P2CSRC0_SIZE                              0x1
#define _PSMC2CLK_P2CSRC0_LENGTH                            0x1
#define _PSMC2CLK_P2CSRC0_MASK                              0x1
#define _PSMC2CLK_P2CSRC1_POSN                              0x1
#define _PSMC2CLK_P2CSRC1_POSITION                          0x1
#define _PSMC2CLK_P2CSRC1_SIZE                              0x1
#define _PSMC2CLK_P2CSRC1_LENGTH                            0x1
#define _PSMC2CLK_P2CSRC1_MASK                              0x2
#define _PSMC2CLK_P2CPRE0_POSN                              0x4
#define _PSMC2CLK_P2CPRE0_POSITION                          0x4
#define _PSMC2CLK_P2CPRE0_SIZE                              0x1
#define _PSMC2CLK_P2CPRE0_LENGTH                            0x1
#define _PSMC2CLK_P2CPRE0_MASK                              0x10
#define _PSMC2CLK_P2CPRE1_POSN                              0x5
#define _PSMC2CLK_P2CPRE1_POSITION                          0x5
#define _PSMC2CLK_P2CPRE1_SIZE                              0x1
#define _PSMC2CLK_P2CPRE1_LENGTH                            0x1
#define _PSMC2CLK_P2CPRE1_MASK                              0x20
#define _PSMC2CLK_P2CSRC_POSN                               0x0
#define _PSMC2CLK_P2CSRC_POSITION                           0x0
#define _PSMC2CLK_P2CSRC_SIZE                               0x2
#define _PSMC2CLK_P2CSRC_LENGTH                             0x2
#define _PSMC2CLK_P2CSRC_MASK                               0x3
#define _PSMC2CLK_P2CPRE_POSN                               0x4
#define _PSMC2CLK_P2CPRE_POSITION                           0x4
#define _PSMC2CLK_P2CPRE_SIZE                               0x2
#define _PSMC2CLK_P2CPRE_LENGTH                             0x2
#define _PSMC2CLK_P2CPRE_MASK                               0x30

// Register: PSMC2OEN
unsigned char           PSMC2OEN            ; //SWAP 0x835;
#ifndef _LIB_BUILD
asm("PSMC2OEN equ 0835h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2OEA                  :1;
        unsigned P2OEB                  :1;
    };
} PSMC2OENbits_t;
PSMC2OENbits_t PSMC2OENbits ; //SWAP 0x835;
// bitfield macros
#define _PSMC2OEN_P2OEA_POSN                                0x0
#define _PSMC2OEN_P2OEA_POSITION                            0x0
#define _PSMC2OEN_P2OEA_SIZE                                0x1
#define _PSMC2OEN_P2OEA_LENGTH                              0x1
#define _PSMC2OEN_P2OEA_MASK                                0x1
#define _PSMC2OEN_P2OEB_POSN                                0x1
#define _PSMC2OEN_P2OEB_POSITION                            0x1
#define _PSMC2OEN_P2OEB_SIZE                                0x1
#define _PSMC2OEN_P2OEB_LENGTH                              0x1
#define _PSMC2OEN_P2OEB_MASK                                0x2

// Register: PSMC2POL
unsigned char           PSMC2POL            ; //SWAP 0x836;
#ifndef _LIB_BUILD
asm("PSMC2POL equ 0836h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2POLA                 :1;
        unsigned P2POLB                 :1;
        unsigned                        :4;
        unsigned P2INPOL                :1;
    };
} PSMC2POLbits_t;
PSMC2POLbits_t PSMC2POLbits ; //SWAP 0x836;
// bitfield macros
#define _PSMC2POL_P2POLA_POSN                               0x0
#define _PSMC2POL_P2POLA_POSITION                           0x0
#define _PSMC2POL_P2POLA_SIZE                               0x1
#define _PSMC2POL_P2POLA_LENGTH                             0x1
#define _PSMC2POL_P2POLA_MASK                               0x1
#define _PSMC2POL_P2POLB_POSN                               0x1
#define _PSMC2POL_P2POLB_POSITION                           0x1
#define _PSMC2POL_P2POLB_SIZE                               0x1
#define _PSMC2POL_P2POLB_LENGTH                             0x1
#define _PSMC2POL_P2POLB_MASK                               0x2
#define _PSMC2POL_P2INPOL_POSN                              0x6
#define _PSMC2POL_P2INPOL_POSITION                          0x6
#define _PSMC2POL_P2INPOL_SIZE                              0x1
#define _PSMC2POL_P2INPOL_LENGTH                            0x1
#define _PSMC2POL_P2INPOL_MASK                              0x40

// Register: PSMC2BLNK
unsigned char           PSMC2BLNK           ; //SWAP 0x837;
#ifndef _LIB_BUILD
asm("PSMC2BLNK equ 0837h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2REBM                 :2;
        unsigned                        :2;
        unsigned P2FEBM                 :2;
    };
    struct {
        unsigned P2REBM0                :1;
        unsigned P2REBM1                :1;
        unsigned                        :2;
        unsigned P2FEBM0                :1;
        unsigned P2FEBM1                :1;
    };
} PSMC2BLNKbits_t;
PSMC2BLNKbits_t PSMC2BLNKbits ; //SWAP 0x837;
// bitfield macros
#define _PSMC2BLNK_P2REBM_POSN                              0x0
#define _PSMC2BLNK_P2REBM_POSITION                          0x0
#define _PSMC2BLNK_P2REBM_SIZE                              0x2
#define _PSMC2BLNK_P2REBM_LENGTH                            0x2
#define _PSMC2BLNK_P2REBM_MASK                              0x3
#define _PSMC2BLNK_P2FEBM_POSN                              0x4
#define _PSMC2BLNK_P2FEBM_POSITION                          0x4
#define _PSMC2BLNK_P2FEBM_SIZE                              0x2
#define _PSMC2BLNK_P2FEBM_LENGTH                            0x2
#define _PSMC2BLNK_P2FEBM_MASK                              0x30
#define _PSMC2BLNK_P2REBM0_POSN                             0x0
#define _PSMC2BLNK_P2REBM0_POSITION                         0x0
#define _PSMC2BLNK_P2REBM0_SIZE                             0x1
#define _PSMC2BLNK_P2REBM0_LENGTH                           0x1
#define _PSMC2BLNK_P2REBM0_MASK                             0x1
#define _PSMC2BLNK_P2REBM1_POSN                             0x1
#define _PSMC2BLNK_P2REBM1_POSITION                         0x1
#define _PSMC2BLNK_P2REBM1_SIZE                             0x1
#define _PSMC2BLNK_P2REBM1_LENGTH                           0x1
#define _PSMC2BLNK_P2REBM1_MASK                             0x2
#define _PSMC2BLNK_P2FEBM0_POSN                             0x4
#define _PSMC2BLNK_P2FEBM0_POSITION                         0x4
#define _PSMC2BLNK_P2FEBM0_SIZE                             0x1
#define _PSMC2BLNK_P2FEBM0_LENGTH                           0x1
#define _PSMC2BLNK_P2FEBM0_MASK                             0x10
#define _PSMC2BLNK_P2FEBM1_POSN                             0x5
#define _PSMC2BLNK_P2FEBM1_POSITION                         0x5
#define _PSMC2BLNK_P2FEBM1_SIZE                             0x1
#define _PSMC2BLNK_P2FEBM1_LENGTH                           0x1
#define _PSMC2BLNK_P2FEBM1_MASK                             0x20

// Register: PSMC2REBS
unsigned char           PSMC2REBS           ; //SWAP 0x838;
#ifndef _LIB_BUILD
asm("PSMC2REBS equ 0838h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P2REBSC1               :1;
        unsigned P2REBSC2               :1;
        unsigned P2REBSC3               :1;
        unsigned                        :3;
        unsigned P2REBSIN               :1;
    };
} PSMC2REBSbits_t;
PSMC2REBSbits_t PSMC2REBSbits ; //SWAP 0x838;
// bitfield macros
#define _PSMC2REBS_P2REBSC1_POSN                            0x1
#define _PSMC2REBS_P2REBSC1_POSITION                        0x1
#define _PSMC2REBS_P2REBSC1_SIZE                            0x1
#define _PSMC2REBS_P2REBSC1_LENGTH                          0x1
#define _PSMC2REBS_P2REBSC1_MASK                            0x2
#define _PSMC2REBS_P2REBSC2_POSN                            0x2
#define _PSMC2REBS_P2REBSC2_POSITION                        0x2
#define _PSMC2REBS_P2REBSC2_SIZE                            0x1
#define _PSMC2REBS_P2REBSC2_LENGTH                          0x1
#define _PSMC2REBS_P2REBSC2_MASK                            0x4
#define _PSMC2REBS_P2REBSC3_POSN                            0x3
#define _PSMC2REBS_P2REBSC3_POSITION                        0x3
#define _PSMC2REBS_P2REBSC3_SIZE                            0x1
#define _PSMC2REBS_P2REBSC3_LENGTH                          0x1
#define _PSMC2REBS_P2REBSC3_MASK                            0x8
#define _PSMC2REBS_P2REBSIN_POSN                            0x7
#define _PSMC2REBS_P2REBSIN_POSITION                        0x7
#define _PSMC2REBS_P2REBSIN_SIZE                            0x1
#define _PSMC2REBS_P2REBSIN_LENGTH                          0x1
#define _PSMC2REBS_P2REBSIN_MASK                            0x80

// Register: PSMC2FEBS
unsigned char           PSMC2FEBS           ; //SWAP 0x839;
#ifndef _LIB_BUILD
asm("PSMC2FEBS equ 0839h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P2FEBSC1               :1;
        unsigned P2FEBSC2               :1;
        unsigned P2FEBSC3               :1;
        unsigned                        :3;
        unsigned P2FEBSIN               :1;
    };
} PSMC2FEBSbits_t;
PSMC2FEBSbits_t PSMC2FEBSbits ; //SWAP 0x839;
// bitfield macros
#define _PSMC2FEBS_P2FEBSC1_POSN                            0x1
#define _PSMC2FEBS_P2FEBSC1_POSITION                        0x1
#define _PSMC2FEBS_P2FEBSC1_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSC1_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSC1_MASK                            0x2
#define _PSMC2FEBS_P2FEBSC2_POSN                            0x2
#define _PSMC2FEBS_P2FEBSC2_POSITION                        0x2
#define _PSMC2FEBS_P2FEBSC2_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSC2_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSC2_MASK                            0x4
#define _PSMC2FEBS_P2FEBSC3_POSN                            0x3
#define _PSMC2FEBS_P2FEBSC3_POSITION                        0x3
#define _PSMC2FEBS_P2FEBSC3_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSC3_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSC3_MASK                            0x8
#define _PSMC2FEBS_P2FEBSIN_POSN                            0x7
#define _PSMC2FEBS_P2FEBSIN_POSITION                        0x7
#define _PSMC2FEBS_P2FEBSIN_SIZE                            0x1
#define _PSMC2FEBS_P2FEBSIN_LENGTH                          0x1
#define _PSMC2FEBS_P2FEBSIN_MASK                            0x80

// Register: PSMC2PHS
unsigned char           PSMC2PHS            ; //SWAP 0x83A;
#ifndef _LIB_BUILD
asm("PSMC2PHS equ 083Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2PHST                 :1;
        unsigned P2PHSC1                :1;
        unsigned P2PHSC2                :1;
        unsigned P2PHSC3                :1;
        unsigned                        :3;
        unsigned P2PHSIN                :1;
    };
} PSMC2PHSbits_t;
PSMC2PHSbits_t PSMC2PHSbits ; //SWAP 0x83A;
// bitfield macros
#define _PSMC2PHS_P2PHST_POSN                               0x0
#define _PSMC2PHS_P2PHST_POSITION                           0x0
#define _PSMC2PHS_P2PHST_SIZE                               0x1
#define _PSMC2PHS_P2PHST_LENGTH                             0x1
#define _PSMC2PHS_P2PHST_MASK                               0x1
#define _PSMC2PHS_P2PHSC1_POSN                              0x1
#define _PSMC2PHS_P2PHSC1_POSITION                          0x1
#define _PSMC2PHS_P2PHSC1_SIZE                              0x1
#define _PSMC2PHS_P2PHSC1_LENGTH                            0x1
#define _PSMC2PHS_P2PHSC1_MASK                              0x2
#define _PSMC2PHS_P2PHSC2_POSN                              0x2
#define _PSMC2PHS_P2PHSC2_POSITION                          0x2
#define _PSMC2PHS_P2PHSC2_SIZE                              0x1
#define _PSMC2PHS_P2PHSC2_LENGTH                            0x1
#define _PSMC2PHS_P2PHSC2_MASK                              0x4
#define _PSMC2PHS_P2PHSC3_POSN                              0x3
#define _PSMC2PHS_P2PHSC3_POSITION                          0x3
#define _PSMC2PHS_P2PHSC3_SIZE                              0x1
#define _PSMC2PHS_P2PHSC3_LENGTH                            0x1
#define _PSMC2PHS_P2PHSC3_MASK                              0x8
#define _PSMC2PHS_P2PHSIN_POSN                              0x7
#define _PSMC2PHS_P2PHSIN_POSITION                          0x7
#define _PSMC2PHS_P2PHSIN_SIZE                              0x1
#define _PSMC2PHS_P2PHSIN_LENGTH                            0x1
#define _PSMC2PHS_P2PHSIN_MASK                              0x80

// Register: PSMC2DCS
unsigned char           PSMC2DCS            ; //SWAP 0x83B;
#ifndef _LIB_BUILD
asm("PSMC2DCS equ 083Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2DCST                 :1;
        unsigned P2DCSC1                :1;
        unsigned P2DCSC2                :1;
        unsigned P2DCSC3                :1;
        unsigned                        :3;
        unsigned P2DCSIN                :1;
    };
} PSMC2DCSbits_t;
PSMC2DCSbits_t PSMC2DCSbits ; //SWAP 0x83B;
// bitfield macros
#define _PSMC2DCS_P2DCST_POSN                               0x0
#define _PSMC2DCS_P2DCST_POSITION                           0x0
#define _PSMC2DCS_P2DCST_SIZE                               0x1
#define _PSMC2DCS_P2DCST_LENGTH                             0x1
#define _PSMC2DCS_P2DCST_MASK                               0x1
#define _PSMC2DCS_P2DCSC1_POSN                              0x1
#define _PSMC2DCS_P2DCSC1_POSITION                          0x1
#define _PSMC2DCS_P2DCSC1_SIZE                              0x1
#define _PSMC2DCS_P2DCSC1_LENGTH                            0x1
#define _PSMC2DCS_P2DCSC1_MASK                              0x2
#define _PSMC2DCS_P2DCSC2_POSN                              0x2
#define _PSMC2DCS_P2DCSC2_POSITION                          0x2
#define _PSMC2DCS_P2DCSC2_SIZE                              0x1
#define _PSMC2DCS_P2DCSC2_LENGTH                            0x1
#define _PSMC2DCS_P2DCSC2_MASK                              0x4
#define _PSMC2DCS_P2DCSC3_POSN                              0x3
#define _PSMC2DCS_P2DCSC3_POSITION                          0x3
#define _PSMC2DCS_P2DCSC3_SIZE                              0x1
#define _PSMC2DCS_P2DCSC3_LENGTH                            0x1
#define _PSMC2DCS_P2DCSC3_MASK                              0x8
#define _PSMC2DCS_P2DCSIN_POSN                              0x7
#define _PSMC2DCS_P2DCSIN_POSITION                          0x7
#define _PSMC2DCS_P2DCSIN_SIZE                              0x1
#define _PSMC2DCS_P2DCSIN_LENGTH                            0x1
#define _PSMC2DCS_P2DCSIN_MASK                              0x80

// Register: PSMC2PRS
unsigned char           PSMC2PRS            ; //SWAP 0x83C;
#ifndef _LIB_BUILD
asm("PSMC2PRS equ 083Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2PRST                 :1;
        unsigned P2PRSC1                :1;
        unsigned P2PRSC2                :1;
        unsigned P2PRSC3                :1;
        unsigned                        :3;
        unsigned P2PRSIN                :1;
    };
} PSMC2PRSbits_t;
PSMC2PRSbits_t PSMC2PRSbits ; //SWAP 0x83C;
// bitfield macros
#define _PSMC2PRS_P2PRST_POSN                               0x0
#define _PSMC2PRS_P2PRST_POSITION                           0x0
#define _PSMC2PRS_P2PRST_SIZE                               0x1
#define _PSMC2PRS_P2PRST_LENGTH                             0x1
#define _PSMC2PRS_P2PRST_MASK                               0x1
#define _PSMC2PRS_P2PRSC1_POSN                              0x1
#define _PSMC2PRS_P2PRSC1_POSITION                          0x1
#define _PSMC2PRS_P2PRSC1_SIZE                              0x1
#define _PSMC2PRS_P2PRSC1_LENGTH                            0x1
#define _PSMC2PRS_P2PRSC1_MASK                              0x2
#define _PSMC2PRS_P2PRSC2_POSN                              0x2
#define _PSMC2PRS_P2PRSC2_POSITION                          0x2
#define _PSMC2PRS_P2PRSC2_SIZE                              0x1
#define _PSMC2PRS_P2PRSC2_LENGTH                            0x1
#define _PSMC2PRS_P2PRSC2_MASK                              0x4
#define _PSMC2PRS_P2PRSC3_POSN                              0x3
#define _PSMC2PRS_P2PRSC3_POSITION                          0x3
#define _PSMC2PRS_P2PRSC3_SIZE                              0x1
#define _PSMC2PRS_P2PRSC3_LENGTH                            0x1
#define _PSMC2PRS_P2PRSC3_MASK                              0x8
#define _PSMC2PRS_P2PRSIN_POSN                              0x7
#define _PSMC2PRS_P2PRSIN_POSITION                          0x7
#define _PSMC2PRS_P2PRSIN_SIZE                              0x1
#define _PSMC2PRS_P2PRSIN_LENGTH                            0x1
#define _PSMC2PRS_P2PRSIN_MASK                              0x80

// Register: PSMC2ASDC
unsigned char           PSMC2ASDC           ; //SWAP 0x83D;
#ifndef _LIB_BUILD
asm("PSMC2ASDC equ 083Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2ASDOV                :1;
        unsigned                        :4;
        unsigned P2ARSEN                :1;
        unsigned P2ASDEN                :1;
        unsigned P2ASE                  :1;
    };
} PSMC2ASDCbits_t;
PSMC2ASDCbits_t PSMC2ASDCbits ; //SWAP 0x83D;
// bitfield macros
#define _PSMC2ASDC_P2ASDOV_POSN                             0x0
#define _PSMC2ASDC_P2ASDOV_POSITION                         0x0
#define _PSMC2ASDC_P2ASDOV_SIZE                             0x1
#define _PSMC2ASDC_P2ASDOV_LENGTH                           0x1
#define _PSMC2ASDC_P2ASDOV_MASK                             0x1
#define _PSMC2ASDC_P2ARSEN_POSN                             0x5
#define _PSMC2ASDC_P2ARSEN_POSITION                         0x5
#define _PSMC2ASDC_P2ARSEN_SIZE                             0x1
#define _PSMC2ASDC_P2ARSEN_LENGTH                           0x1
#define _PSMC2ASDC_P2ARSEN_MASK                             0x20
#define _PSMC2ASDC_P2ASDEN_POSN                             0x6
#define _PSMC2ASDC_P2ASDEN_POSITION                         0x6
#define _PSMC2ASDC_P2ASDEN_SIZE                             0x1
#define _PSMC2ASDC_P2ASDEN_LENGTH                           0x1
#define _PSMC2ASDC_P2ASDEN_MASK                             0x40
#define _PSMC2ASDC_P2ASE_POSN                               0x7
#define _PSMC2ASDC_P2ASE_POSITION                           0x7
#define _PSMC2ASDC_P2ASE_SIZE                               0x1
#define _PSMC2ASDC_P2ASE_LENGTH                             0x1
#define _PSMC2ASDC_P2ASE_MASK                               0x80

// Register: PSMC2ASDL
unsigned char           PSMC2ASDL           ; //SWAP 0x83E;
#ifndef _LIB_BUILD
asm("PSMC2ASDL equ 083Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2ASDLA                :1;
        unsigned P2ASDLB                :1;
    };
} PSMC2ASDLbits_t;
PSMC2ASDLbits_t PSMC2ASDLbits ; //SWAP 0x83E;
// bitfield macros
#define _PSMC2ASDL_P2ASDLA_POSN                             0x0
#define _PSMC2ASDL_P2ASDLA_POSITION                         0x0
#define _PSMC2ASDL_P2ASDLA_SIZE                             0x1
#define _PSMC2ASDL_P2ASDLA_LENGTH                           0x1
#define _PSMC2ASDL_P2ASDLA_MASK                             0x1
#define _PSMC2ASDL_P2ASDLB_POSN                             0x1
#define _PSMC2ASDL_P2ASDLB_POSITION                         0x1
#define _PSMC2ASDL_P2ASDLB_SIZE                             0x1
#define _PSMC2ASDL_P2ASDLB_LENGTH                           0x1
#define _PSMC2ASDL_P2ASDLB_MASK                             0x2

// Register: PSMC2ASDS
unsigned char           PSMC2ASDS           ; //SWAP 0x83F;
#ifndef _LIB_BUILD
asm("PSMC2ASDS equ 083Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned                        :1;
        unsigned P2ASDSC1               :1;
        unsigned P2ASDSC2               :1;
        unsigned P2ASDSC3               :1;
        unsigned                        :3;
        unsigned P2ASDSIN               :1;
    };
} PSMC2ASDSbits_t;
PSMC2ASDSbits_t PSMC2ASDSbits ; //SWAP 0x83F;
// bitfield macros
#define _PSMC2ASDS_P2ASDSC1_POSN                            0x1
#define _PSMC2ASDS_P2ASDSC1_POSITION                        0x1
#define _PSMC2ASDS_P2ASDSC1_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSC1_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSC1_MASK                            0x2
#define _PSMC2ASDS_P2ASDSC2_POSN                            0x2
#define _PSMC2ASDS_P2ASDSC2_POSITION                        0x2
#define _PSMC2ASDS_P2ASDSC2_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSC2_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSC2_MASK                            0x4
#define _PSMC2ASDS_P2ASDSC3_POSN                            0x3
#define _PSMC2ASDS_P2ASDSC3_POSITION                        0x3
#define _PSMC2ASDS_P2ASDSC3_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSC3_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSC3_MASK                            0x8
#define _PSMC2ASDS_P2ASDSIN_POSN                            0x7
#define _PSMC2ASDS_P2ASDSIN_POSITION                        0x7
#define _PSMC2ASDS_P2ASDSIN_SIZE                            0x1
#define _PSMC2ASDS_P2ASDSIN_LENGTH                          0x1
#define _PSMC2ASDS_P2ASDSIN_MASK                            0x80

// Register: PSMC2INT
unsigned char           PSMC2INT            ; //SWAP 0x840;
#ifndef _LIB_BUILD
asm("PSMC2INT equ 0840h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2TPRIF                :1;
        unsigned P2TDCIF                :1;
        unsigned P2TPHIF                :1;
        unsigned P2TOVIF                :1;
        unsigned P2TPRIE                :1;
        unsigned P2TDCIE                :1;
        unsigned P2TPHIE                :1;
        unsigned P2TOVIE                :1;
    };
} PSMC2INTbits_t;
PSMC2INTbits_t PSMC2INTbits ; //SWAP 0x840;
// bitfield macros
#define _PSMC2INT_P2TPRIF_POSN                              0x0
#define _PSMC2INT_P2TPRIF_POSITION                          0x0
#define _PSMC2INT_P2TPRIF_SIZE                              0x1
#define _PSMC2INT_P2TPRIF_LENGTH                            0x1
#define _PSMC2INT_P2TPRIF_MASK                              0x1
#define _PSMC2INT_P2TDCIF_POSN                              0x1
#define _PSMC2INT_P2TDCIF_POSITION                          0x1
#define _PSMC2INT_P2TDCIF_SIZE                              0x1
#define _PSMC2INT_P2TDCIF_LENGTH                            0x1
#define _PSMC2INT_P2TDCIF_MASK                              0x2
#define _PSMC2INT_P2TPHIF_POSN                              0x2
#define _PSMC2INT_P2TPHIF_POSITION                          0x2
#define _PSMC2INT_P2TPHIF_SIZE                              0x1
#define _PSMC2INT_P2TPHIF_LENGTH                            0x1
#define _PSMC2INT_P2TPHIF_MASK                              0x4
#define _PSMC2INT_P2TOVIF_POSN                              0x3
#define _PSMC2INT_P2TOVIF_POSITION                          0x3
#define _PSMC2INT_P2TOVIF_SIZE                              0x1
#define _PSMC2INT_P2TOVIF_LENGTH                            0x1
#define _PSMC2INT_P2TOVIF_MASK                              0x8
#define _PSMC2INT_P2TPRIE_POSN                              0x4
#define _PSMC2INT_P2TPRIE_POSITION                          0x4
#define _PSMC2INT_P2TPRIE_SIZE                              0x1
#define _PSMC2INT_P2TPRIE_LENGTH                            0x1
#define _PSMC2INT_P2TPRIE_MASK                              0x10
#define _PSMC2INT_P2TDCIE_POSN                              0x5
#define _PSMC2INT_P2TDCIE_POSITION                          0x5
#define _PSMC2INT_P2TDCIE_SIZE                              0x1
#define _PSMC2INT_P2TDCIE_LENGTH                            0x1
#define _PSMC2INT_P2TDCIE_MASK                              0x20
#define _PSMC2INT_P2TPHIE_POSN                              0x6
#define _PSMC2INT_P2TPHIE_POSITION                          0x6
#define _PSMC2INT_P2TPHIE_SIZE                              0x1
#define _PSMC2INT_P2TPHIE_LENGTH                            0x1
#define _PSMC2INT_P2TPHIE_MASK                              0x40
#define _PSMC2INT_P2TOVIE_POSN                              0x7
#define _PSMC2INT_P2TOVIE_POSITION                          0x7
#define _PSMC2INT_P2TOVIE_SIZE                              0x1
#define _PSMC2INT_P2TOVIE_LENGTH                            0x1
#define _PSMC2INT_P2TOVIE_MASK                              0x80

// Register: PSMC2PH
unsigned short          PSMC2PH             ; //SWAP 0x841;
#ifndef _LIB_BUILD
asm("PSMC2PH equ 0841h");
#endif

// Register: PSMC2PHL
unsigned char           PSMC2PHL            ; //SWAP 0x841;
#ifndef _LIB_BUILD
asm("PSMC2PHL equ 0841h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PH0               :1;
        unsigned PSMC2PH1               :1;
        unsigned PSMC2PH2               :1;
        unsigned PSMC2PH3               :1;
        unsigned PSMC2PH4               :1;
        unsigned PSMC2PH5               :1;
        unsigned PSMC2PH6               :1;
        unsigned PSMC2PH7               :1;
    };
} PSMC2PHLbits_t;
PSMC2PHLbits_t PSMC2PHLbits ; //SWAP 0x841;
// bitfield macros
#define _PSMC2PHL_PSMC2PH0_POSN                             0x0
#define _PSMC2PHL_PSMC2PH0_POSITION                         0x0
#define _PSMC2PHL_PSMC2PH0_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH0_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH0_MASK                             0x1
#define _PSMC2PHL_PSMC2PH1_POSN                             0x1
#define _PSMC2PHL_PSMC2PH1_POSITION                         0x1
#define _PSMC2PHL_PSMC2PH1_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH1_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH1_MASK                             0x2
#define _PSMC2PHL_PSMC2PH2_POSN                             0x2
#define _PSMC2PHL_PSMC2PH2_POSITION                         0x2
#define _PSMC2PHL_PSMC2PH2_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH2_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH2_MASK                             0x4
#define _PSMC2PHL_PSMC2PH3_POSN                             0x3
#define _PSMC2PHL_PSMC2PH3_POSITION                         0x3
#define _PSMC2PHL_PSMC2PH3_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH3_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH3_MASK                             0x8
#define _PSMC2PHL_PSMC2PH4_POSN                             0x4
#define _PSMC2PHL_PSMC2PH4_POSITION                         0x4
#define _PSMC2PHL_PSMC2PH4_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH4_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH4_MASK                             0x10
#define _PSMC2PHL_PSMC2PH5_POSN                             0x5
#define _PSMC2PHL_PSMC2PH5_POSITION                         0x5
#define _PSMC2PHL_PSMC2PH5_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH5_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH5_MASK                             0x20
#define _PSMC2PHL_PSMC2PH6_POSN                             0x6
#define _PSMC2PHL_PSMC2PH6_POSITION                         0x6
#define _PSMC2PHL_PSMC2PH6_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH6_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH6_MASK                             0x40
#define _PSMC2PHL_PSMC2PH7_POSN                             0x7
#define _PSMC2PHL_PSMC2PH7_POSITION                         0x7
#define _PSMC2PHL_PSMC2PH7_SIZE                             0x1
#define _PSMC2PHL_PSMC2PH7_LENGTH                           0x1
#define _PSMC2PHL_PSMC2PH7_MASK                             0x80

// Register: PSMC2PHH
unsigned char           PSMC2PHH            ; //SWAP 0x842;
#ifndef _LIB_BUILD
asm("PSMC2PHH equ 0842h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PH8               :1;
        unsigned PSMC2PH9               :1;
        unsigned PSMC2PH10              :1;
        unsigned PSMC2PH11              :1;
        unsigned PSMC2PH12              :1;
        unsigned PSMC2PH13              :1;
        unsigned PSMC2PH14              :1;
        unsigned PSMC2PH15              :1;
    };
} PSMC2PHHbits_t;
PSMC2PHHbits_t PSMC2PHHbits ; //SWAP 0x842;
// bitfield macros
#define _PSMC2PHH_PSMC2PH8_POSN                             0x0
#define _PSMC2PHH_PSMC2PH8_POSITION                         0x0
#define _PSMC2PHH_PSMC2PH8_SIZE                             0x1
#define _PSMC2PHH_PSMC2PH8_LENGTH                           0x1
#define _PSMC2PHH_PSMC2PH8_MASK                             0x1
#define _PSMC2PHH_PSMC2PH9_POSN                             0x1
#define _PSMC2PHH_PSMC2PH9_POSITION                         0x1
#define _PSMC2PHH_PSMC2PH9_SIZE                             0x1
#define _PSMC2PHH_PSMC2PH9_LENGTH                           0x1
#define _PSMC2PHH_PSMC2PH9_MASK                             0x2
#define _PSMC2PHH_PSMC2PH10_POSN                            0x2
#define _PSMC2PHH_PSMC2PH10_POSITION                        0x2
#define _PSMC2PHH_PSMC2PH10_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH10_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH10_MASK                            0x4
#define _PSMC2PHH_PSMC2PH11_POSN                            0x3
#define _PSMC2PHH_PSMC2PH11_POSITION                        0x3
#define _PSMC2PHH_PSMC2PH11_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH11_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH11_MASK                            0x8
#define _PSMC2PHH_PSMC2PH12_POSN                            0x4
#define _PSMC2PHH_PSMC2PH12_POSITION                        0x4
#define _PSMC2PHH_PSMC2PH12_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH12_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH12_MASK                            0x10
#define _PSMC2PHH_PSMC2PH13_POSN                            0x5
#define _PSMC2PHH_PSMC2PH13_POSITION                        0x5
#define _PSMC2PHH_PSMC2PH13_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH13_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH13_MASK                            0x20
#define _PSMC2PHH_PSMC2PH14_POSN                            0x6
#define _PSMC2PHH_PSMC2PH14_POSITION                        0x6
#define _PSMC2PHH_PSMC2PH14_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH14_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH14_MASK                            0x40
#define _PSMC2PHH_PSMC2PH15_POSN                            0x7
#define _PSMC2PHH_PSMC2PH15_POSITION                        0x7
#define _PSMC2PHH_PSMC2PH15_SIZE                            0x1
#define _PSMC2PHH_PSMC2PH15_LENGTH                          0x1
#define _PSMC2PHH_PSMC2PH15_MASK                            0x80

// Register: PSMC2DC
unsigned short          PSMC2DC             ; //SWAP 0x843;
#ifndef _LIB_BUILD
asm("PSMC2DC equ 0843h");
#endif

// Register: PSMC2DCL
unsigned char           PSMC2DCL            ; //SWAP 0x843;
#ifndef _LIB_BUILD
asm("PSMC2DCL equ 0843h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DC0               :1;
        unsigned PSMC2DC1               :1;
        unsigned PSMC2DC2               :1;
        unsigned PSMC2DC3               :1;
        unsigned PSMC2DC4               :1;
        unsigned PSMC2DC5               :1;
        unsigned PSMC2DC6               :1;
        unsigned PSMC2DC7               :1;
    };
} PSMC2DCLbits_t;
PSMC2DCLbits_t PSMC2DCLbits ; //SWAP 0x843;
// bitfield macros
#define _PSMC2DCL_PSMC2DC0_POSN                             0x0
#define _PSMC2DCL_PSMC2DC0_POSITION                         0x0
#define _PSMC2DCL_PSMC2DC0_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC0_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC0_MASK                             0x1
#define _PSMC2DCL_PSMC2DC1_POSN                             0x1
#define _PSMC2DCL_PSMC2DC1_POSITION                         0x1
#define _PSMC2DCL_PSMC2DC1_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC1_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC1_MASK                             0x2
#define _PSMC2DCL_PSMC2DC2_POSN                             0x2
#define _PSMC2DCL_PSMC2DC2_POSITION                         0x2
#define _PSMC2DCL_PSMC2DC2_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC2_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC2_MASK                             0x4
#define _PSMC2DCL_PSMC2DC3_POSN                             0x3
#define _PSMC2DCL_PSMC2DC3_POSITION                         0x3
#define _PSMC2DCL_PSMC2DC3_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC3_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC3_MASK                             0x8
#define _PSMC2DCL_PSMC2DC4_POSN                             0x4
#define _PSMC2DCL_PSMC2DC4_POSITION                         0x4
#define _PSMC2DCL_PSMC2DC4_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC4_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC4_MASK                             0x10
#define _PSMC2DCL_PSMC2DC5_POSN                             0x5
#define _PSMC2DCL_PSMC2DC5_POSITION                         0x5
#define _PSMC2DCL_PSMC2DC5_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC5_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC5_MASK                             0x20
#define _PSMC2DCL_PSMC2DC6_POSN                             0x6
#define _PSMC2DCL_PSMC2DC6_POSITION                         0x6
#define _PSMC2DCL_PSMC2DC6_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC6_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC6_MASK                             0x40
#define _PSMC2DCL_PSMC2DC7_POSN                             0x7
#define _PSMC2DCL_PSMC2DC7_POSITION                         0x7
#define _PSMC2DCL_PSMC2DC7_SIZE                             0x1
#define _PSMC2DCL_PSMC2DC7_LENGTH                           0x1
#define _PSMC2DCL_PSMC2DC7_MASK                             0x80

// Register: PSMC2DCH
unsigned char           PSMC2DCH            ; //SWAP 0x844;
#ifndef _LIB_BUILD
asm("PSMC2DCH equ 0844h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DC8               :1;
        unsigned PSMC2DC9               :1;
        unsigned PSMC2DC10              :1;
        unsigned PSMC2DC11              :1;
        unsigned PSMC2DC12              :1;
        unsigned PSMC2DC13              :1;
        unsigned PSMC2DC14              :1;
        unsigned PSMC2DC15              :1;
    };
} PSMC2DCHbits_t;
PSMC2DCHbits_t PSMC2DCHbits ; //SWAP 0x844;
// bitfield macros
#define _PSMC2DCH_PSMC2DC8_POSN                             0x0
#define _PSMC2DCH_PSMC2DC8_POSITION                         0x0
#define _PSMC2DCH_PSMC2DC8_SIZE                             0x1
#define _PSMC2DCH_PSMC2DC8_LENGTH                           0x1
#define _PSMC2DCH_PSMC2DC8_MASK                             0x1
#define _PSMC2DCH_PSMC2DC9_POSN                             0x1
#define _PSMC2DCH_PSMC2DC9_POSITION                         0x1
#define _PSMC2DCH_PSMC2DC9_SIZE                             0x1
#define _PSMC2DCH_PSMC2DC9_LENGTH                           0x1
#define _PSMC2DCH_PSMC2DC9_MASK                             0x2
#define _PSMC2DCH_PSMC2DC10_POSN                            0x2
#define _PSMC2DCH_PSMC2DC10_POSITION                        0x2
#define _PSMC2DCH_PSMC2DC10_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC10_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC10_MASK                            0x4
#define _PSMC2DCH_PSMC2DC11_POSN                            0x3
#define _PSMC2DCH_PSMC2DC11_POSITION                        0x3
#define _PSMC2DCH_PSMC2DC11_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC11_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC11_MASK                            0x8
#define _PSMC2DCH_PSMC2DC12_POSN                            0x4
#define _PSMC2DCH_PSMC2DC12_POSITION                        0x4
#define _PSMC2DCH_PSMC2DC12_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC12_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC12_MASK                            0x10
#define _PSMC2DCH_PSMC2DC13_POSN                            0x5
#define _PSMC2DCH_PSMC2DC13_POSITION                        0x5
#define _PSMC2DCH_PSMC2DC13_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC13_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC13_MASK                            0x20
#define _PSMC2DCH_PSMC2DC14_POSN                            0x6
#define _PSMC2DCH_PSMC2DC14_POSITION                        0x6
#define _PSMC2DCH_PSMC2DC14_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC14_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC14_MASK                            0x40
#define _PSMC2DCH_PSMC2DC15_POSN                            0x7
#define _PSMC2DCH_PSMC2DC15_POSITION                        0x7
#define _PSMC2DCH_PSMC2DC15_SIZE                            0x1
#define _PSMC2DCH_PSMC2DC15_LENGTH                          0x1
#define _PSMC2DCH_PSMC2DC15_MASK                            0x80

// Register: PSMC2PR
unsigned short          PSMC2PR             ; //SWAP 0x845;
#ifndef _LIB_BUILD
asm("PSMC2PR equ 0845h");
#endif

// Register: PSMC2PRL
unsigned char           PSMC2PRL            ; //SWAP 0x845;
#ifndef _LIB_BUILD
asm("PSMC2PRL equ 0845h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PR0               :1;
        unsigned PSMC2PR1               :1;
        unsigned PSMC2PR2               :1;
        unsigned PSMC2PR3               :1;
        unsigned PSMC2PR4               :1;
        unsigned PSMC2PR5               :1;
        unsigned PSMC2PR6               :1;
        unsigned PSMC2PR7               :1;
    };
} PSMC2PRLbits_t;
PSMC2PRLbits_t PSMC2PRLbits ; //SWAP 0x845;
// bitfield macros
#define _PSMC2PRL_PSMC2PR0_POSN                             0x0
#define _PSMC2PRL_PSMC2PR0_POSITION                         0x0
#define _PSMC2PRL_PSMC2PR0_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR0_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR0_MASK                             0x1
#define _PSMC2PRL_PSMC2PR1_POSN                             0x1
#define _PSMC2PRL_PSMC2PR1_POSITION                         0x1
#define _PSMC2PRL_PSMC2PR1_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR1_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR1_MASK                             0x2
#define _PSMC2PRL_PSMC2PR2_POSN                             0x2
#define _PSMC2PRL_PSMC2PR2_POSITION                         0x2
#define _PSMC2PRL_PSMC2PR2_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR2_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR2_MASK                             0x4
#define _PSMC2PRL_PSMC2PR3_POSN                             0x3
#define _PSMC2PRL_PSMC2PR3_POSITION                         0x3
#define _PSMC2PRL_PSMC2PR3_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR3_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR3_MASK                             0x8
#define _PSMC2PRL_PSMC2PR4_POSN                             0x4
#define _PSMC2PRL_PSMC2PR4_POSITION                         0x4
#define _PSMC2PRL_PSMC2PR4_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR4_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR4_MASK                             0x10
#define _PSMC2PRL_PSMC2PR5_POSN                             0x5
#define _PSMC2PRL_PSMC2PR5_POSITION                         0x5
#define _PSMC2PRL_PSMC2PR5_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR5_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR5_MASK                             0x20
#define _PSMC2PRL_PSMC2PR6_POSN                             0x6
#define _PSMC2PRL_PSMC2PR6_POSITION                         0x6
#define _PSMC2PRL_PSMC2PR6_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR6_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR6_MASK                             0x40
#define _PSMC2PRL_PSMC2PR7_POSN                             0x7
#define _PSMC2PRL_PSMC2PR7_POSITION                         0x7
#define _PSMC2PRL_PSMC2PR7_SIZE                             0x1
#define _PSMC2PRL_PSMC2PR7_LENGTH                           0x1
#define _PSMC2PRL_PSMC2PR7_MASK                             0x80

// Register: PSMC2PRH
unsigned char           PSMC2PRH            ; //SWAP 0x846;
#ifndef _LIB_BUILD
asm("PSMC2PRH equ 0846h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2PR8               :1;
        unsigned PSMC2PR9               :1;
        unsigned PSMC2PR10              :1;
        unsigned PSMC2PR11              :1;
        unsigned PSMC2PR12              :1;
        unsigned PSMC2PR13              :1;
        unsigned PSMC2PR14              :1;
        unsigned PSMC2PR15              :1;
    };
} PSMC2PRHbits_t;
PSMC2PRHbits_t PSMC2PRHbits ; //SWAP 0x846;
// bitfield macros
#define _PSMC2PRH_PSMC2PR8_POSN                             0x0
#define _PSMC2PRH_PSMC2PR8_POSITION                         0x0
#define _PSMC2PRH_PSMC2PR8_SIZE                             0x1
#define _PSMC2PRH_PSMC2PR8_LENGTH                           0x1
#define _PSMC2PRH_PSMC2PR8_MASK                             0x1
#define _PSMC2PRH_PSMC2PR9_POSN                             0x1
#define _PSMC2PRH_PSMC2PR9_POSITION                         0x1
#define _PSMC2PRH_PSMC2PR9_SIZE                             0x1
#define _PSMC2PRH_PSMC2PR9_LENGTH                           0x1
#define _PSMC2PRH_PSMC2PR9_MASK                             0x2
#define _PSMC2PRH_PSMC2PR10_POSN                            0x2
#define _PSMC2PRH_PSMC2PR10_POSITION                        0x2
#define _PSMC2PRH_PSMC2PR10_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR10_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR10_MASK                            0x4
#define _PSMC2PRH_PSMC2PR11_POSN                            0x3
#define _PSMC2PRH_PSMC2PR11_POSITION                        0x3
#define _PSMC2PRH_PSMC2PR11_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR11_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR11_MASK                            0x8
#define _PSMC2PRH_PSMC2PR12_POSN                            0x4
#define _PSMC2PRH_PSMC2PR12_POSITION                        0x4
#define _PSMC2PRH_PSMC2PR12_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR12_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR12_MASK                            0x10
#define _PSMC2PRH_PSMC2PR13_POSN                            0x5
#define _PSMC2PRH_PSMC2PR13_POSITION                        0x5
#define _PSMC2PRH_PSMC2PR13_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR13_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR13_MASK                            0x20
#define _PSMC2PRH_PSMC2PR14_POSN                            0x6
#define _PSMC2PRH_PSMC2PR14_POSITION                        0x6
#define _PSMC2PRH_PSMC2PR14_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR14_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR14_MASK                            0x40
#define _PSMC2PRH_PSMC2PR15_POSN                            0x7
#define _PSMC2PRH_PSMC2PR15_POSITION                        0x7
#define _PSMC2PRH_PSMC2PR15_SIZE                            0x1
#define _PSMC2PRH_PSMC2PR15_LENGTH                          0x1
#define _PSMC2PRH_PSMC2PR15_MASK                            0x80

// Register: PSMC2TMR
unsigned short          PSMC2TMR            ; //SWAP 0x847;
#ifndef _LIB_BUILD
asm("PSMC2TMR equ 0847h");
#endif

// Register: PSMC2TMRL
unsigned char           PSMC2TMRL           ; //SWAP 0x847;
#ifndef _LIB_BUILD
asm("PSMC2TMRL equ 0847h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2TMR0              :1;
        unsigned PSMC2TMR1              :1;
        unsigned PSMC2TMR2              :1;
        unsigned PSMC2TMR3              :1;
        unsigned PSMC2TMR4              :1;
        unsigned PSMC2TMR5              :1;
        unsigned PSMC2TMR6              :1;
        unsigned PSMC2TMR7              :1;
    };
} PSMC2TMRLbits_t;
PSMC2TMRLbits_t PSMC2TMRLbits ; //SWAP 0x847;
// bitfield macros
#define _PSMC2TMRL_PSMC2TMR0_POSN                           0x0
#define _PSMC2TMRL_PSMC2TMR0_POSITION                       0x0
#define _PSMC2TMRL_PSMC2TMR0_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR0_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR0_MASK                           0x1
#define _PSMC2TMRL_PSMC2TMR1_POSN                           0x1
#define _PSMC2TMRL_PSMC2TMR1_POSITION                       0x1
#define _PSMC2TMRL_PSMC2TMR1_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR1_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR1_MASK                           0x2
#define _PSMC2TMRL_PSMC2TMR2_POSN                           0x2
#define _PSMC2TMRL_PSMC2TMR2_POSITION                       0x2
#define _PSMC2TMRL_PSMC2TMR2_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR2_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR2_MASK                           0x4
#define _PSMC2TMRL_PSMC2TMR3_POSN                           0x3
#define _PSMC2TMRL_PSMC2TMR3_POSITION                       0x3
#define _PSMC2TMRL_PSMC2TMR3_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR3_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR3_MASK                           0x8
#define _PSMC2TMRL_PSMC2TMR4_POSN                           0x4
#define _PSMC2TMRL_PSMC2TMR4_POSITION                       0x4
#define _PSMC2TMRL_PSMC2TMR4_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR4_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR4_MASK                           0x10
#define _PSMC2TMRL_PSMC2TMR5_POSN                           0x5
#define _PSMC2TMRL_PSMC2TMR5_POSITION                       0x5
#define _PSMC2TMRL_PSMC2TMR5_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR5_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR5_MASK                           0x20
#define _PSMC2TMRL_PSMC2TMR6_POSN                           0x6
#define _PSMC2TMRL_PSMC2TMR6_POSITION                       0x6
#define _PSMC2TMRL_PSMC2TMR6_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR6_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR6_MASK                           0x40
#define _PSMC2TMRL_PSMC2TMR7_POSN                           0x7
#define _PSMC2TMRL_PSMC2TMR7_POSITION                       0x7
#define _PSMC2TMRL_PSMC2TMR7_SIZE                           0x1
#define _PSMC2TMRL_PSMC2TMR7_LENGTH                         0x1
#define _PSMC2TMRL_PSMC2TMR7_MASK                           0x80

// Register: PSMC2TMRH
unsigned char           PSMC2TMRH           ; //SWAP 0x848;
#ifndef _LIB_BUILD
asm("PSMC2TMRH equ 0848h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2TMR8              :1;
        unsigned PSMC2TMR9              :1;
        unsigned PSMC2TMR10             :1;
        unsigned PSMC2TMR11             :1;
        unsigned PSMC2TMR12             :1;
        unsigned PSMC2TMR13             :1;
        unsigned PSMC2TMR14             :1;
        unsigned PSMC2TMR15             :1;
    };
} PSMC2TMRHbits_t;
PSMC2TMRHbits_t PSMC2TMRHbits ; //SWAP 0x848;
// bitfield macros
#define _PSMC2TMRH_PSMC2TMR8_POSN                           0x0
#define _PSMC2TMRH_PSMC2TMR8_POSITION                       0x0
#define _PSMC2TMRH_PSMC2TMR8_SIZE                           0x1
#define _PSMC2TMRH_PSMC2TMR8_LENGTH                         0x1
#define _PSMC2TMRH_PSMC2TMR8_MASK                           0x1
#define _PSMC2TMRH_PSMC2TMR9_POSN                           0x1
#define _PSMC2TMRH_PSMC2TMR9_POSITION                       0x1
#define _PSMC2TMRH_PSMC2TMR9_SIZE                           0x1
#define _PSMC2TMRH_PSMC2TMR9_LENGTH                         0x1
#define _PSMC2TMRH_PSMC2TMR9_MASK                           0x2
#define _PSMC2TMRH_PSMC2TMR10_POSN                          0x2
#define _PSMC2TMRH_PSMC2TMR10_POSITION                      0x2
#define _PSMC2TMRH_PSMC2TMR10_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR10_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR10_MASK                          0x4
#define _PSMC2TMRH_PSMC2TMR11_POSN                          0x3
#define _PSMC2TMRH_PSMC2TMR11_POSITION                      0x3
#define _PSMC2TMRH_PSMC2TMR11_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR11_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR11_MASK                          0x8
#define _PSMC2TMRH_PSMC2TMR12_POSN                          0x4
#define _PSMC2TMRH_PSMC2TMR12_POSITION                      0x4
#define _PSMC2TMRH_PSMC2TMR12_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR12_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR12_MASK                          0x10
#define _PSMC2TMRH_PSMC2TMR13_POSN                          0x5
#define _PSMC2TMRH_PSMC2TMR13_POSITION                      0x5
#define _PSMC2TMRH_PSMC2TMR13_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR13_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR13_MASK                          0x20
#define _PSMC2TMRH_PSMC2TMR14_POSN                          0x6
#define _PSMC2TMRH_PSMC2TMR14_POSITION                      0x6
#define _PSMC2TMRH_PSMC2TMR14_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR14_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR14_MASK                          0x40
#define _PSMC2TMRH_PSMC2TMR15_POSN                          0x7
#define _PSMC2TMRH_PSMC2TMR15_POSITION                      0x7
#define _PSMC2TMRH_PSMC2TMR15_SIZE                          0x1
#define _PSMC2TMRH_PSMC2TMR15_LENGTH                        0x1
#define _PSMC2TMRH_PSMC2TMR15_MASK                          0x80

// Register: PSMC2DBR
unsigned char           PSMC2DBR            ; //SWAP 0x849;
#ifndef _LIB_BUILD
asm("PSMC2DBR equ 0849h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DBR0              :1;
        unsigned PSMC2DBR1              :1;
        unsigned PSMC2DBR2              :1;
        unsigned PSMC2DBR3              :1;
        unsigned PSMC2DBR4              :1;
        unsigned PSMC2DBR5              :1;
        unsigned PSMC2DBR6              :1;
        unsigned PSMC2DBR7              :1;
    };
} PSMC2DBRbits_t;
PSMC2DBRbits_t PSMC2DBRbits ; //SWAP 0x849;
// bitfield macros
#define _PSMC2DBR_PSMC2DBR0_POSN                            0x0
#define _PSMC2DBR_PSMC2DBR0_POSITION                        0x0
#define _PSMC2DBR_PSMC2DBR0_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR0_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR0_MASK                            0x1
#define _PSMC2DBR_PSMC2DBR1_POSN                            0x1
#define _PSMC2DBR_PSMC2DBR1_POSITION                        0x1
#define _PSMC2DBR_PSMC2DBR1_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR1_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR1_MASK                            0x2
#define _PSMC2DBR_PSMC2DBR2_POSN                            0x2
#define _PSMC2DBR_PSMC2DBR2_POSITION                        0x2
#define _PSMC2DBR_PSMC2DBR2_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR2_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR2_MASK                            0x4
#define _PSMC2DBR_PSMC2DBR3_POSN                            0x3
#define _PSMC2DBR_PSMC2DBR3_POSITION                        0x3
#define _PSMC2DBR_PSMC2DBR3_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR3_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR3_MASK                            0x8
#define _PSMC2DBR_PSMC2DBR4_POSN                            0x4
#define _PSMC2DBR_PSMC2DBR4_POSITION                        0x4
#define _PSMC2DBR_PSMC2DBR4_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR4_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR4_MASK                            0x10
#define _PSMC2DBR_PSMC2DBR5_POSN                            0x5
#define _PSMC2DBR_PSMC2DBR5_POSITION                        0x5
#define _PSMC2DBR_PSMC2DBR5_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR5_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR5_MASK                            0x20
#define _PSMC2DBR_PSMC2DBR6_POSN                            0x6
#define _PSMC2DBR_PSMC2DBR6_POSITION                        0x6
#define _PSMC2DBR_PSMC2DBR6_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR6_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR6_MASK                            0x40
#define _PSMC2DBR_PSMC2DBR7_POSN                            0x7
#define _PSMC2DBR_PSMC2DBR7_POSITION                        0x7
#define _PSMC2DBR_PSMC2DBR7_SIZE                            0x1
#define _PSMC2DBR_PSMC2DBR7_LENGTH                          0x1
#define _PSMC2DBR_PSMC2DBR7_MASK                            0x80

// Register: PSMC2DBF
unsigned char           PSMC2DBF            ; //SWAP 0x84A;
#ifndef _LIB_BUILD
asm("PSMC2DBF equ 084Ah");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2DBF0              :1;
        unsigned PSMC2DBF1              :1;
        unsigned PSMC2DBF2              :1;
        unsigned PSMC2DBF3              :1;
        unsigned PSMC2DBF4              :1;
        unsigned PSMC2DBF5              :1;
        unsigned PSMC2DBF6              :1;
        unsigned PSMC2DBF7              :1;
    };
} PSMC2DBFbits_t;
PSMC2DBFbits_t PSMC2DBFbits ; //SWAP 0x84A;
// bitfield macros
#define _PSMC2DBF_PSMC2DBF0_POSN                            0x0
#define _PSMC2DBF_PSMC2DBF0_POSITION                        0x0
#define _PSMC2DBF_PSMC2DBF0_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF0_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF0_MASK                            0x1
#define _PSMC2DBF_PSMC2DBF1_POSN                            0x1
#define _PSMC2DBF_PSMC2DBF1_POSITION                        0x1
#define _PSMC2DBF_PSMC2DBF1_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF1_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF1_MASK                            0x2
#define _PSMC2DBF_PSMC2DBF2_POSN                            0x2
#define _PSMC2DBF_PSMC2DBF2_POSITION                        0x2
#define _PSMC2DBF_PSMC2DBF2_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF2_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF2_MASK                            0x4
#define _PSMC2DBF_PSMC2DBF3_POSN                            0x3
#define _PSMC2DBF_PSMC2DBF3_POSITION                        0x3
#define _PSMC2DBF_PSMC2DBF3_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF3_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF3_MASK                            0x8
#define _PSMC2DBF_PSMC2DBF4_POSN                            0x4
#define _PSMC2DBF_PSMC2DBF4_POSITION                        0x4
#define _PSMC2DBF_PSMC2DBF4_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF4_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF4_MASK                            0x10
#define _PSMC2DBF_PSMC2DBF5_POSN                            0x5
#define _PSMC2DBF_PSMC2DBF5_POSITION                        0x5
#define _PSMC2DBF_PSMC2DBF5_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF5_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF5_MASK                            0x20
#define _PSMC2DBF_PSMC2DBF6_POSN                            0x6
#define _PSMC2DBF_PSMC2DBF6_POSITION                        0x6
#define _PSMC2DBF_PSMC2DBF6_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF6_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF6_MASK                            0x40
#define _PSMC2DBF_PSMC2DBF7_POSN                            0x7
#define _PSMC2DBF_PSMC2DBF7_POSITION                        0x7
#define _PSMC2DBF_PSMC2DBF7_SIZE                            0x1
#define _PSMC2DBF_PSMC2DBF7_LENGTH                          0x1
#define _PSMC2DBF_PSMC2DBF7_MASK                            0x80

// Register: PSMC2BLKR
unsigned char           PSMC2BLKR           ; //SWAP 0x84B;
#ifndef _LIB_BUILD
asm("PSMC2BLKR equ 084Bh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2BLKR0             :1;
        unsigned PSMC2BLKR1             :1;
        unsigned PSMC2BLKR2             :1;
        unsigned PSMC2BLKR3             :1;
        unsigned PSMC2BLKR4             :1;
        unsigned PSMC2BLKR5             :1;
        unsigned PSMC2BLKR6             :1;
        unsigned PSMC2BLKR7             :1;
    };
} PSMC2BLKRbits_t;
PSMC2BLKRbits_t PSMC2BLKRbits ; //SWAP 0x84B;
// bitfield macros
#define _PSMC2BLKR_PSMC2BLKR0_POSN                          0x0
#define _PSMC2BLKR_PSMC2BLKR0_POSITION                      0x0
#define _PSMC2BLKR_PSMC2BLKR0_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR0_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR0_MASK                          0x1
#define _PSMC2BLKR_PSMC2BLKR1_POSN                          0x1
#define _PSMC2BLKR_PSMC2BLKR1_POSITION                      0x1
#define _PSMC2BLKR_PSMC2BLKR1_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR1_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR1_MASK                          0x2
#define _PSMC2BLKR_PSMC2BLKR2_POSN                          0x2
#define _PSMC2BLKR_PSMC2BLKR2_POSITION                      0x2
#define _PSMC2BLKR_PSMC2BLKR2_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR2_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR2_MASK                          0x4
#define _PSMC2BLKR_PSMC2BLKR3_POSN                          0x3
#define _PSMC2BLKR_PSMC2BLKR3_POSITION                      0x3
#define _PSMC2BLKR_PSMC2BLKR3_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR3_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR3_MASK                          0x8
#define _PSMC2BLKR_PSMC2BLKR4_POSN                          0x4
#define _PSMC2BLKR_PSMC2BLKR4_POSITION                      0x4
#define _PSMC2BLKR_PSMC2BLKR4_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR4_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR4_MASK                          0x10
#define _PSMC2BLKR_PSMC2BLKR5_POSN                          0x5
#define _PSMC2BLKR_PSMC2BLKR5_POSITION                      0x5
#define _PSMC2BLKR_PSMC2BLKR5_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR5_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR5_MASK                          0x20
#define _PSMC2BLKR_PSMC2BLKR6_POSN                          0x6
#define _PSMC2BLKR_PSMC2BLKR6_POSITION                      0x6
#define _PSMC2BLKR_PSMC2BLKR6_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR6_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR6_MASK                          0x40
#define _PSMC2BLKR_PSMC2BLKR7_POSN                          0x7
#define _PSMC2BLKR_PSMC2BLKR7_POSITION                      0x7
#define _PSMC2BLKR_PSMC2BLKR7_SIZE                          0x1
#define _PSMC2BLKR_PSMC2BLKR7_LENGTH                        0x1
#define _PSMC2BLKR_PSMC2BLKR7_MASK                          0x80

// Register: PSMC2BLKF
unsigned char           PSMC2BLKF           ; //SWAP 0x84C;
#ifndef _LIB_BUILD
asm("PSMC2BLKF equ 084Ch");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2BLKF0             :1;
        unsigned PSMC2BLKF1             :1;
        unsigned PSMC2BLKF2             :1;
        unsigned PSMC2BLKF3             :1;
        unsigned PSMC2BLKF4             :1;
        unsigned PSMC2BLKF5             :1;
        unsigned PSMC2BLKF6             :1;
        unsigned PSMC2BLKF7             :1;
    };
} PSMC2BLKFbits_t;
PSMC2BLKFbits_t PSMC2BLKFbits ; //SWAP 0x84C;
// bitfield macros
#define _PSMC2BLKF_PSMC2BLKF0_POSN                          0x0
#define _PSMC2BLKF_PSMC2BLKF0_POSITION                      0x0
#define _PSMC2BLKF_PSMC2BLKF0_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF0_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF0_MASK                          0x1
#define _PSMC2BLKF_PSMC2BLKF1_POSN                          0x1
#define _PSMC2BLKF_PSMC2BLKF1_POSITION                      0x1
#define _PSMC2BLKF_PSMC2BLKF1_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF1_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF1_MASK                          0x2
#define _PSMC2BLKF_PSMC2BLKF2_POSN                          0x2
#define _PSMC2BLKF_PSMC2BLKF2_POSITION                      0x2
#define _PSMC2BLKF_PSMC2BLKF2_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF2_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF2_MASK                          0x4
#define _PSMC2BLKF_PSMC2BLKF3_POSN                          0x3
#define _PSMC2BLKF_PSMC2BLKF3_POSITION                      0x3
#define _PSMC2BLKF_PSMC2BLKF3_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF3_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF3_MASK                          0x8
#define _PSMC2BLKF_PSMC2BLKF4_POSN                          0x4
#define _PSMC2BLKF_PSMC2BLKF4_POSITION                      0x4
#define _PSMC2BLKF_PSMC2BLKF4_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF4_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF4_MASK                          0x10
#define _PSMC2BLKF_PSMC2BLKF5_POSN                          0x5
#define _PSMC2BLKF_PSMC2BLKF5_POSITION                      0x5
#define _PSMC2BLKF_PSMC2BLKF5_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF5_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF5_MASK                          0x20
#define _PSMC2BLKF_PSMC2BLKF6_POSN                          0x6
#define _PSMC2BLKF_PSMC2BLKF6_POSITION                      0x6
#define _PSMC2BLKF_PSMC2BLKF6_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF6_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF6_MASK                          0x40
#define _PSMC2BLKF_PSMC2BLKF7_POSN                          0x7
#define _PSMC2BLKF_PSMC2BLKF7_POSITION                      0x7
#define _PSMC2BLKF_PSMC2BLKF7_SIZE                          0x1
#define _PSMC2BLKF_PSMC2BLKF7_LENGTH                        0x1
#define _PSMC2BLKF_PSMC2BLKF7_MASK                          0x80

// Register: PSMC2FFA
unsigned char           PSMC2FFA            ; //SWAP 0x84D;
#ifndef _LIB_BUILD
asm("PSMC2FFA equ 084Dh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PSMC2FFA0              :1;
        unsigned PSMC2FFA1              :1;
        unsigned PSMC2FFA2              :1;
        unsigned PSMC2FFA3              :1;
    };
} PSMC2FFAbits_t;
PSMC2FFAbits_t PSMC2FFAbits ; //SWAP 0x84D;
// bitfield macros
#define _PSMC2FFA_PSMC2FFA0_POSN                            0x0
#define _PSMC2FFA_PSMC2FFA0_POSITION                        0x0
#define _PSMC2FFA_PSMC2FFA0_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA0_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA0_MASK                            0x1
#define _PSMC2FFA_PSMC2FFA1_POSN                            0x1
#define _PSMC2FFA_PSMC2FFA1_POSITION                        0x1
#define _PSMC2FFA_PSMC2FFA1_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA1_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA1_MASK                            0x2
#define _PSMC2FFA_PSMC2FFA2_POSN                            0x2
#define _PSMC2FFA_PSMC2FFA2_POSITION                        0x2
#define _PSMC2FFA_PSMC2FFA2_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA2_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA2_MASK                            0x4
#define _PSMC2FFA_PSMC2FFA3_POSN                            0x3
#define _PSMC2FFA_PSMC2FFA3_POSITION                        0x3
#define _PSMC2FFA_PSMC2FFA3_SIZE                            0x1
#define _PSMC2FFA_PSMC2FFA3_LENGTH                          0x1
#define _PSMC2FFA_PSMC2FFA3_MASK                            0x8

// Register: PSMC2STR0
unsigned char           PSMC2STR0           ; //SWAP 0x84E;
#ifndef _LIB_BUILD
asm("PSMC2STR0 equ 084Eh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2STRA                 :1;
        unsigned P2STRB                 :1;
    };
} PSMC2STR0bits_t;
PSMC2STR0bits_t PSMC2STR0bits ; //SWAP 0x84E;
// bitfield macros
#define _PSMC2STR0_P2STRA_POSN                              0x0
#define _PSMC2STR0_P2STRA_POSITION                          0x0
#define _PSMC2STR0_P2STRA_SIZE                              0x1
#define _PSMC2STR0_P2STRA_LENGTH                            0x1
#define _PSMC2STR0_P2STRA_MASK                              0x1
#define _PSMC2STR0_P2STRB_POSN                              0x1
#define _PSMC2STR0_P2STRB_POSITION                          0x1
#define _PSMC2STR0_P2STRB_SIZE                              0x1
#define _PSMC2STR0_P2STRB_LENGTH                            0x1
#define _PSMC2STR0_P2STRB_MASK                              0x2

// Register: PSMC2STR1
unsigned char           PSMC2STR1           ; //SWAP 0x84F;
#ifndef _LIB_BUILD
asm("PSMC2STR1 equ 084Fh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned P2HSMEN                :1;
        unsigned P2LSMEN                :1;
        unsigned                        :5;
        unsigned P2SSYNC                :1;
    };
} PSMC2STR1bits_t;
PSMC2STR1bits_t PSMC2STR1bits ; //SWAP 0x84F;
// bitfield macros
#define _PSMC2STR1_P2HSMEN_POSN                             0x0
#define _PSMC2STR1_P2HSMEN_POSITION                         0x0
#define _PSMC2STR1_P2HSMEN_SIZE                             0x1
#define _PSMC2STR1_P2HSMEN_LENGTH                           0x1
#define _PSMC2STR1_P2HSMEN_MASK                             0x1
#define _PSMC2STR1_P2LSMEN_POSN                             0x1
#define _PSMC2STR1_P2LSMEN_POSITION                         0x1
#define _PSMC2STR1_P2LSMEN_SIZE                             0x1
#define _PSMC2STR1_P2LSMEN_LENGTH                           0x1
#define _PSMC2STR1_P2LSMEN_MASK                             0x2
#define _PSMC2STR1_P2SSYNC_POSN                             0x7
#define _PSMC2STR1_P2SSYNC_POSITION                         0x7
#define _PSMC2STR1_P2SSYNC_SIZE                             0x1
#define _PSMC2STR1_P2SSYNC_LENGTH                           0x1
#define _PSMC2STR1_P2SSYNC_MASK                             0x80

// Register: STATUS_SHAD
unsigned char           STATUS_SHAD         ; //SWAP 0xFE4;
#ifndef _LIB_BUILD
asm("STATUS_SHAD equ 0FE4h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned C_SHAD                 :1;
        unsigned DC_SHAD                :1;
        unsigned Z_SHAD                 :1;
    };
} STATUS_SHADbits_t;
STATUS_SHADbits_t STATUS_SHADbits ; //SWAP 0xFE4;
// bitfield macros
#define _STATUS_SHAD_C_SHAD_POSN                            0x0
#define _STATUS_SHAD_C_SHAD_POSITION                        0x0
#define _STATUS_SHAD_C_SHAD_SIZE                            0x1
#define _STATUS_SHAD_C_SHAD_LENGTH                          0x1
#define _STATUS_SHAD_C_SHAD_MASK                            0x1
#define _STATUS_SHAD_DC_SHAD_POSN                           0x1
#define _STATUS_SHAD_DC_SHAD_POSITION                       0x1
#define _STATUS_SHAD_DC_SHAD_SIZE                           0x1
#define _STATUS_SHAD_DC_SHAD_LENGTH                         0x1
#define _STATUS_SHAD_DC_SHAD_MASK                           0x2
#define _STATUS_SHAD_Z_SHAD_POSN                            0x2
#define _STATUS_SHAD_Z_SHAD_POSITION                        0x2
#define _STATUS_SHAD_Z_SHAD_SIZE                            0x1
#define _STATUS_SHAD_Z_SHAD_LENGTH                          0x1
#define _STATUS_SHAD_Z_SHAD_MASK                            0x4

// Register: WREG_SHAD
unsigned char           WREG_SHAD           ; //SWAP 0xFE5;
#ifndef _LIB_BUILD
asm("WREG_SHAD equ 0FE5h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned WREG_SHAD              :8;
    };
} WREG_SHADbits_t;
WREG_SHADbits_t WREG_SHADbits ; //SWAP 0xFE5;
// bitfield macros
#define _WREG_SHAD_WREG_SHAD_POSN                           0x0
#define _WREG_SHAD_WREG_SHAD_POSITION                       0x0
#define _WREG_SHAD_WREG_SHAD_SIZE                           0x8
#define _WREG_SHAD_WREG_SHAD_LENGTH                         0x8
#define _WREG_SHAD_WREG_SHAD_MASK                           0xFF

// Register: BSR_SHAD
unsigned char           BSR_SHAD            ; //SWAP 0xFE6;
#ifndef _LIB_BUILD
asm("BSR_SHAD equ 0FE6h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned BSR_SHAD               :5;
    };
} BSR_SHADbits_t;
BSR_SHADbits_t BSR_SHADbits ; //SWAP 0xFE6;
// bitfield macros
#define _BSR_SHAD_BSR_SHAD_POSN                             0x0
#define _BSR_SHAD_BSR_SHAD_POSITION                         0x0
#define _BSR_SHAD_BSR_SHAD_SIZE                             0x5
#define _BSR_SHAD_BSR_SHAD_LENGTH                           0x5
#define _BSR_SHAD_BSR_SHAD_MASK                             0x1F

// Register: PCLATH_SHAD
unsigned char           PCLATH_SHAD         ; //SWAP 0xFE7;
#ifndef _LIB_BUILD
asm("PCLATH_SHAD equ 0FE7h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned PCLATH_SHAD            :7;
    };
} PCLATH_SHADbits_t;
PCLATH_SHADbits_t PCLATH_SHADbits ; //SWAP 0xFE7;
// bitfield macros
#define _PCLATH_SHAD_PCLATH_SHAD_POSN                       0x0
#define _PCLATH_SHAD_PCLATH_SHAD_POSITION                   0x0
#define _PCLATH_SHAD_PCLATH_SHAD_SIZE                       0x7
#define _PCLATH_SHAD_PCLATH_SHAD_LENGTH                     0x7
#define _PCLATH_SHAD_PCLATH_SHAD_MASK                       0x7F

// Register: FSR0L_SHAD
unsigned char           FSR0L_SHAD          ; //SWAP 0xFE8;
#ifndef _LIB_BUILD
asm("FSR0L_SHAD equ 0FE8h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0L_SHAD             :8;
    };
} FSR0L_SHADbits_t;
FSR0L_SHADbits_t FSR0L_SHADbits ; //SWAP 0xFE8;
// bitfield macros
#define _FSR0L_SHAD_FSR0L_SHAD_POSN                         0x0
#define _FSR0L_SHAD_FSR0L_SHAD_POSITION                     0x0
#define _FSR0L_SHAD_FSR0L_SHAD_SIZE                         0x8
#define _FSR0L_SHAD_FSR0L_SHAD_LENGTH                       0x8
#define _FSR0L_SHAD_FSR0L_SHAD_MASK                         0xFF

// Register: FSR0H_SHAD
unsigned char           FSR0H_SHAD          ; //SWAP 0xFE9;
#ifndef _LIB_BUILD
asm("FSR0H_SHAD equ 0FE9h");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR0H_SHAD             :8;
    };
} FSR0H_SHADbits_t;
FSR0H_SHADbits_t FSR0H_SHADbits ; //SWAP 0xFE9;
// bitfield macros
#define _FSR0H_SHAD_FSR0H_SHAD_POSN                         0x0
#define _FSR0H_SHAD_FSR0H_SHAD_POSITION                     0x0
#define _FSR0H_SHAD_FSR0H_SHAD_SIZE                         0x8
#define _FSR0H_SHAD_FSR0H_SHAD_LENGTH                       0x8
#define _FSR0H_SHAD_FSR0H_SHAD_MASK                         0xFF

// Register: FSR1L_SHAD
unsigned char           FSR1L_SHAD          ; //SWAP 0xFEA;
#ifndef _LIB_BUILD
asm("FSR1L_SHAD equ 0FEAh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1L_SHAD             :8;
    };
} FSR1L_SHADbits_t;
FSR1L_SHADbits_t FSR1L_SHADbits ; //SWAP 0xFEA;
// bitfield macros
#define _FSR1L_SHAD_FSR1L_SHAD_POSN                         0x0
#define _FSR1L_SHAD_FSR1L_SHAD_POSITION                     0x0
#define _FSR1L_SHAD_FSR1L_SHAD_SIZE                         0x8
#define _FSR1L_SHAD_FSR1L_SHAD_LENGTH                       0x8
#define _FSR1L_SHAD_FSR1L_SHAD_MASK                         0xFF

// Register: FSR1H_SHAD
unsigned char           FSR1H_SHAD          ; //SWAP 0xFEB;
#ifndef _LIB_BUILD
asm("FSR1H_SHAD equ 0FEBh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned FSR1H_SHAD             :8;
    };
} FSR1H_SHADbits_t;
FSR1H_SHADbits_t FSR1H_SHADbits ; //SWAP 0xFEB;
// bitfield macros
#define _FSR1H_SHAD_FSR1H_SHAD_POSN                         0x0
#define _FSR1H_SHAD_FSR1H_SHAD_POSITION                     0x0
#define _FSR1H_SHAD_FSR1H_SHAD_SIZE                         0x8
#define _FSR1H_SHAD_FSR1H_SHAD_LENGTH                       0x8
#define _FSR1H_SHAD_FSR1H_SHAD_MASK                         0xFF

// Register: STKPTR
unsigned char           STKPTR              ; //SWAP 0xFED;
#ifndef _LIB_BUILD
asm("STKPTR equ 0FEDh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned STKPTR                 :5;
    };
} STKPTRbits_t;
STKPTRbits_t STKPTRbits ; //SWAP 0xFED;
// bitfield macros
#define _STKPTR_STKPTR_POSN                                 0x0
#define _STKPTR_STKPTR_POSITION                             0x0
#define _STKPTR_STKPTR_SIZE                                 0x5
#define _STKPTR_STKPTR_LENGTH                               0x5
#define _STKPTR_STKPTR_MASK                                 0x1F

// Register: TOSL
unsigned char           TOSL                ; //SWAP 0xFEE;
#ifndef _LIB_BUILD
asm("TOSL equ 0FEEh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSL                   :8;
    };
} TOSLbits_t;
TOSLbits_t TOSLbits ; //SWAP 0xFEE;
// bitfield macros
#define _TOSL_TOSL_POSN                                     0x0
#define _TOSL_TOSL_POSITION                                 0x0
#define _TOSL_TOSL_SIZE                                     0x8
#define _TOSL_TOSL_LENGTH                                   0x8
#define _TOSL_TOSL_MASK                                     0xFF

// Register: TOSH
unsigned char           TOSH                ; //SWAP 0xFEF;
#ifndef _LIB_BUILD
asm("TOSH equ 0FEFh");
#endif
// bitfield definitions
typedef union {
    struct {
        unsigned TOSH                   :7;
    };
} TOSHbits_t;
TOSHbits_t TOSHbits ; //SWAP 0xFEF;
// bitfield macros
#define _TOSH_TOSH_POSN                                     0x0
#define _TOSH_TOSH_POSITION                                 0x0
#define _TOSH_TOSH_SIZE                                     0x7
#define _TOSH_TOSH_LENGTH                                   0x7
#define _TOSH_TOSH_MASK                                     0x7F

/*
 * Bit Definitions
 */
#define _DEPRECATED __attribute__((__deprecated__))
#ifndef BANKMASK
#define BANKMASK(addr) ((addr)&07Fh)
#endif
__bit                   ABDEN               ; //SWAP (((unsigned) &BAUD1CON)*8) + 0;
#define                                 ABDEN_bit           BANKMASK(BAUD1CON), 0
__bit                   ABDOVF              ; //SWAP (((unsigned) &BAUD1CON)*8) + 7;
#define                                 ABDOVF_bit          BANKMASK(BAUD1CON), 7
__bit                   ACKDT               ; //SWAP (((unsigned) &SSPCON2)*8) + 5;
#define                                 ACKDT_bit           BANKMASK(SSPCON2), 5
__bit                   ACKEN               ; //SWAP (((unsigned) &SSPCON2)*8) + 4;
#define                                 ACKEN_bit           BANKMASK(SSPCON2), 4
__bit                   ACKSTAT             ; //SWAP (((unsigned) &SSPCON2)*8) + 6;
#define                                 ACKSTAT_bit         BANKMASK(SSPCON2), 6
__bit                   ACKTIM              ; //SWAP (((unsigned) &SSPCON3)*8) + 7;
#define                                 ACKTIM_bit          BANKMASK(SSPCON3), 7
__bit                   ADCS0               ; //SWAP (((unsigned) &ADCON1)*8) + 4;
#define                                 ADCS0_bit           BANKMASK(ADCON1), 4
__bit                   ADCS1               ; //SWAP (((unsigned) &ADCON1)*8) + 5;
#define                                 ADCS1_bit           BANKMASK(ADCON1), 5
__bit                   ADCS2               ; //SWAP (((unsigned) &ADCON1)*8) + 6;
#define                                 ADCS2_bit           BANKMASK(ADCON1), 6
__bit                   ADDEN               ; //SWAP (((unsigned) &RC1STA)*8) + 3;
#define                                 ADDEN_bit           BANKMASK(RC1STA), 3
__bit                   ADFM                ; //SWAP (((unsigned) &ADCON1)*8) + 7;
#define                                 ADFM_bit            BANKMASK(ADCON1), 7
__bit                   ADFVR0              ; //SWAP (((unsigned) &FVRCON)*8) + 0;
#define                                 ADFVR0_bit          BANKMASK(FVRCON), 0
__bit                   ADFVR1              ; //SWAP (((unsigned) &FVRCON)*8) + 1;
#define                                 ADFVR1_bit          BANKMASK(FVRCON), 1
__bit                   ADGO                ; //SWAP (((unsigned) &ADCON0)*8) + 1;
#define                                 ADGO_bit            BANKMASK(ADCON0), 1
__bit                   ADIE                ; //SWAP (((unsigned) &PIE1)*8) + 6;
#define                                 ADIE_bit            BANKMASK(PIE1), 6
__bit                   ADIF                ; //SWAP (((unsigned) &PIR1)*8) + 6;
#define                                 ADIF_bit            BANKMASK(PIR1), 6
__bit                   ADNREF              ; //SWAP (((unsigned) &ADCON1)*8) + 2;
#define                                 ADNREF_bit          BANKMASK(ADCON1), 2
__bit                   ADON                ; //SWAP (((unsigned) &ADCON0)*8) + 0;
#define                                 ADON_bit            BANKMASK(ADCON0), 0
__bit                   ADPREF0             ; //SWAP (((unsigned) &ADCON1)*8) + 0;
#define                                 ADPREF0_bit         BANKMASK(ADCON1), 0
__bit                   ADPREF1             ; //SWAP (((unsigned) &ADCON1)*8) + 1;
#define                                 ADPREF1_bit         BANKMASK(ADCON1), 1
__bit                   ADRMD               ; //SWAP (((unsigned) &ADCON0)*8) + 7;
#define                                 ADRMD_bit           BANKMASK(ADCON0), 7
__bit                   AHEN                ; //SWAP (((unsigned) &SSPCON3)*8) + 1;
#define                                 AHEN_bit            BANKMASK(SSPCON3), 1
__bit                   ANSA0               ; //SWAP (((unsigned) &ANSELA)*8) + 0;
#define                                 ANSA0_bit           BANKMASK(ANSELA), 0
__bit                   ANSA1               ; //SWAP (((unsigned) &ANSELA)*8) + 1;
#define                                 ANSA1_bit           BANKMASK(ANSELA), 1
__bit                   ANSA2               ; //SWAP (((unsigned) &ANSELA)*8) + 2;
#define                                 ANSA2_bit           BANKMASK(ANSELA), 2
__bit                   ANSA3               ; //SWAP (((unsigned) &ANSELA)*8) + 3;
#define                                 ANSA3_bit           BANKMASK(ANSELA), 3
__bit                   ANSA4               ; //SWAP (((unsigned) &ANSELA)*8) + 4;
#define                                 ANSA4_bit           BANKMASK(ANSELA), 4
__bit                   ANSA5               ; //SWAP (((unsigned) &ANSELA)*8) + 5;
#define                                 ANSA5_bit           BANKMASK(ANSELA), 5
__bit                   ANSA7               ; //SWAP (((unsigned) &ANSELA)*8) + 7;
#define                                 ANSA7_bit           BANKMASK(ANSELA), 7
__bit                   ANSB0               ; //SWAP (((unsigned) &ANSELB)*8) + 0;
#define                                 ANSB0_bit           BANKMASK(ANSELB), 0
__bit                   ANSB1               ; //SWAP (((unsigned) &ANSELB)*8) + 1;
#define                                 ANSB1_bit           BANKMASK(ANSELB), 1
__bit                   ANSB2               ; //SWAP (((unsigned) &ANSELB)*8) + 2;
#define                                 ANSB2_bit           BANKMASK(ANSELB), 2
__bit                   ANSB3               ; //SWAP (((unsigned) &ANSELB)*8) + 3;
#define                                 ANSB3_bit           BANKMASK(ANSELB), 3
__bit                   ANSB4               ; //SWAP (((unsigned) &ANSELB)*8) + 4;
#define                                 ANSB4_bit           BANKMASK(ANSELB), 4
__bit                   ANSB5               ; //SWAP (((unsigned) &ANSELB)*8) + 5;
#define                                 ANSB5_bit           BANKMASK(ANSELB), 5
__bit                   BCL1IE              ; //SWAP (((unsigned) &PIE2)*8) + 3;
#define                                 BCL1IE_bit          BANKMASK(PIE2), 3
__bit                   BCL1IF              ; //SWAP (((unsigned) &PIR2)*8) + 3;
#define                                 BCL1IF_bit          BANKMASK(PIR2), 3
__bit                   BF                  ; //SWAP (((unsigned) &SSPSTAT)*8) + 0;
#define                                 BF_bit              BANKMASK(SSPSTAT), 0
__bit                   BOEN                ; //SWAP (((unsigned) &SSPCON3)*8) + 4;
#define                                 BOEN_bit            BANKMASK(SSPCON3), 4
__bit                   BORFS               ; //SWAP (((unsigned) &BORCON)*8) + 6;
#define                                 BORFS_bit           BANKMASK(BORCON), 6
__bit                   BORRDY              ; //SWAP (((unsigned) &BORCON)*8) + 0;
#define                                 BORRDY_bit          BANKMASK(BORCON), 0
__bit                   BRG16               ; //SWAP (((unsigned) &BAUD1CON)*8) + 3;
#define                                 BRG16_bit           BANKMASK(BAUD1CON), 3
__bit                   BRGH                ; //SWAP (((unsigned) &TX1STA)*8) + 2;
#define                                 BRGH_bit            BANKMASK(TX1STA), 2
__bit                   BSR0                ; //SWAP (((unsigned) &BSR)*8) + 0;
#define                                 BSR0_bit            BANKMASK(BSR), 0
__bit                   BSR1                ; //SWAP (((unsigned) &BSR)*8) + 1;
#define                                 BSR1_bit            BANKMASK(BSR), 1
__bit                   BSR2                ; //SWAP (((unsigned) &BSR)*8) + 2;
#define                                 BSR2_bit            BANKMASK(BSR), 2
__bit                   BSR3                ; //SWAP (((unsigned) &BSR)*8) + 3;
#define                                 BSR3_bit            BANKMASK(BSR), 3
__bit                   BSR4                ; //SWAP (((unsigned) &BSR)*8) + 4;
#define                                 BSR4_bit            BANKMASK(BSR), 4
__bit                   C1HYS               ; //SWAP (((unsigned) &CM1CON0)*8) + 1;
#define                                 C1HYS_bit           BANKMASK(CM1CON0), 1
__bit                   C1IE                ; //SWAP (((unsigned) &PIE2)*8) + 5;
#define                                 C1IE_bit            BANKMASK(PIE2), 5
__bit                   C1IF                ; //SWAP (((unsigned) &PIR2)*8) + 5;
#define                                 C1IF_bit            BANKMASK(PIR2), 5
__bit                   C1INTN              ; //SWAP (((unsigned) &CM1CON1)*8) + 6;
#define                                 C1INTN_bit          BANKMASK(CM1CON1), 6
__bit                   C1INTP              ; //SWAP (((unsigned) &CM1CON1)*8) + 7;
#define                                 C1INTP_bit          BANKMASK(CM1CON1), 7
__bit                   C1NCH0              ; //SWAP (((unsigned) &CM1CON1)*8) + 0;
#define                                 C1NCH0_bit          BANKMASK(CM1CON1), 0
__bit                   C1NCH1              ; //SWAP (((unsigned) &CM1CON1)*8) + 1;
#define                                 C1NCH1_bit          BANKMASK(CM1CON1), 1
__bit                   C1NCH2              ; //SWAP (((unsigned) &CM1CON1)*8) + 2;
#define                                 C1NCH2_bit          BANKMASK(CM1CON1), 2
__bit                   C1OE                ; //SWAP (((unsigned) &CM1CON0)*8) + 5;
#define                                 C1OE_bit            BANKMASK(CM1CON0), 5
__bit                   C1ON                ; //SWAP (((unsigned) &CM1CON0)*8) + 7;
#define                                 C1ON_bit            BANKMASK(CM1CON0), 7
__bit                   C1OUT               ; //SWAP (((unsigned) &CM1CON0)*8) + 6;
#define                                 C1OUT_bit           BANKMASK(CM1CON0), 6
__bit                   C1PCH0              ; //SWAP (((unsigned) &CM1CON1)*8) + 3;
#define                                 C1PCH0_bit          BANKMASK(CM1CON1), 3
__bit                   C1PCH1              ; //SWAP (((unsigned) &CM1CON1)*8) + 4;
#define                                 C1PCH1_bit          BANKMASK(CM1CON1), 4
__bit                   C1PCH2              ; //SWAP (((unsigned) &CM1CON1)*8) + 5;
#define                                 C1PCH2_bit          BANKMASK(CM1CON1), 5
__bit                   C1POL               ; //SWAP (((unsigned) &CM1CON0)*8) + 4;
#define                                 C1POL_bit           BANKMASK(CM1CON0), 4
__bit                   C1SP                ; //SWAP (((unsigned) &CM1CON0)*8) + 2;
#define                                 C1SP_bit            BANKMASK(CM1CON0), 2
__bit                   C1SYNC              ; //SWAP (((unsigned) &CM1CON0)*8) + 0;
#define                                 C1SYNC_bit          BANKMASK(CM1CON0), 0
__bit                   C1ZLF               ; //SWAP (((unsigned) &CM1CON0)*8) + 3;
#define                                 C1ZLF_bit           BANKMASK(CM1CON0), 3
__bit                   C2HYS               ; //SWAP (((unsigned) &CM2CON0)*8) + 1;
#define                                 C2HYS_bit           BANKMASK(CM2CON0), 1
__bit                   C2IE                ; //SWAP (((unsigned) &PIE2)*8) + 6;
#define                                 C2IE_bit            BANKMASK(PIE2), 6
__bit                   C2IF                ; //SWAP (((unsigned) &PIR2)*8) + 6;
#define                                 C2IF_bit            BANKMASK(PIR2), 6
__bit                   C2INTN              ; //SWAP (((unsigned) &CM2CON1)*8) + 6;
#define                                 C2INTN_bit          BANKMASK(CM2CON1), 6
__bit                   C2INTP              ; //SWAP (((unsigned) &CM2CON1)*8) + 7;
#define                                 C2INTP_bit          BANKMASK(CM2CON1), 7
__bit                   C2NCH0              ; //SWAP (((unsigned) &CM2CON1)*8) + 0;
#define                                 C2NCH0_bit          BANKMASK(CM2CON1), 0
__bit                   C2NCH1              ; //SWAP (((unsigned) &CM2CON1)*8) + 1;
#define                                 C2NCH1_bit          BANKMASK(CM2CON1), 1
__bit                   C2NCH2              ; //SWAP (((unsigned) &CM2CON1)*8) + 2;
#define                                 C2NCH2_bit          BANKMASK(CM2CON1), 2
__bit                   C2OE                ; //SWAP (((unsigned) &CM2CON0)*8) + 5;
#define                                 C2OE_bit            BANKMASK(CM2CON0), 5
__bit                   C2ON                ; //SWAP (((unsigned) &CM2CON0)*8) + 7;
#define                                 C2ON_bit            BANKMASK(CM2CON0), 7
__bit                   C2OUT               ; //SWAP (((unsigned) &CM2CON0)*8) + 6;
#define                                 C2OUT_bit           BANKMASK(CM2CON0), 6
__bit                   C2OUTSEL            ; //SWAP (((unsigned) &APFCON)*8) + 7;
#define                                 C2OUTSEL_bit        BANKMASK(APFCON), 7
__bit                   C2PCH0              ; //SWAP (((unsigned) &CM2CON1)*8) + 3;
#define                                 C2PCH0_bit          BANKMASK(CM2CON1), 3
__bit                   C2PCH1              ; //SWAP (((unsigned) &CM2CON1)*8) + 4;
#define                                 C2PCH1_bit          BANKMASK(CM2CON1), 4
__bit                   C2PCH2              ; //SWAP (((unsigned) &CM2CON1)*8) + 5;
#define                                 C2PCH2_bit          BANKMASK(CM2CON1), 5
__bit                   C2POL               ; //SWAP (((unsigned) &CM2CON0)*8) + 4;
#define                                 C2POL_bit           BANKMASK(CM2CON0), 4
__bit                   C2SP                ; //SWAP (((unsigned) &CM2CON0)*8) + 2;
#define                                 C2SP_bit            BANKMASK(CM2CON0), 2
__bit                   C2SYNC              ; //SWAP (((unsigned) &CM2CON0)*8) + 0;
#define                                 C2SYNC_bit          BANKMASK(CM2CON0), 0
__bit                   C2ZLF               ; //SWAP (((unsigned) &CM2CON0)*8) + 3;
#define                                 C2ZLF_bit           BANKMASK(CM2CON0), 3
__bit                   C3HYS               ; //SWAP (((unsigned) &CM3CON0)*8) + 1;
#define                                 C3HYS_bit           BANKMASK(CM3CON0), 1
__bit                   C3IE                ; //SWAP (((unsigned) &PIE2)*8) + 1;
#define                                 C3IE_bit            BANKMASK(PIE2), 1
__bit                   C3IF                ; //SWAP (((unsigned) &PIR2)*8) + 1;
#define                                 C3IF_bit            BANKMASK(PIR2), 1
__bit                   C3INTN              ; //SWAP (((unsigned) &CM3CON1)*8) + 6;
#define                                 C3INTN_bit          BANKMASK(CM3CON1), 6
__bit                   C3INTP              ; //SWAP (((unsigned) &CM3CON1)*8) + 7;
#define                                 C3INTP_bit          BANKMASK(CM3CON1), 7
__bit                   C3NCH0              ; //SWAP (((unsigned) &CM3CON1)*8) + 0;
#define                                 C3NCH0_bit          BANKMASK(CM3CON1), 0
__bit                   C3NCH1              ; //SWAP (((unsigned) &CM3CON1)*8) + 1;
#define                                 C3NCH1_bit          BANKMASK(CM3CON1), 1
__bit                   C3NCH2              ; //SWAP (((unsigned) &CM3CON1)*8) + 2;
#define                                 C3NCH2_bit          BANKMASK(CM3CON1), 2
__bit                   C3OE                ; //SWAP (((unsigned) &CM3CON0)*8) + 5;
#define                                 C3OE_bit            BANKMASK(CM3CON0), 5
__bit                   C3ON                ; //SWAP (((unsigned) &CM3CON0)*8) + 7;
#define                                 C3ON_bit            BANKMASK(CM3CON0), 7
__bit                   C3OUT               ; //SWAP (((unsigned) &CM3CON0)*8) + 6;
#define                                 C3OUT_bit           BANKMASK(CM3CON0), 6
__bit                   C3PCH0              ; //SWAP (((unsigned) &CM3CON1)*8) + 3;
#define                                 C3PCH0_bit          BANKMASK(CM3CON1), 3
__bit                   C3PCH1              ; //SWAP (((unsigned) &CM3CON1)*8) + 4;
#define                                 C3PCH1_bit          BANKMASK(CM3CON1), 4
__bit                   C3PCH2              ; //SWAP (((unsigned) &CM3CON1)*8) + 5;
#define                                 C3PCH2_bit          BANKMASK(CM3CON1), 5
__bit                   C3POL               ; //SWAP (((unsigned) &CM3CON0)*8) + 4;
#define                                 C3POL_bit           BANKMASK(CM3CON0), 4
__bit                   C3SP                ; //SWAP (((unsigned) &CM3CON0)*8) + 2;
#define                                 C3SP_bit            BANKMASK(CM3CON0), 2
__bit                   C3SYNC              ; //SWAP (((unsigned) &CM3CON0)*8) + 0;
#define                                 C3SYNC_bit          BANKMASK(CM3CON0), 0
__bit                   C3ZLF               ; //SWAP (((unsigned) &CM3CON0)*8) + 3;
#define                                 C3ZLF_bit           BANKMASK(CM3CON0), 3
__bit                   CARRY               ; //SWAP (((unsigned) &STATUS)*8) + 0;
#define                                 CARRY_bit           BANKMASK(STATUS), 0
__bit                   CCP1IE              ; //SWAP (((unsigned) &PIE1)*8) + 2;
#define                                 CCP1IE_bit          BANKMASK(PIE1), 2
__bit                   CCP1IF              ; //SWAP (((unsigned) &PIR1)*8) + 2;
#define                                 CCP1IF_bit          BANKMASK(PIR1), 2
__bit                   CCP1M0              ; //SWAP (((unsigned) &CCP1CON)*8) + 0;
#define                                 CCP1M0_bit          BANKMASK(CCP1CON), 0
__bit                   CCP1M1              ; //SWAP (((unsigned) &CCP1CON)*8) + 1;
#define                                 CCP1M1_bit          BANKMASK(CCP1CON), 1
__bit                   CCP1M2              ; //SWAP (((unsigned) &CCP1CON)*8) + 2;
#define                                 CCP1M2_bit          BANKMASK(CCP1CON), 2
__bit                   CCP1M3              ; //SWAP (((unsigned) &CCP1CON)*8) + 3;
#define                                 CCP1M3_bit          BANKMASK(CCP1CON), 3
__bit                   CCP1SEL             ; //SWAP (((unsigned) &APFCON)*8) + 6;
#define                                 CCP1SEL_bit         BANKMASK(APFCON), 6
__bit                   CCP2IE              ; //SWAP (((unsigned) &PIE2)*8) + 0;
#define                                 CCP2IE_bit          BANKMASK(PIE2), 0
__bit                   CCP2IF              ; //SWAP (((unsigned) &PIR2)*8) + 0;
#define                                 CCP2IF_bit          BANKMASK(PIR2), 0
__bit                   CCP2M0              ; //SWAP (((unsigned) &CCP2CON)*8) + 0;
#define                                 CCP2M0_bit          BANKMASK(CCP2CON), 0
__bit                   CCP2M1              ; //SWAP (((unsigned) &CCP2CON)*8) + 1;
#define                                 CCP2M1_bit          BANKMASK(CCP2CON), 1
__bit                   CCP2M2              ; //SWAP (((unsigned) &CCP2CON)*8) + 2;
#define                                 CCP2M2_bit          BANKMASK(CCP2CON), 2
__bit                   CCP2M3              ; //SWAP (((unsigned) &CCP2CON)*8) + 3;
#define                                 CCP2M3_bit          BANKMASK(CCP2CON), 3
__bit                   CCP2SEL             ; //SWAP (((unsigned) &APFCON)*8) + 0;
#define                                 CCP2SEL_bit         BANKMASK(APFCON), 0
__bit                   CDAFVR0             ; //SWAP (((unsigned) &FVRCON)*8) + 2;
#define                                 CDAFVR0_bit         BANKMASK(FVRCON), 2
__bit                   CDAFVR1             ; //SWAP (((unsigned) &FVRCON)*8) + 3;
#define                                 CDAFVR1_bit         BANKMASK(FVRCON), 3
__bit                   CFGS                ; //SWAP (((unsigned) &EECON1)*8) + 6;
#define                                 CFGS_bit            BANKMASK(EECON1), 6
__bit                   CHS0                ; //SWAP (((unsigned) &ADCON0)*8) + 2;
#define                                 CHS0_bit            BANKMASK(ADCON0), 2
__bit                   CHS1                ; //SWAP (((unsigned) &ADCON0)*8) + 3;
#define                                 CHS1_bit            BANKMASK(ADCON0), 3
__bit                   CHS2                ; //SWAP (((unsigned) &ADCON0)*8) + 4;
#define                                 CHS2_bit            BANKMASK(ADCON0), 4
__bit                   CHS3                ; //SWAP (((unsigned) &ADCON0)*8) + 5;
#define                                 CHS3_bit            BANKMASK(ADCON0), 5
__bit                   CHS4                ; //SWAP (((unsigned) &ADCON0)*8) + 6;
#define                                 CHS4_bit            BANKMASK(ADCON0), 6
__bit                   CHSN0               ; //SWAP (((unsigned) &ADCON2)*8) + 0;
#define                                 CHSN0_bit           BANKMASK(ADCON2), 0
__bit                   CHSN1               ; //SWAP (((unsigned) &ADCON2)*8) + 1;
#define                                 CHSN1_bit           BANKMASK(ADCON2), 1
__bit                   CHSN2               ; //SWAP (((unsigned) &ADCON2)*8) + 2;
#define                                 CHSN2_bit           BANKMASK(ADCON2), 2
__bit                   CHSN3               ; //SWAP (((unsigned) &ADCON2)*8) + 3;
#define                                 CHSN3_bit           BANKMASK(ADCON2), 3
__bit                   CKE                 ; //SWAP (((unsigned) &SSPSTAT)*8) + 6;
#define                                 CKE_bit             BANKMASK(SSPSTAT), 6
__bit                   CKP                 ; //SWAP (((unsigned) &SSPCON1)*8) + 4;
#define                                 CKP_bit             BANKMASK(SSPCON1), 4
__bit                   CLKRDC0             ; //SWAP (((unsigned) &CLKRCON)*8) + 3;
#define                                 CLKRDC0_bit         BANKMASK(CLKRCON), 3
__bit                   CLKRDC1             ; //SWAP (((unsigned) &CLKRCON)*8) + 4;
#define                                 CLKRDC1_bit         BANKMASK(CLKRCON), 4
__bit                   CLKRDIV0            ; //SWAP (((unsigned) &CLKRCON)*8) + 0;
#define                                 CLKRDIV0_bit        BANKMASK(CLKRCON), 0
__bit                   CLKRDIV1            ; //SWAP (((unsigned) &CLKRCON)*8) + 1;
#define                                 CLKRDIV1_bit        BANKMASK(CLKRCON), 1
__bit                   CLKRDIV2            ; //SWAP (((unsigned) &CLKRCON)*8) + 2;
#define                                 CLKRDIV2_bit        BANKMASK(CLKRCON), 2
__bit                   CLKREN              ; //SWAP (((unsigned) &CLKRCON)*8) + 7;
#define                                 CLKREN_bit          BANKMASK(CLKRCON), 7
__bit                   CLKROE              ; //SWAP (((unsigned) &CLKRCON)*8) + 6;
#define                                 CLKROE_bit          BANKMASK(CLKRCON), 6
__bit                   CLKRSLR             ; //SWAP (((unsigned) &CLKRCON)*8) + 5;
#define                                 CLKRSLR_bit         BANKMASK(CLKRCON), 5
__bit                   CREN                ; //SWAP (((unsigned) &RC1STA)*8) + 4;
#define                                 CREN_bit            BANKMASK(RC1STA), 4
__bit                   CSRC                ; //SWAP (((unsigned) &TX1STA)*8) + 7;
#define                                 CSRC_bit            BANKMASK(TX1STA), 7
__bit                   C_SHAD              ; //SWAP (((unsigned) &STATUS_SHAD)*8) + 0;
#define                                 C_SHAD_bit          BANKMASK(STATUS_SHAD), 0
__bit                   DACEN               ; //SWAP (((unsigned) &DACCON0)*8) + 7;
#define                                 DACEN_bit           BANKMASK(DACCON0), 7
__bit                   DACNSS              ; //SWAP (((unsigned) &DACCON0)*8) + 0;
#define                                 DACNSS_bit          BANKMASK(DACCON0), 0
__bit                   DACOE1              ; //SWAP (((unsigned) &DACCON0)*8) + 5;
#define                                 DACOE1_bit          BANKMASK(DACCON0), 5
__bit                   DACOE2              ; //SWAP (((unsigned) &DACCON0)*8) + 4;
#define                                 DACOE2_bit          BANKMASK(DACCON0), 4
__bit                   DACPSS0             ; //SWAP (((unsigned) &DACCON0)*8) + 2;
#define                                 DACPSS0_bit         BANKMASK(DACCON0), 2
__bit                   DACPSS1             ; //SWAP (((unsigned) &DACCON0)*8) + 3;
#define                                 DACPSS1_bit         BANKMASK(DACCON0), 3
__bit                   DACR0               ; //SWAP (((unsigned) &DACCON1)*8) + 0;
#define                                 DACR0_bit           BANKMASK(DACCON1), 0
__bit                   DACR1               ; //SWAP (((unsigned) &DACCON1)*8) + 1;
#define                                 DACR1_bit           BANKMASK(DACCON1), 1
__bit                   DACR2               ; //SWAP (((unsigned) &DACCON1)*8) + 2;
#define                                 DACR2_bit           BANKMASK(DACCON1), 2
__bit                   DACR3               ; //SWAP (((unsigned) &DACCON1)*8) + 3;
#define                                 DACR3_bit           BANKMASK(DACCON1), 3
__bit                   DACR4               ; //SWAP (((unsigned) &DACCON1)*8) + 4;
#define                                 DACR4_bit           BANKMASK(DACCON1), 4
__bit                   DACR5               ; //SWAP (((unsigned) &DACCON1)*8) + 5;
#define                                 DACR5_bit           BANKMASK(DACCON1), 5
__bit                   DACR6               ; //SWAP (((unsigned) &DACCON1)*8) + 6;
#define                                 DACR6_bit           BANKMASK(DACCON1), 6
__bit                   DACR7               ; //SWAP (((unsigned) &DACCON1)*8) + 7;
#define                                 DACR7_bit           BANKMASK(DACCON1), 7
__bit                   DC                  ; //SWAP (((unsigned) &STATUS)*8) + 1;
#define                                 DC_bit              BANKMASK(STATUS), 1
__bit                   DC1B0               ; //SWAP (((unsigned) &CCP1CON)*8) + 4;
#define                                 DC1B0_bit           BANKMASK(CCP1CON), 4
__bit                   DC1B1               ; //SWAP (((unsigned) &CCP1CON)*8) + 5;
#define                                 DC1B1_bit           BANKMASK(CCP1CON), 5
__bit                   DC2B0               ; //SWAP (((unsigned) &CCP2CON)*8) + 4;
#define                                 DC2B0_bit           BANKMASK(CCP2CON), 4
__bit                   DC2B1               ; //SWAP (((unsigned) &CCP2CON)*8) + 5;
#define                                 DC2B1_bit           BANKMASK(CCP2CON), 5
__bit                   DC_SHAD             ; //SWAP (((unsigned) &STATUS_SHAD)*8) + 1;
#define                                 DC_SHAD_bit         BANKMASK(STATUS_SHAD), 1
__bit                   DHEN                ; //SWAP (((unsigned) &SSPCON3)*8) + 0;
#define                                 DHEN_bit            BANKMASK(SSPCON3), 0
__bit                   DONE                ; //SWAP (((unsigned) &ADCON0)*8) + 1;
#define                                 DONE_bit            BANKMASK(ADCON0), 1
__bit                   D_nA                ; //SWAP (((unsigned) &SSPSTAT)*8) + 5;
#define                                 D_nA_bit            BANKMASK(SSPSTAT), 5
__bit                   EEIE                ; //SWAP (((unsigned) &PIE2)*8) + 4;
#define                                 EEIE_bit            BANKMASK(PIE2), 4
__bit                   EEIF                ; //SWAP (((unsigned) &PIR2)*8) + 4;
#define                                 EEIF_bit            BANKMASK(PIR2), 4
__bit                   EEPGD               ; //SWAP (((unsigned) &EECON1)*8) + 7;
#define                                 EEPGD_bit           BANKMASK(EECON1), 7
__bit                   FERR                ; //SWAP (((unsigned) &RC1STA)*8) + 2;
#define                                 FERR_bit            BANKMASK(RC1STA), 2
__bit                   FREE                ; //SWAP (((unsigned) &EECON1)*8) + 4;
#define                                 FREE_bit            BANKMASK(EECON1), 4
__bit                   FVREN               ; //SWAP (((unsigned) &FVRCON)*8) + 7;
#define                                 FVREN_bit           BANKMASK(FVRCON), 7
__bit                   FVRRDY              ; //SWAP (((unsigned) &FVRCON)*8) + 6;
#define                                 FVRRDY_bit          BANKMASK(FVRCON), 6
__bit                   GCEN                ; //SWAP (((unsigned) &SSPCON2)*8) + 7;
#define                                 GCEN_bit            BANKMASK(SSPCON2), 7
__bit                   GIE                 ; //SWAP (((unsigned) &INTCON)*8) + 7;
#define                                 GIE_bit             BANKMASK(INTCON), 7
__bit                   GO                  ; //SWAP (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_bit              BANKMASK(ADCON0), 1
__bit                   GO_nDONE            ; //SWAP (((unsigned) &ADCON0)*8) + 1;
#define                                 GO_nDONE_bit        BANKMASK(ADCON0), 1
__bit                   HFIOFL              ; //SWAP (((unsigned) &OSCSTAT)*8) + 3;
#define                                 HFIOFL_bit          BANKMASK(OSCSTAT), 3
__bit                   HFIOFR              ; //SWAP (((unsigned) &OSCSTAT)*8) + 4;
#define                                 HFIOFR_bit          BANKMASK(OSCSTAT), 4
__bit                   HFIOFS              ; //SWAP (((unsigned) &OSCSTAT)*8) + 0;
#define                                 HFIOFS_bit          BANKMASK(OSCSTAT), 0
__bit                   INLVLA0             ; //SWAP (((unsigned) &INLVLA)*8) + 0;
#define                                 INLVLA0_bit         BANKMASK(INLVLA), 0
__bit                   INLVLA1             ; //SWAP (((unsigned) &INLVLA)*8) + 1;
#define                                 INLVLA1_bit         BANKMASK(INLVLA), 1
__bit                   INLVLA2             ; //SWAP (((unsigned) &INLVLA)*8) + 2;
#define                                 INLVLA2_bit         BANKMASK(INLVLA), 2
__bit                   INLVLA3             ; //SWAP (((unsigned) &INLVLA)*8) + 3;
#define                                 INLVLA3_bit         BANKMASK(INLVLA), 3
__bit                   INLVLA4             ; //SWAP (((unsigned) &INLVLA)*8) + 4;
#define                                 INLVLA4_bit         BANKMASK(INLVLA), 4
__bit                   INLVLA5             ; //SWAP (((unsigned) &INLVLA)*8) + 5;
#define                                 INLVLA5_bit         BANKMASK(INLVLA), 5
__bit                   INLVLA6             ; //SWAP (((unsigned) &INLVLA)*8) + 6;
#define                                 INLVLA6_bit         BANKMASK(INLVLA), 6
__bit                   INLVLA7             ; //SWAP (((unsigned) &INLVLA)*8) + 7;
#define                                 INLVLA7_bit         BANKMASK(INLVLA), 7
__bit                   INLVLB0             ; //SWAP (((unsigned) &INLVLB)*8) + 0;
#define                                 INLVLB0_bit         BANKMASK(INLVLB), 0
__bit                   INLVLB1             ; //SWAP (((unsigned) &INLVLB)*8) + 1;
#define                                 INLVLB1_bit         BANKMASK(INLVLB), 1
__bit                   INLVLB2             ; //SWAP (((unsigned) &INLVLB)*8) + 2;
#define                                 INLVLB2_bit         BANKMASK(INLVLB), 2
__bit                   INLVLB3             ; //SWAP (((unsigned) &INLVLB)*8) + 3;
#define                                 INLVLB3_bit         BANKMASK(INLVLB), 3
__bit                   INLVLB4             ; //SWAP (((unsigned) &INLVLB)*8) + 4;
#define                                 INLVLB4_bit         BANKMASK(INLVLB), 4
__bit                   INLVLB5             ; //SWAP (((unsigned) &INLVLB)*8) + 5;
#define                                 INLVLB5_bit         BANKMASK(INLVLB), 5
__bit                   INLVLB6             ; //SWAP (((unsigned) &INLVLB)*8) + 6;
#define                                 INLVLB6_bit         BANKMASK(INLVLB), 6
__bit                   INLVLB7             ; //SWAP (((unsigned) &INLVLB)*8) + 7;
#define                                 INLVLB7_bit         BANKMASK(INLVLB), 7
__bit                   INLVLC0             ; //SWAP (((unsigned) &INLVLC)*8) + 0;
#define                                 INLVLC0_bit         BANKMASK(INLVLC), 0
__bit                   INLVLC1             ; //SWAP (((unsigned) &INLVLC)*8) + 1;
#define                                 INLVLC1_bit         BANKMASK(INLVLC), 1
__bit                   INLVLC2             ; //SWAP (((unsigned) &INLVLC)*8) + 2;
#define                                 INLVLC2_bit         BANKMASK(INLVLC), 2
__bit                   INLVLC3             ; //SWAP (((unsigned) &INLVLC)*8) + 3;
#define                                 INLVLC3_bit         BANKMASK(INLVLC), 3
__bit                   INLVLC4             ; //SWAP (((unsigned) &INLVLC)*8) + 4;
#define                                 INLVLC4_bit         BANKMASK(INLVLC), 4
__bit                   INLVLC5             ; //SWAP (((unsigned) &INLVLC)*8) + 5;
#define                                 INLVLC5_bit         BANKMASK(INLVLC), 5
__bit                   INLVLC6             ; //SWAP (((unsigned) &INLVLC)*8) + 6;
#define                                 INLVLC6_bit         BANKMASK(INLVLC), 6
__bit                   INLVLC7             ; //SWAP (((unsigned) &INLVLC)*8) + 7;
#define                                 INLVLC7_bit         BANKMASK(INLVLC), 7
__bit                   INLVLE3             ; //SWAP (((unsigned) &INLVLE)*8) + 3;
#define                                 INLVLE3_bit         BANKMASK(INLVLE), 3
__bit                   INTE                ; //SWAP (((unsigned) &INTCON)*8) + 4;
#define                                 INTE_bit            BANKMASK(INTCON), 4
__bit                   INTEDG              ; //SWAP (((unsigned) &OPTION_REG)*8) + 6;
#define                                 INTEDG_bit          BANKMASK(OPTION_REG), 6
__bit                   INTF                ; //SWAP (((unsigned) &INTCON)*8) + 1;
#define                                 INTF_bit            BANKMASK(INTCON), 1
__bit                   IOCAF0              ; //SWAP (((unsigned) &IOCAF)*8) + 0;
#define                                 IOCAF0_bit          BANKMASK(IOCAF), 0
__bit                   IOCAF1              ; //SWAP (((unsigned) &IOCAF)*8) + 1;
#define                                 IOCAF1_bit          BANKMASK(IOCAF), 1
__bit                   IOCAF2              ; //SWAP (((unsigned) &IOCAF)*8) + 2;
#define                                 IOCAF2_bit          BANKMASK(IOCAF), 2
__bit                   IOCAF3              ; //SWAP (((unsigned) &IOCAF)*8) + 3;
#define                                 IOCAF3_bit          BANKMASK(IOCAF), 3
__bit                   IOCAF4              ; //SWAP (((unsigned) &IOCAF)*8) + 4;
#define                                 IOCAF4_bit          BANKMASK(IOCAF), 4
__bit                   IOCAF5              ; //SWAP (((unsigned) &IOCAF)*8) + 5;
#define                                 IOCAF5_bit          BANKMASK(IOCAF), 5
__bit                   IOCAF6              ; //SWAP (((unsigned) &IOCAF)*8) + 6;
#define                                 IOCAF6_bit          BANKMASK(IOCAF), 6
__bit                   IOCAF7              ; //SWAP (((unsigned) &IOCAF)*8) + 7;
#define                                 IOCAF7_bit          BANKMASK(IOCAF), 7
__bit                   IOCAN0              ; //SWAP (((unsigned) &IOCAN)*8) + 0;
#define                                 IOCAN0_bit          BANKMASK(IOCAN), 0
__bit                   IOCAN1              ; //SWAP (((unsigned) &IOCAN)*8) + 1;
#define                                 IOCAN1_bit          BANKMASK(IOCAN), 1
__bit                   IOCAN2              ; //SWAP (((unsigned) &IOCAN)*8) + 2;
#define                                 IOCAN2_bit          BANKMASK(IOCAN), 2
__bit                   IOCAN3              ; //SWAP (((unsigned) &IOCAN)*8) + 3;
#define                                 IOCAN3_bit          BANKMASK(IOCAN), 3
__bit                   IOCAN4              ; //SWAP (((unsigned) &IOCAN)*8) + 4;
#define                                 IOCAN4_bit          BANKMASK(IOCAN), 4
__bit                   IOCAN5              ; //SWAP (((unsigned) &IOCAN)*8) + 5;
#define                                 IOCAN5_bit          BANKMASK(IOCAN), 5
__bit                   IOCAN6              ; //SWAP (((unsigned) &IOCAN)*8) + 6;
#define                                 IOCAN6_bit          BANKMASK(IOCAN), 6
__bit                   IOCAN7              ; //SWAP (((unsigned) &IOCAN)*8) + 7;
#define                                 IOCAN7_bit          BANKMASK(IOCAN), 7
__bit                   IOCAP0              ; //SWAP (((unsigned) &IOCAP)*8) + 0;
#define                                 IOCAP0_bit          BANKMASK(IOCAP), 0
__bit                   IOCAP1              ; //SWAP (((unsigned) &IOCAP)*8) + 1;
#define                                 IOCAP1_bit          BANKMASK(IOCAP), 1
__bit                   IOCAP2              ; //SWAP (((unsigned) &IOCAP)*8) + 2;
#define                                 IOCAP2_bit          BANKMASK(IOCAP), 2
__bit                   IOCAP3              ; //SWAP (((unsigned) &IOCAP)*8) + 3;
#define                                 IOCAP3_bit          BANKMASK(IOCAP), 3
__bit                   IOCAP4              ; //SWAP (((unsigned) &IOCAP)*8) + 4;
#define                                 IOCAP4_bit          BANKMASK(IOCAP), 4
__bit                   IOCAP5              ; //SWAP (((unsigned) &IOCAP)*8) + 5;
#define                                 IOCAP5_bit          BANKMASK(IOCAP), 5
__bit                   IOCAP6              ; //SWAP (((unsigned) &IOCAP)*8) + 6;
#define                                 IOCAP6_bit          BANKMASK(IOCAP), 6
__bit                   IOCAP7              ; //SWAP (((unsigned) &IOCAP)*8) + 7;
#define                                 IOCAP7_bit          BANKMASK(IOCAP), 7
__bit                   IOCBF0              ; //SWAP (((unsigned) &IOCBF)*8) + 0;
#define                                 IOCBF0_bit          BANKMASK(IOCBF), 0
__bit                   IOCBF1              ; //SWAP (((unsigned) &IOCBF)*8) + 1;
#define                                 IOCBF1_bit          BANKMASK(IOCBF), 1
__bit                   IOCBF2              ; //SWAP (((unsigned) &IOCBF)*8) + 2;
#define                                 IOCBF2_bit          BANKMASK(IOCBF), 2
__bit                   IOCBF3              ; //SWAP (((unsigned) &IOCBF)*8) + 3;
#define                                 IOCBF3_bit          BANKMASK(IOCBF), 3
__bit                   IOCBF4              ; //SWAP (((unsigned) &IOCBF)*8) + 4;
#define                                 IOCBF4_bit          BANKMASK(IOCBF), 4
__bit                   IOCBF5              ; //SWAP (((unsigned) &IOCBF)*8) + 5;
#define                                 IOCBF5_bit          BANKMASK(IOCBF), 5
__bit                   IOCBF6              ; //SWAP (((unsigned) &IOCBF)*8) + 6;
#define                                 IOCBF6_bit          BANKMASK(IOCBF), 6
__bit                   IOCBF7              ; //SWAP (((unsigned) &IOCBF)*8) + 7;
#define                                 IOCBF7_bit          BANKMASK(IOCBF), 7
__bit                   IOCBN0              ; //SWAP (((unsigned) &IOCBN)*8) + 0;
#define                                 IOCBN0_bit          BANKMASK(IOCBN), 0
__bit                   IOCBN1              ; //SWAP (((unsigned) &IOCBN)*8) + 1;
#define                                 IOCBN1_bit          BANKMASK(IOCBN), 1
__bit                   IOCBN2              ; //SWAP (((unsigned) &IOCBN)*8) + 2;
#define                                 IOCBN2_bit          BANKMASK(IOCBN), 2
__bit                   IOCBN3              ; //SWAP (((unsigned) &IOCBN)*8) + 3;
#define                                 IOCBN3_bit          BANKMASK(IOCBN), 3
__bit                   IOCBN4              ; //SWAP (((unsigned) &IOCBN)*8) + 4;
#define                                 IOCBN4_bit          BANKMASK(IOCBN), 4
__bit                   IOCBN5              ; //SWAP (((unsigned) &IOCBN)*8) + 5;
#define                                 IOCBN5_bit          BANKMASK(IOCBN), 5
__bit                   IOCBN6              ; //SWAP (((unsigned) &IOCBN)*8) + 6;
#define                                 IOCBN6_bit          BANKMASK(IOCBN), 6
__bit                   IOCBN7              ; //SWAP (((unsigned) &IOCBN)*8) + 7;
#define                                 IOCBN7_bit          BANKMASK(IOCBN), 7
__bit                   IOCBP0              ; //SWAP (((unsigned) &IOCBP)*8) + 0;
#define                                 IOCBP0_bit          BANKMASK(IOCBP), 0
__bit                   IOCBP1              ; //SWAP (((unsigned) &IOCBP)*8) + 1;
#define                                 IOCBP1_bit          BANKMASK(IOCBP), 1
__bit                   IOCBP2              ; //SWAP (((unsigned) &IOCBP)*8) + 2;
#define                                 IOCBP2_bit          BANKMASK(IOCBP), 2
__bit                   IOCBP3              ; //SWAP (((unsigned) &IOCBP)*8) + 3;
#define                                 IOCBP3_bit          BANKMASK(IOCBP), 3
__bit                   IOCBP4              ; //SWAP (((unsigned) &IOCBP)*8) + 4;
#define                                 IOCBP4_bit          BANKMASK(IOCBP), 4
__bit                   IOCBP5              ; //SWAP (((unsigned) &IOCBP)*8) + 5;
#define                                 IOCBP5_bit          BANKMASK(IOCBP), 5
__bit                   IOCBP6              ; //SWAP (((unsigned) &IOCBP)*8) + 6;
#define                                 IOCBP6_bit          BANKMASK(IOCBP), 6
__bit                   IOCBP7              ; //SWAP (((unsigned) &IOCBP)*8) + 7;
#define                                 IOCBP7_bit          BANKMASK(IOCBP), 7
__bit                   IOCCF0              ; //SWAP (((unsigned) &IOCCF)*8) + 0;
#define                                 IOCCF0_bit          BANKMASK(IOCCF), 0
__bit                   IOCCF1              ; //SWAP (((unsigned) &IOCCF)*8) + 1;
#define                                 IOCCF1_bit          BANKMASK(IOCCF), 1
__bit                   IOCCF2              ; //SWAP (((unsigned) &IOCCF)*8) + 2;
#define                                 IOCCF2_bit          BANKMASK(IOCCF), 2
__bit                   IOCCF3              ; //SWAP (((unsigned) &IOCCF)*8) + 3;
#define                                 IOCCF3_bit          BANKMASK(IOCCF), 3
__bit                   IOCCF4              ; //SWAP (((unsigned) &IOCCF)*8) + 4;
#define                                 IOCCF4_bit          BANKMASK(IOCCF), 4
__bit                   IOCCF5              ; //SWAP (((unsigned) &IOCCF)*8) + 5;
#define                                 IOCCF5_bit          BANKMASK(IOCCF), 5
__bit                   IOCCF6              ; //SWAP (((unsigned) &IOCCF)*8) + 6;
#define                                 IOCCF6_bit          BANKMASK(IOCCF), 6
__bit                   IOCCF7              ; //SWAP (((unsigned) &IOCCF)*8) + 7;
#define                                 IOCCF7_bit          BANKMASK(IOCCF), 7
__bit                   IOCCN0              ; //SWAP (((unsigned) &IOCCN)*8) + 0;
#define                                 IOCCN0_bit          BANKMASK(IOCCN), 0
__bit                   IOCCN1              ; //SWAP (((unsigned) &IOCCN)*8) + 1;
#define                                 IOCCN1_bit          BANKMASK(IOCCN), 1
__bit                   IOCCN2              ; //SWAP (((unsigned) &IOCCN)*8) + 2;
#define                                 IOCCN2_bit          BANKMASK(IOCCN), 2
__bit                   IOCCN3              ; //SWAP (((unsigned) &IOCCN)*8) + 3;
#define                                 IOCCN3_bit          BANKMASK(IOCCN), 3
__bit                   IOCCN4              ; //SWAP (((unsigned) &IOCCN)*8) + 4;
#define                                 IOCCN4_bit          BANKMASK(IOCCN), 4
__bit                   IOCCN5              ; //SWAP (((unsigned) &IOCCN)*8) + 5;
#define                                 IOCCN5_bit          BANKMASK(IOCCN), 5
__bit                   IOCCN6              ; //SWAP (((unsigned) &IOCCN)*8) + 6;
#define                                 IOCCN6_bit          BANKMASK(IOCCN), 6
__bit                   IOCCN7              ; //SWAP (((unsigned) &IOCCN)*8) + 7;
#define                                 IOCCN7_bit          BANKMASK(IOCCN), 7
__bit                   IOCCP0              ; //SWAP (((unsigned) &IOCCP)*8) + 0;
#define                                 IOCCP0_bit          BANKMASK(IOCCP), 0
__bit                   IOCCP1              ; //SWAP (((unsigned) &IOCCP)*8) + 1;
#define                                 IOCCP1_bit          BANKMASK(IOCCP), 1
__bit                   IOCCP2              ; //SWAP (((unsigned) &IOCCP)*8) + 2;
#define                                 IOCCP2_bit          BANKMASK(IOCCP), 2
__bit                   IOCCP3              ; //SWAP (((unsigned) &IOCCP)*8) + 3;
#define                                 IOCCP3_bit          BANKMASK(IOCCP), 3
__bit                   IOCCP4              ; //SWAP (((unsigned) &IOCCP)*8) + 4;
#define                                 IOCCP4_bit          BANKMASK(IOCCP), 4
__bit                   IOCCP5              ; //SWAP (((unsigned) &IOCCP)*8) + 5;
#define                                 IOCCP5_bit          BANKMASK(IOCCP), 5
__bit                   IOCCP6              ; //SWAP (((unsigned) &IOCCP)*8) + 6;
#define                                 IOCCP6_bit          BANKMASK(IOCCP), 6
__bit                   IOCCP7              ; //SWAP (((unsigned) &IOCCP)*8) + 7;
#define                                 IOCCP7_bit          BANKMASK(IOCCP), 7
__bit                   IOCEF3              ; //SWAP (((unsigned) &IOCEF)*8) + 3;
#define                                 IOCEF3_bit          BANKMASK(IOCEF), 3
__bit                   IOCEN3              ; //SWAP (((unsigned) &IOCEN)*8) + 3;
#define                                 IOCEN3_bit          BANKMASK(IOCEN), 3
__bit                   IOCEP3              ; //SWAP (((unsigned) &IOCEP)*8) + 3;
#define                                 IOCEP3_bit          BANKMASK(IOCEP), 3
__bit                   IOCIE               ; //SWAP (((unsigned) &INTCON)*8) + 3;
#define                                 IOCIE_bit           BANKMASK(INTCON), 3
__bit                   IOCIF               ; //SWAP (((unsigned) &INTCON)*8) + 0;
#define                                 IOCIF_bit           BANKMASK(INTCON), 0
__bit                   IRCF0               ; //SWAP (((unsigned) &OSCCON)*8) + 3;
#define                                 IRCF0_bit           BANKMASK(OSCCON), 3
__bit                   IRCF1               ; //SWAP (((unsigned) &OSCCON)*8) + 4;
#define                                 IRCF1_bit           BANKMASK(OSCCON), 4
__bit                   IRCF2               ; //SWAP (((unsigned) &OSCCON)*8) + 5;
#define                                 IRCF2_bit           BANKMASK(OSCCON), 5
__bit                   IRCF3               ; //SWAP (((unsigned) &OSCCON)*8) + 6;
#define                                 IRCF3_bit           BANKMASK(OSCCON), 6
__bit                   LATA0               ; //SWAP (((unsigned) &LATA)*8) + 0;
#define                                 LATA0_bit           BANKMASK(LATA), 0
__bit                   LATA1               ; //SWAP (((unsigned) &LATA)*8) + 1;
#define                                 LATA1_bit           BANKMASK(LATA), 1
__bit                   LATA2               ; //SWAP (((unsigned) &LATA)*8) + 2;
#define                                 LATA2_bit           BANKMASK(LATA), 2
__bit                   LATA3               ; //SWAP (((unsigned) &LATA)*8) + 3;
#define                                 LATA3_bit           BANKMASK(LATA), 3
__bit                   LATA4               ; //SWAP (((unsigned) &LATA)*8) + 4;
#define                                 LATA4_bit           BANKMASK(LATA), 4
__bit                   LATA5               ; //SWAP (((unsigned) &LATA)*8) + 5;
#define                                 LATA5_bit           BANKMASK(LATA), 5
__bit                   LATA6               ; //SWAP (((unsigned) &LATA)*8) + 6;
#define                                 LATA6_bit           BANKMASK(LATA), 6
__bit                   LATA7               ; //SWAP (((unsigned) &LATA)*8) + 7;
#define                                 LATA7_bit           BANKMASK(LATA), 7
__bit                   LATB0               ; //SWAP (((unsigned) &LATB)*8) + 0;
#define                                 LATB0_bit           BANKMASK(LATB), 0
__bit                   LATB1               ; //SWAP (((unsigned) &LATB)*8) + 1;
#define                                 LATB1_bit           BANKMASK(LATB), 1
__bit                   LATB2               ; //SWAP (((unsigned) &LATB)*8) + 2;
#define                                 LATB2_bit           BANKMASK(LATB), 2
__bit                   LATB3               ; //SWAP (((unsigned) &LATB)*8) + 3;
#define                                 LATB3_bit           BANKMASK(LATB), 3
__bit                   LATB4               ; //SWAP (((unsigned) &LATB)*8) + 4;
#define                                 LATB4_bit           BANKMASK(LATB), 4
__bit                   LATB5               ; //SWAP (((unsigned) &LATB)*8) + 5;
#define                                 LATB5_bit           BANKMASK(LATB), 5
__bit                   LATB6               ; //SWAP (((unsigned) &LATB)*8) + 6;
#define                                 LATB6_bit           BANKMASK(LATB), 6
__bit                   LATB7               ; //SWAP (((unsigned) &LATB)*8) + 7;
#define                                 LATB7_bit           BANKMASK(LATB), 7
__bit                   LATC0               ; //SWAP (((unsigned) &LATC)*8) + 0;
#define                                 LATC0_bit           BANKMASK(LATC), 0
__bit                   LATC1               ; //SWAP (((unsigned) &LATC)*8) + 1;
#define                                 LATC1_bit           BANKMASK(LATC), 1
__bit                   LATC2               ; //SWAP (((unsigned) &LATC)*8) + 2;
#define                                 LATC2_bit           BANKMASK(LATC), 2
__bit                   LATC3               ; //SWAP (((unsigned) &LATC)*8) + 3;
#define                                 LATC3_bit           BANKMASK(LATC), 3
__bit                   LATC4               ; //SWAP (((unsigned) &LATC)*8) + 4;
#define                                 LATC4_bit           BANKMASK(LATC), 4
__bit                   LATC5               ; //SWAP (((unsigned) &LATC)*8) + 5;
#define                                 LATC5_bit           BANKMASK(LATC), 5
__bit                   LATC6               ; //SWAP (((unsigned) &LATC)*8) + 6;
#define                                 LATC6_bit           BANKMASK(LATC), 6
__bit                   LATC7               ; //SWAP (((unsigned) &LATC)*8) + 7;
#define                                 LATC7_bit           BANKMASK(LATC), 7
__bit                   LFIOFR              ; //SWAP (((unsigned) &OSCSTAT)*8) + 1;
#define                                 LFIOFR_bit          BANKMASK(OSCSTAT), 1
__bit                   LWLO                ; //SWAP (((unsigned) &EECON1)*8) + 5;
#define                                 LWLO_bit            BANKMASK(EECON1), 5
__bit                   MC1OUT              ; //SWAP (((unsigned) &CMOUT)*8) + 0;
#define                                 MC1OUT_bit          BANKMASK(CMOUT), 0
__bit                   MC2OUT              ; //SWAP (((unsigned) &CMOUT)*8) + 1;
#define                                 MC2OUT_bit          BANKMASK(CMOUT), 1
__bit                   MC3OUT              ; //SWAP (((unsigned) &CMOUT)*8) + 2;
#define                                 MC3OUT_bit          BANKMASK(CMOUT), 2
__bit                   MFIOFR              ; //SWAP (((unsigned) &OSCSTAT)*8) + 2;
#define                                 MFIOFR_bit          BANKMASK(OSCSTAT), 2
__bit                   ODCONA0             ; //SWAP (((unsigned) &ODCONA)*8) + 0;
#define                                 ODCONA0_bit         BANKMASK(ODCONA), 0
__bit                   ODCONA1             ; //SWAP (((unsigned) &ODCONA)*8) + 1;
#define                                 ODCONA1_bit         BANKMASK(ODCONA), 1
__bit                   ODCONA2             ; //SWAP (((unsigned) &ODCONA)*8) + 2;
#define                                 ODCONA2_bit         BANKMASK(ODCONA), 2
__bit                   ODCONA3             ; //SWAP (((unsigned) &ODCONA)*8) + 3;
#define                                 ODCONA3_bit         BANKMASK(ODCONA), 3
__bit                   ODCONA4             ; //SWAP (((unsigned) &ODCONA)*8) + 4;
#define                                 ODCONA4_bit         BANKMASK(ODCONA), 4
__bit                   ODCONA5             ; //SWAP (((unsigned) &ODCONA)*8) + 5;
#define                                 ODCONA5_bit         BANKMASK(ODCONA), 5
__bit                   ODCONA6             ; //SWAP (((unsigned) &ODCONA)*8) + 6;
#define                                 ODCONA6_bit         BANKMASK(ODCONA), 6
__bit                   ODCONA7             ; //SWAP (((unsigned) &ODCONA)*8) + 7;
#define                                 ODCONA7_bit         BANKMASK(ODCONA), 7
__bit                   ODCONB0             ; //SWAP (((unsigned) &ODCONB)*8) + 0;
#define                                 ODCONB0_bit         BANKMASK(ODCONB), 0
__bit                   ODCONB1             ; //SWAP (((unsigned) &ODCONB)*8) + 1;
#define                                 ODCONB1_bit         BANKMASK(ODCONB), 1
__bit                   ODCONB2             ; //SWAP (((unsigned) &ODCONB)*8) + 2;
#define                                 ODCONB2_bit         BANKMASK(ODCONB), 2
__bit                   ODCONB3             ; //SWAP (((unsigned) &ODCONB)*8) + 3;
#define                                 ODCONB3_bit         BANKMASK(ODCONB), 3
__bit                   ODCONB4             ; //SWAP (((unsigned) &ODCONB)*8) + 4;
#define                                 ODCONB4_bit         BANKMASK(ODCONB), 4
__bit                   ODCONB5             ; //SWAP (((unsigned) &ODCONB)*8) + 5;
#define                                 ODCONB5_bit         BANKMASK(ODCONB), 5
__bit                   ODCONB6             ; //SWAP (((unsigned) &ODCONB)*8) + 6;
#define                                 ODCONB6_bit         BANKMASK(ODCONB), 6
__bit                   ODCONB7             ; //SWAP (((unsigned) &ODCONB)*8) + 7;
#define                                 ODCONB7_bit         BANKMASK(ODCONB), 7
__bit                   ODCONC0             ; //SWAP (((unsigned) &ODCONC)*8) + 0;
#define                                 ODCONC0_bit         BANKMASK(ODCONC), 0
__bit                   ODCONC1             ; //SWAP (((unsigned) &ODCONC)*8) + 1;
#define                                 ODCONC1_bit         BANKMASK(ODCONC), 1
__bit                   ODCONC2             ; //SWAP (((unsigned) &ODCONC)*8) + 2;
#define                                 ODCONC2_bit         BANKMASK(ODCONC), 2
__bit                   ODCONC3             ; //SWAP (((unsigned) &ODCONC)*8) + 3;
#define                                 ODCONC3_bit         BANKMASK(ODCONC), 3
__bit                   ODCONC4             ; //SWAP (((unsigned) &ODCONC)*8) + 4;
#define                                 ODCONC4_bit         BANKMASK(ODCONC), 4
__bit                   ODCONC5             ; //SWAP (((unsigned) &ODCONC)*8) + 5;
#define                                 ODCONC5_bit         BANKMASK(ODCONC), 5
__bit                   ODCONC6             ; //SWAP (((unsigned) &ODCONC)*8) + 6;
#define                                 ODCONC6_bit         BANKMASK(ODCONC), 6
__bit                   ODCONC7             ; //SWAP (((unsigned) &ODCONC)*8) + 7;
#define                                 ODCONC7_bit         BANKMASK(ODCONC), 7
__bit                   OERR                ; //SWAP (((unsigned) &RC1STA)*8) + 1;
#define                                 OERR_bit            BANKMASK(RC1STA), 1
__bit                   OPA1CH0             ; //SWAP (((unsigned) &OPA1CON)*8) + 0;
#define                                 OPA1CH0_bit         BANKMASK(OPA1CON), 0
__bit                   OPA1CH1             ; //SWAP (((unsigned) &OPA1CON)*8) + 1;
#define                                 OPA1CH1_bit         BANKMASK(OPA1CON), 1
__bit                   OPA1EN              ; //SWAP (((unsigned) &OPA1CON)*8) + 7;
#define                                 OPA1EN_bit          BANKMASK(OPA1CON), 7
__bit                   OPA1SP              ; //SWAP (((unsigned) &OPA1CON)*8) + 6;
#define                                 OPA1SP_bit          BANKMASK(OPA1CON), 6
__bit                   OPA2CH0             ; //SWAP (((unsigned) &OPA2CON)*8) + 0;
#define                                 OPA2CH0_bit         BANKMASK(OPA2CON), 0
__bit                   OPA2CH1             ; //SWAP (((unsigned) &OPA2CON)*8) + 1;
#define                                 OPA2CH1_bit         BANKMASK(OPA2CON), 1
__bit                   OPA2EN              ; //SWAP (((unsigned) &OPA2CON)*8) + 7;
#define                                 OPA2EN_bit          BANKMASK(OPA2CON), 7
__bit                   OPA2SP              ; //SWAP (((unsigned) &OPA2CON)*8) + 6;
#define                                 OPA2SP_bit          BANKMASK(OPA2CON), 6
__bit                   OSFIE               ; //SWAP (((unsigned) &PIE2)*8) + 7;
#define                                 OSFIE_bit           BANKMASK(PIE2), 7
__bit                   OSFIF               ; //SWAP (((unsigned) &PIR2)*8) + 7;
#define                                 OSFIF_bit           BANKMASK(PIR2), 7
__bit                   OSTS                ; //SWAP (((unsigned) &OSCSTAT)*8) + 5;
#define                                 OSTS_bit            BANKMASK(OSCSTAT), 5
__bit                   P1ARSEN             ; //SWAP (((unsigned) &PSMC1ASDC)*8) + 5;
#define                                 P1ARSEN_bit         BANKMASK(PSMC1ASDC), 5
__bit                   P1ASDEN             ; //SWAP (((unsigned) &PSMC1ASDC)*8) + 6;
#define                                 P1ASDEN_bit         BANKMASK(PSMC1ASDC), 6
__bit                   P1ASDLA             ; //SWAP (((unsigned) &PSMC1ASDL)*8) + 0;
#define                                 P1ASDLA_bit         BANKMASK(PSMC1ASDL), 0
__bit                   P1ASDLB             ; //SWAP (((unsigned) &PSMC1ASDL)*8) + 1;
#define                                 P1ASDLB_bit         BANKMASK(PSMC1ASDL), 1
__bit                   P1ASDLC             ; //SWAP (((unsigned) &PSMC1ASDL)*8) + 2;
#define                                 P1ASDLC_bit         BANKMASK(PSMC1ASDL), 2
__bit                   P1ASDLD             ; //SWAP (((unsigned) &PSMC1ASDL)*8) + 3;
#define                                 P1ASDLD_bit         BANKMASK(PSMC1ASDL), 3
__bit                   P1ASDLE             ; //SWAP (((unsigned) &PSMC1ASDL)*8) + 4;
#define                                 P1ASDLE_bit         BANKMASK(PSMC1ASDL), 4
__bit                   P1ASDLF             ; //SWAP (((unsigned) &PSMC1ASDL)*8) + 5;
#define                                 P1ASDLF_bit         BANKMASK(PSMC1ASDL), 5
__bit                   P1ASDOV             ; //SWAP (((unsigned) &PSMC1ASDC)*8) + 0;
#define                                 P1ASDOV_bit         BANKMASK(PSMC1ASDC), 0
__bit                   P1ASDSC1            ; //SWAP (((unsigned) &PSMC1ASDS)*8) + 1;
#define                                 P1ASDSC1_bit        BANKMASK(PSMC1ASDS), 1
__bit                   P1ASDSC2            ; //SWAP (((unsigned) &PSMC1ASDS)*8) + 2;
#define                                 P1ASDSC2_bit        BANKMASK(PSMC1ASDS), 2
__bit                   P1ASDSC3            ; //SWAP (((unsigned) &PSMC1ASDS)*8) + 3;
#define                                 P1ASDSC3_bit        BANKMASK(PSMC1ASDS), 3
__bit                   P1ASDSIN            ; //SWAP (((unsigned) &PSMC1ASDS)*8) + 7;
#define                                 P1ASDSIN_bit        BANKMASK(PSMC1ASDS), 7
__bit                   P1ASE               ; //SWAP (((unsigned) &PSMC1ASDC)*8) + 7;
#define                                 P1ASE_bit           BANKMASK(PSMC1ASDC), 7
__bit                   P1CPRE0             ; //SWAP (((unsigned) &PSMC1CLK)*8) + 4;
#define                                 P1CPRE0_bit         BANKMASK(PSMC1CLK), 4
__bit                   P1CPRE1             ; //SWAP (((unsigned) &PSMC1CLK)*8) + 5;
#define                                 P1CPRE1_bit         BANKMASK(PSMC1CLK), 5
__bit                   P1CSRC0             ; //SWAP (((unsigned) &PSMC1CLK)*8) + 0;
#define                                 P1CSRC0_bit         BANKMASK(PSMC1CLK), 0
__bit                   P1CSRC1             ; //SWAP (((unsigned) &PSMC1CLK)*8) + 1;
#define                                 P1CSRC1_bit         BANKMASK(PSMC1CLK), 1
__bit                   P1DBFE              ; //SWAP (((unsigned) &PSMC1CON)*8) + 5;
#define                                 P1DBFE_bit          BANKMASK(PSMC1CON), 5
__bit                   P1DBRE              ; //SWAP (((unsigned) &PSMC1CON)*8) + 4;
#define                                 P1DBRE_bit          BANKMASK(PSMC1CON), 4
__bit                   P1DCSC1             ; //SWAP (((unsigned) &PSMC1DCS)*8) + 1;
#define                                 P1DCSC1_bit         BANKMASK(PSMC1DCS), 1
__bit                   P1DCSC2             ; //SWAP (((unsigned) &PSMC1DCS)*8) + 2;
#define                                 P1DCSC2_bit         BANKMASK(PSMC1DCS), 2
__bit                   P1DCSC3             ; //SWAP (((unsigned) &PSMC1DCS)*8) + 3;
#define                                 P1DCSC3_bit         BANKMASK(PSMC1DCS), 3
__bit                   P1DCSIN             ; //SWAP (((unsigned) &PSMC1DCS)*8) + 7;
#define                                 P1DCSIN_bit         BANKMASK(PSMC1DCS), 7
__bit                   P1DCST              ; //SWAP (((unsigned) &PSMC1DCS)*8) + 0;
#define                                 P1DCST_bit          BANKMASK(PSMC1DCS), 0
__bit                   P1FEBM0             ; //SWAP (((unsigned) &PSMC1BLNK)*8) + 4;
#define                                 P1FEBM0_bit         BANKMASK(PSMC1BLNK), 4
__bit                   P1FEBM1             ; //SWAP (((unsigned) &PSMC1BLNK)*8) + 5;
#define                                 P1FEBM1_bit         BANKMASK(PSMC1BLNK), 5
__bit                   P1FEBSC1            ; //SWAP (((unsigned) &PSMC1FEBS)*8) + 1;
#define                                 P1FEBSC1_bit        BANKMASK(PSMC1FEBS), 1
__bit                   P1FEBSC2            ; //SWAP (((unsigned) &PSMC1FEBS)*8) + 2;
#define                                 P1FEBSC2_bit        BANKMASK(PSMC1FEBS), 2
__bit                   P1FEBSC3            ; //SWAP (((unsigned) &PSMC1FEBS)*8) + 3;
#define                                 P1FEBSC3_bit        BANKMASK(PSMC1FEBS), 3
__bit                   P1FEBSIN            ; //SWAP (((unsigned) &PSMC1FEBS)*8) + 7;
#define                                 P1FEBSIN_bit        BANKMASK(PSMC1FEBS), 7
__bit                   P1HSMEN             ; //SWAP (((unsigned) &PSMC1STR1)*8) + 0;
#define                                 P1HSMEN_bit         BANKMASK(PSMC1STR1), 0
__bit                   P1INPOL             ; //SWAP (((unsigned) &PSMC1POL)*8) + 6;
#define                                 P1INPOL_bit         BANKMASK(PSMC1POL), 6
__bit                   P1LSMEN             ; //SWAP (((unsigned) &PSMC1STR1)*8) + 1;
#define                                 P1LSMEN_bit         BANKMASK(PSMC1STR1), 1
__bit                   P1M0                ; //SWAP (((unsigned) &CCP1CON)*8) + 6;
#define                                 P1M0_bit            BANKMASK(CCP1CON), 6
__bit                   P1M1                ; //SWAP (((unsigned) &CCP1CON)*8) + 7;
#define                                 P1M1_bit            BANKMASK(CCP1CON), 7
__bit                   P1MDLBIT            ; //SWAP (((unsigned) &PSMC1MDL)*8) + 5;
#define                                 P1MDLBIT_bit        BANKMASK(PSMC1MDL), 5
__bit                   P1MDLEN             ; //SWAP (((unsigned) &PSMC1MDL)*8) + 7;
#define                                 P1MDLEN_bit         BANKMASK(PSMC1MDL), 7
__bit                   P1MDLPOL            ; //SWAP (((unsigned) &PSMC1MDL)*8) + 6;
#define                                 P1MDLPOL_bit        BANKMASK(PSMC1MDL), 6
__bit                   P1MODE0             ; //SWAP (((unsigned) &PSMC1CON)*8) + 0;
#define                                 P1MODE0_bit         BANKMASK(PSMC1CON), 0
__bit                   P1MODE1             ; //SWAP (((unsigned) &PSMC1CON)*8) + 1;
#define                                 P1MODE1_bit         BANKMASK(PSMC1CON), 1
__bit                   P1MODE2             ; //SWAP (((unsigned) &PSMC1CON)*8) + 2;
#define                                 P1MODE2_bit         BANKMASK(PSMC1CON), 2
__bit                   P1MODE3             ; //SWAP (((unsigned) &PSMC1CON)*8) + 3;
#define                                 P1MODE3_bit         BANKMASK(PSMC1CON), 3
__bit                   P1MSRC0             ; //SWAP (((unsigned) &PSMC1MDL)*8) + 0;
#define                                 P1MSRC0_bit         BANKMASK(PSMC1MDL), 0
__bit                   P1MSRC1             ; //SWAP (((unsigned) &PSMC1MDL)*8) + 1;
#define                                 P1MSRC1_bit         BANKMASK(PSMC1MDL), 1
__bit                   P1MSRC2             ; //SWAP (((unsigned) &PSMC1MDL)*8) + 2;
#define                                 P1MSRC2_bit         BANKMASK(PSMC1MDL), 2
__bit                   P1MSRC3             ; //SWAP (((unsigned) &PSMC1MDL)*8) + 3;
#define                                 P1MSRC3_bit         BANKMASK(PSMC1MDL), 3
__bit                   P1OEA               ; //SWAP (((unsigned) &PSMC1OEN)*8) + 0;
#define                                 P1OEA_bit           BANKMASK(PSMC1OEN), 0
__bit                   P1OEB               ; //SWAP (((unsigned) &PSMC1OEN)*8) + 1;
#define                                 P1OEB_bit           BANKMASK(PSMC1OEN), 1
__bit                   P1OEC               ; //SWAP (((unsigned) &PSMC1OEN)*8) + 2;
#define                                 P1OEC_bit           BANKMASK(PSMC1OEN), 2
__bit                   P1OED               ; //SWAP (((unsigned) &PSMC1OEN)*8) + 3;
#define                                 P1OED_bit           BANKMASK(PSMC1OEN), 3
__bit                   P1OEE               ; //SWAP (((unsigned) &PSMC1OEN)*8) + 4;
#define                                 P1OEE_bit           BANKMASK(PSMC1OEN), 4
__bit                   P1OEF               ; //SWAP (((unsigned) &PSMC1OEN)*8) + 5;
#define                                 P1OEF_bit           BANKMASK(PSMC1OEN), 5
__bit                   P1PHSC1             ; //SWAP (((unsigned) &PSMC1PHS)*8) + 1;
#define                                 P1PHSC1_bit         BANKMASK(PSMC1PHS), 1
__bit                   P1PHSC2             ; //SWAP (((unsigned) &PSMC1PHS)*8) + 2;
#define                                 P1PHSC2_bit         BANKMASK(PSMC1PHS), 2
__bit                   P1PHSC3             ; //SWAP (((unsigned) &PSMC1PHS)*8) + 3;
#define                                 P1PHSC3_bit         BANKMASK(PSMC1PHS), 3
__bit                   P1PHSIN             ; //SWAP (((unsigned) &PSMC1PHS)*8) + 7;
#define                                 P1PHSIN_bit         BANKMASK(PSMC1PHS), 7
__bit                   P1PHST              ; //SWAP (((unsigned) &PSMC1PHS)*8) + 0;
#define                                 P1PHST_bit          BANKMASK(PSMC1PHS), 0
__bit                   P1POLA              ; //SWAP (((unsigned) &PSMC1POL)*8) + 0;
#define                                 P1POLA_bit          BANKMASK(PSMC1POL), 0
__bit                   P1POLB              ; //SWAP (((unsigned) &PSMC1POL)*8) + 1;
#define                                 P1POLB_bit          BANKMASK(PSMC1POL), 1
__bit                   P1POLC              ; //SWAP (((unsigned) &PSMC1POL)*8) + 2;
#define                                 P1POLC_bit          BANKMASK(PSMC1POL), 2
__bit                   P1POLD              ; //SWAP (((unsigned) &PSMC1POL)*8) + 3;
#define                                 P1POLD_bit          BANKMASK(PSMC1POL), 3
__bit                   P1POLE              ; //SWAP (((unsigned) &PSMC1POL)*8) + 4;
#define                                 P1POLE_bit          BANKMASK(PSMC1POL), 4
__bit                   P1POLF              ; //SWAP (((unsigned) &PSMC1POL)*8) + 5;
#define                                 P1POLF_bit          BANKMASK(PSMC1POL), 5
__bit                   P1PRSC1             ; //SWAP (((unsigned) &PSMC1PRS)*8) + 1;
#define                                 P1PRSC1_bit         BANKMASK(PSMC1PRS), 1
__bit                   P1PRSC2             ; //SWAP (((unsigned) &PSMC1PRS)*8) + 2;
#define                                 P1PRSC2_bit         BANKMASK(PSMC1PRS), 2
__bit                   P1PRSC3             ; //SWAP (((unsigned) &PSMC1PRS)*8) + 3;
#define                                 P1PRSC3_bit         BANKMASK(PSMC1PRS), 3
__bit                   P1PRSIN             ; //SWAP (((unsigned) &PSMC1PRS)*8) + 7;
#define                                 P1PRSIN_bit         BANKMASK(PSMC1PRS), 7
__bit                   P1PRST              ; //SWAP (((unsigned) &PSMC1PRS)*8) + 0;
#define                                 P1PRST_bit          BANKMASK(PSMC1PRS), 0
__bit                   P1REBM0             ; //SWAP (((unsigned) &PSMC1BLNK)*8) + 0;
#define                                 P1REBM0_bit         BANKMASK(PSMC1BLNK), 0
__bit                   P1REBM1             ; //SWAP (((unsigned) &PSMC1BLNK)*8) + 1;
#define                                 P1REBM1_bit         BANKMASK(PSMC1BLNK), 1
__bit                   P1REBSC1            ; //SWAP (((unsigned) &PSMC1REBS)*8) + 1;
#define                                 P1REBSC1_bit        BANKMASK(PSMC1REBS), 1
__bit                   P1REBSC2            ; //SWAP (((unsigned) &PSMC1REBS)*8) + 2;
#define                                 P1REBSC2_bit        BANKMASK(PSMC1REBS), 2
__bit                   P1REBSC3            ; //SWAP (((unsigned) &PSMC1REBS)*8) + 3;
#define                                 P1REBSC3_bit        BANKMASK(PSMC1REBS), 3
__bit                   P1REBSIN            ; //SWAP (((unsigned) &PSMC1REBS)*8) + 7;
#define                                 P1REBSIN_bit        BANKMASK(PSMC1REBS), 7
__bit                   P1SSYNC             ; //SWAP (((unsigned) &PSMC1STR1)*8) + 7;
#define                                 P1SSYNC_bit         BANKMASK(PSMC1STR1), 7
__bit                   P1STRA              ; //SWAP (((unsigned) &PSMC1STR0)*8) + 0;
#define                                 P1STRA_bit          BANKMASK(PSMC1STR0), 0
__bit                   P1STRB              ; //SWAP (((unsigned) &PSMC1STR0)*8) + 1;
#define                                 P1STRB_bit          BANKMASK(PSMC1STR0), 1
__bit                   P1STRC              ; //SWAP (((unsigned) &PSMC1STR0)*8) + 2;
#define                                 P1STRC_bit          BANKMASK(PSMC1STR0), 2
__bit                   P1STRD              ; //SWAP (((unsigned) &PSMC1STR0)*8) + 3;
#define                                 P1STRD_bit          BANKMASK(PSMC1STR0), 3
__bit                   P1STRE              ; //SWAP (((unsigned) &PSMC1STR0)*8) + 4;
#define                                 P1STRE_bit          BANKMASK(PSMC1STR0), 4
__bit                   P1STRF              ; //SWAP (((unsigned) &PSMC1STR0)*8) + 5;
#define                                 P1STRF_bit          BANKMASK(PSMC1STR0), 5
__bit                   P1SYNC0             ; //SWAP (((unsigned) &PSMC1SYNC)*8) + 0;
#define                                 P1SYNC0_bit         BANKMASK(PSMC1SYNC), 0
__bit                   P1SYNC1             ; //SWAP (((unsigned) &PSMC1SYNC)*8) + 1;
#define                                 P1SYNC1_bit         BANKMASK(PSMC1SYNC), 1
__bit                   P1TDCIE             ; //SWAP (((unsigned) &PSMC1INT)*8) + 5;
#define                                 P1TDCIE_bit         BANKMASK(PSMC1INT), 5
__bit                   P1TDCIF             ; //SWAP (((unsigned) &PSMC1INT)*8) + 1;
#define                                 P1TDCIF_bit         BANKMASK(PSMC1INT), 1
__bit                   P1TOVIE             ; //SWAP (((unsigned) &PSMC1INT)*8) + 7;
#define                                 P1TOVIE_bit         BANKMASK(PSMC1INT), 7
__bit                   P1TOVIF             ; //SWAP (((unsigned) &PSMC1INT)*8) + 3;
#define                                 P1TOVIF_bit         BANKMASK(PSMC1INT), 3
__bit                   P1TPHIE             ; //SWAP (((unsigned) &PSMC1INT)*8) + 6;
#define                                 P1TPHIE_bit         BANKMASK(PSMC1INT), 6
__bit                   P1TPHIF             ; //SWAP (((unsigned) &PSMC1INT)*8) + 2;
#define                                 P1TPHIF_bit         BANKMASK(PSMC1INT), 2
__bit                   P1TPRIE             ; //SWAP (((unsigned) &PSMC1INT)*8) + 4;
#define                                 P1TPRIE_bit         BANKMASK(PSMC1INT), 4
__bit                   P1TPRIF             ; //SWAP (((unsigned) &PSMC1INT)*8) + 0;
#define                                 P1TPRIF_bit         BANKMASK(PSMC1INT), 0
__bit                   P2ARSEN             ; //SWAP (((unsigned) &PSMC2ASDC)*8) + 5;
#define                                 P2ARSEN_bit         BANKMASK(PSMC2ASDC), 5
__bit                   P2ASDEN             ; //SWAP (((unsigned) &PSMC2ASDC)*8) + 6;
#define                                 P2ASDEN_bit         BANKMASK(PSMC2ASDC), 6
__bit                   P2ASDLA             ; //SWAP (((unsigned) &PSMC2ASDL)*8) + 0;
#define                                 P2ASDLA_bit         BANKMASK(PSMC2ASDL), 0
__bit                   P2ASDLB             ; //SWAP (((unsigned) &PSMC2ASDL)*8) + 1;
#define                                 P2ASDLB_bit         BANKMASK(PSMC2ASDL), 1
__bit                   P2ASDOV             ; //SWAP (((unsigned) &PSMC2ASDC)*8) + 0;
#define                                 P2ASDOV_bit         BANKMASK(PSMC2ASDC), 0
__bit                   P2ASDSC1            ; //SWAP (((unsigned) &PSMC2ASDS)*8) + 1;
#define                                 P2ASDSC1_bit        BANKMASK(PSMC2ASDS), 1
__bit                   P2ASDSC2            ; //SWAP (((unsigned) &PSMC2ASDS)*8) + 2;
#define                                 P2ASDSC2_bit        BANKMASK(PSMC2ASDS), 2
__bit                   P2ASDSC3            ; //SWAP (((unsigned) &PSMC2ASDS)*8) + 3;
#define                                 P2ASDSC3_bit        BANKMASK(PSMC2ASDS), 3
__bit                   P2ASDSIN            ; //SWAP (((unsigned) &PSMC2ASDS)*8) + 7;
#define                                 P2ASDSIN_bit        BANKMASK(PSMC2ASDS), 7
__bit                   P2ASE               ; //SWAP (((unsigned) &PSMC2ASDC)*8) + 7;
#define                                 P2ASE_bit           BANKMASK(PSMC2ASDC), 7
__bit                   P2CPRE0             ; //SWAP (((unsigned) &PSMC2CLK)*8) + 4;
#define                                 P2CPRE0_bit         BANKMASK(PSMC2CLK), 4
__bit                   P2CPRE1             ; //SWAP (((unsigned) &PSMC2CLK)*8) + 5;
#define                                 P2CPRE1_bit         BANKMASK(PSMC2CLK), 5
__bit                   P2CSRC0             ; //SWAP (((unsigned) &PSMC2CLK)*8) + 0;
#define                                 P2CSRC0_bit         BANKMASK(PSMC2CLK), 0
__bit                   P2CSRC1             ; //SWAP (((unsigned) &PSMC2CLK)*8) + 1;
#define                                 P2CSRC1_bit         BANKMASK(PSMC2CLK), 1
__bit                   P2DBFE              ; //SWAP (((unsigned) &PSMC2CON)*8) + 5;
#define                                 P2DBFE_bit          BANKMASK(PSMC2CON), 5
__bit                   P2DBRE              ; //SWAP (((unsigned) &PSMC2CON)*8) + 4;
#define                                 P2DBRE_bit          BANKMASK(PSMC2CON), 4
__bit                   P2DCSC1             ; //SWAP (((unsigned) &PSMC2DCS)*8) + 1;
#define                                 P2DCSC1_bit         BANKMASK(PSMC2DCS), 1
__bit                   P2DCSC2             ; //SWAP (((unsigned) &PSMC2DCS)*8) + 2;
#define                                 P2DCSC2_bit         BANKMASK(PSMC2DCS), 2
__bit                   P2DCSC3             ; //SWAP (((unsigned) &PSMC2DCS)*8) + 3;
#define                                 P2DCSC3_bit         BANKMASK(PSMC2DCS), 3
__bit                   P2DCSIN             ; //SWAP (((unsigned) &PSMC2DCS)*8) + 7;
#define                                 P2DCSIN_bit         BANKMASK(PSMC2DCS), 7
__bit                   P2DCST              ; //SWAP (((unsigned) &PSMC2DCS)*8) + 0;
#define                                 P2DCST_bit          BANKMASK(PSMC2DCS), 0
__bit                   P2FEBM0             ; //SWAP (((unsigned) &PSMC2BLNK)*8) + 4;
#define                                 P2FEBM0_bit         BANKMASK(PSMC2BLNK), 4
__bit                   P2FEBM1             ; //SWAP (((unsigned) &PSMC2BLNK)*8) + 5;
#define                                 P2FEBM1_bit         BANKMASK(PSMC2BLNK), 5
__bit                   P2FEBSC1            ; //SWAP (((unsigned) &PSMC2FEBS)*8) + 1;
#define                                 P2FEBSC1_bit        BANKMASK(PSMC2FEBS), 1
__bit                   P2FEBSC2            ; //SWAP (((unsigned) &PSMC2FEBS)*8) + 2;
#define                                 P2FEBSC2_bit        BANKMASK(PSMC2FEBS), 2
__bit                   P2FEBSC3            ; //SWAP (((unsigned) &PSMC2FEBS)*8) + 3;
#define                                 P2FEBSC3_bit        BANKMASK(PSMC2FEBS), 3
__bit                   P2FEBSIN            ; //SWAP (((unsigned) &PSMC2FEBS)*8) + 7;
#define                                 P2FEBSIN_bit        BANKMASK(PSMC2FEBS), 7
__bit                   P2HSMEN             ; //SWAP (((unsigned) &PSMC2STR1)*8) + 0;
#define                                 P2HSMEN_bit         BANKMASK(PSMC2STR1), 0
__bit                   P2INPOL             ; //SWAP (((unsigned) &PSMC2POL)*8) + 6;
#define                                 P2INPOL_bit         BANKMASK(PSMC2POL), 6
__bit                   P2LSMEN             ; //SWAP (((unsigned) &PSMC2STR1)*8) + 1;
#define                                 P2LSMEN_bit         BANKMASK(PSMC2STR1), 1
__bit                   P2M0                ; //SWAP (((unsigned) &CCP2CON)*8) + 6;
#define                                 P2M0_bit            BANKMASK(CCP2CON), 6
__bit                   P2M1                ; //SWAP (((unsigned) &CCP2CON)*8) + 7;
#define                                 P2M1_bit            BANKMASK(CCP2CON), 7
__bit                   P2MDLBIT            ; //SWAP (((unsigned) &PSMC2MDL)*8) + 5;
#define                                 P2MDLBIT_bit        BANKMASK(PSMC2MDL), 5
__bit                   P2MDLEN             ; //SWAP (((unsigned) &PSMC2MDL)*8) + 7;
#define                                 P2MDLEN_bit         BANKMASK(PSMC2MDL), 7
__bit                   P2MDLPOL            ; //SWAP (((unsigned) &PSMC2MDL)*8) + 6;
#define                                 P2MDLPOL_bit        BANKMASK(PSMC2MDL), 6
__bit                   P2MODE0             ; //SWAP (((unsigned) &PSMC2CON)*8) + 0;
#define                                 P2MODE0_bit         BANKMASK(PSMC2CON), 0
__bit                   P2MODE1             ; //SWAP (((unsigned) &PSMC2CON)*8) + 1;
#define                                 P2MODE1_bit         BANKMASK(PSMC2CON), 1
__bit                   P2MODE2             ; //SWAP (((unsigned) &PSMC2CON)*8) + 2;
#define                                 P2MODE2_bit         BANKMASK(PSMC2CON), 2
__bit                   P2MODE3             ; //SWAP (((unsigned) &PSMC2CON)*8) + 3;
#define                                 P2MODE3_bit         BANKMASK(PSMC2CON), 3
__bit                   P2MSRC0             ; //SWAP (((unsigned) &PSMC2MDL)*8) + 0;
#define                                 P2MSRC0_bit         BANKMASK(PSMC2MDL), 0
__bit                   P2MSRC1             ; //SWAP (((unsigned) &PSMC2MDL)*8) + 1;
#define                                 P2MSRC1_bit         BANKMASK(PSMC2MDL), 1
__bit                   P2MSRC2             ; //SWAP (((unsigned) &PSMC2MDL)*8) + 2;
#define                                 P2MSRC2_bit         BANKMASK(PSMC2MDL), 2
__bit                   P2MSRC3             ; //SWAP (((unsigned) &PSMC2MDL)*8) + 3;
#define                                 P2MSRC3_bit         BANKMASK(PSMC2MDL), 3
__bit                   P2OEA               ; //SWAP (((unsigned) &PSMC2OEN)*8) + 0;
#define                                 P2OEA_bit           BANKMASK(PSMC2OEN), 0
__bit                   P2OEB               ; //SWAP (((unsigned) &PSMC2OEN)*8) + 1;
#define                                 P2OEB_bit           BANKMASK(PSMC2OEN), 1
__bit                   P2PHSC1             ; //SWAP (((unsigned) &PSMC2PHS)*8) + 1;
#define                                 P2PHSC1_bit         BANKMASK(PSMC2PHS), 1
__bit                   P2PHSC2             ; //SWAP (((unsigned) &PSMC2PHS)*8) + 2;
#define                                 P2PHSC2_bit         BANKMASK(PSMC2PHS), 2
__bit                   P2PHSC3             ; //SWAP (((unsigned) &PSMC2PHS)*8) + 3;
#define                                 P2PHSC3_bit         BANKMASK(PSMC2PHS), 3
__bit                   P2PHSIN             ; //SWAP (((unsigned) &PSMC2PHS)*8) + 7;
#define                                 P2PHSIN_bit         BANKMASK(PSMC2PHS), 7
__bit                   P2PHST              ; //SWAP (((unsigned) &PSMC2PHS)*8) + 0;
#define                                 P2PHST_bit          BANKMASK(PSMC2PHS), 0
__bit                   P2POLA              ; //SWAP (((unsigned) &PSMC2POL)*8) + 0;
#define                                 P2POLA_bit          BANKMASK(PSMC2POL), 0
__bit                   P2POLB              ; //SWAP (((unsigned) &PSMC2POL)*8) + 1;
#define                                 P2POLB_bit          BANKMASK(PSMC2POL), 1
__bit                   P2PRSC1             ; //SWAP (((unsigned) &PSMC2PRS)*8) + 1;
#define                                 P2PRSC1_bit         BANKMASK(PSMC2PRS), 1
__bit                   P2PRSC2             ; //SWAP (((unsigned) &PSMC2PRS)*8) + 2;
#define                                 P2PRSC2_bit         BANKMASK(PSMC2PRS), 2
__bit                   P2PRSC3             ; //SWAP (((unsigned) &PSMC2PRS)*8) + 3;
#define                                 P2PRSC3_bit         BANKMASK(PSMC2PRS), 3
__bit                   P2PRSIN             ; //SWAP (((unsigned) &PSMC2PRS)*8) + 7;
#define                                 P2PRSIN_bit         BANKMASK(PSMC2PRS), 7
__bit                   P2PRST              ; //SWAP (((unsigned) &PSMC2PRS)*8) + 0;
#define                                 P2PRST_bit          BANKMASK(PSMC2PRS), 0
__bit                   P2REBM0             ; //SWAP (((unsigned) &PSMC2BLNK)*8) + 0;
#define                                 P2REBM0_bit         BANKMASK(PSMC2BLNK), 0
__bit                   P2REBM1             ; //SWAP (((unsigned) &PSMC2BLNK)*8) + 1;
#define                                 P2REBM1_bit         BANKMASK(PSMC2BLNK), 1
__bit                   P2REBSC1            ; //SWAP (((unsigned) &PSMC2REBS)*8) + 1;
#define                                 P2REBSC1_bit        BANKMASK(PSMC2REBS), 1
__bit                   P2REBSC2            ; //SWAP (((unsigned) &PSMC2REBS)*8) + 2;
#define                                 P2REBSC2_bit        BANKMASK(PSMC2REBS), 2
__bit                   P2REBSC3            ; //SWAP (((unsigned) &PSMC2REBS)*8) + 3;
#define                                 P2REBSC3_bit        BANKMASK(PSMC2REBS), 3
__bit                   P2REBSIN            ; //SWAP (((unsigned) &PSMC2REBS)*8) + 7;
#define                                 P2REBSIN_bit        BANKMASK(PSMC2REBS), 7
__bit                   P2SSYNC             ; //SWAP (((unsigned) &PSMC2STR1)*8) + 7;
#define                                 P2SSYNC_bit         BANKMASK(PSMC2STR1), 7
__bit                   P2STRA              ; //SWAP (((unsigned) &PSMC2STR0)*8) + 0;
#define                                 P2STRA_bit          BANKMASK(PSMC2STR0), 0
__bit                   P2STRB              ; //SWAP (((unsigned) &PSMC2STR0)*8) + 1;
#define                                 P2STRB_bit          BANKMASK(PSMC2STR0), 1
__bit                   P2SYNC0             ; //SWAP (((unsigned) &PSMC2SYNC)*8) + 0;
#define                                 P2SYNC0_bit         BANKMASK(PSMC2SYNC), 0
__bit                   P2SYNC1             ; //SWAP (((unsigned) &PSMC2SYNC)*8) + 1;
#define                                 P2SYNC1_bit         BANKMASK(PSMC2SYNC), 1
__bit                   P2TDCIE             ; //SWAP (((unsigned) &PSMC2INT)*8) + 5;
#define                                 P2TDCIE_bit         BANKMASK(PSMC2INT), 5
__bit                   P2TDCIF             ; //SWAP (((unsigned) &PSMC2INT)*8) + 1;
#define                                 P2TDCIF_bit         BANKMASK(PSMC2INT), 1
__bit                   P2TOVIE             ; //SWAP (((unsigned) &PSMC2INT)*8) + 7;
#define                                 P2TOVIE_bit         BANKMASK(PSMC2INT), 7
__bit                   P2TOVIF             ; //SWAP (((unsigned) &PSMC2INT)*8) + 3;
#define                                 P2TOVIF_bit         BANKMASK(PSMC2INT), 3
__bit                   P2TPHIE             ; //SWAP (((unsigned) &PSMC2INT)*8) + 6;
#define                                 P2TPHIE_bit         BANKMASK(PSMC2INT), 6
__bit                   P2TPHIF             ; //SWAP (((unsigned) &PSMC2INT)*8) + 2;
#define                                 P2TPHIF_bit         BANKMASK(PSMC2INT), 2
__bit                   P2TPRIE             ; //SWAP (((unsigned) &PSMC2INT)*8) + 4;
#define                                 P2TPRIE_bit         BANKMASK(PSMC2INT), 4
__bit                   P2TPRIF             ; //SWAP (((unsigned) &PSMC2INT)*8) + 0;
#define                                 P2TPRIF_bit         BANKMASK(PSMC2INT), 0
__bit                   PCIE                ; //SWAP (((unsigned) &SSPCON3)*8) + 6;
#define                                 PCIE_bit            BANKMASK(SSPCON3), 6
__bit                   PEIE                ; //SWAP (((unsigned) &INTCON)*8) + 6;
#define                                 PEIE_bit            BANKMASK(INTCON), 6
__bit                   PEN                 ; //SWAP (((unsigned) &SSPCON2)*8) + 2;
#define                                 PEN_bit             BANKMASK(SSPCON2), 2
__bit                   PLLR                ; //SWAP (((unsigned) &OSCSTAT)*8) + 6;
#define                                 PLLR_bit            BANKMASK(OSCSTAT), 6
__bit                   PS0                 ; //SWAP (((unsigned) &OPTION_REG)*8) + 0;
#define                                 PS0_bit             BANKMASK(OPTION_REG), 0
__bit                   PS1                 ; //SWAP (((unsigned) &OPTION_REG)*8) + 1;
#define                                 PS1_bit             BANKMASK(OPTION_REG), 1
__bit                   PS2                 ; //SWAP (((unsigned) &OPTION_REG)*8) + 2;
#define                                 PS2_bit             BANKMASK(OPTION_REG), 2
__bit                   PSA                 ; //SWAP (((unsigned) &OPTION_REG)*8) + 3;
#define                                 PSA_bit             BANKMASK(OPTION_REG), 3
__bit                   PSMC1BLKF0          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 0;
#define                                 PSMC1BLKF0_bit      BANKMASK(PSMC1BLKF), 0
__bit                   PSMC1BLKF1          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 1;
#define                                 PSMC1BLKF1_bit      BANKMASK(PSMC1BLKF), 1
__bit                   PSMC1BLKF2          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 2;
#define                                 PSMC1BLKF2_bit      BANKMASK(PSMC1BLKF), 2
__bit                   PSMC1BLKF3          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 3;
#define                                 PSMC1BLKF3_bit      BANKMASK(PSMC1BLKF), 3
__bit                   PSMC1BLKF4          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 4;
#define                                 PSMC1BLKF4_bit      BANKMASK(PSMC1BLKF), 4
__bit                   PSMC1BLKF5          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 5;
#define                                 PSMC1BLKF5_bit      BANKMASK(PSMC1BLKF), 5
__bit                   PSMC1BLKF6          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 6;
#define                                 PSMC1BLKF6_bit      BANKMASK(PSMC1BLKF), 6
__bit                   PSMC1BLKF7          ; //SWAP (((unsigned) &PSMC1BLKF)*8) + 7;
#define                                 PSMC1BLKF7_bit      BANKMASK(PSMC1BLKF), 7
__bit                   PSMC1BLKR0          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 0;
#define                                 PSMC1BLKR0_bit      BANKMASK(PSMC1BLKR), 0
__bit                   PSMC1BLKR1          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 1;
#define                                 PSMC1BLKR1_bit      BANKMASK(PSMC1BLKR), 1
__bit                   PSMC1BLKR2          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 2;
#define                                 PSMC1BLKR2_bit      BANKMASK(PSMC1BLKR), 2
__bit                   PSMC1BLKR3          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 3;
#define                                 PSMC1BLKR3_bit      BANKMASK(PSMC1BLKR), 3
__bit                   PSMC1BLKR4          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 4;
#define                                 PSMC1BLKR4_bit      BANKMASK(PSMC1BLKR), 4
__bit                   PSMC1BLKR5          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 5;
#define                                 PSMC1BLKR5_bit      BANKMASK(PSMC1BLKR), 5
__bit                   PSMC1BLKR6          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 6;
#define                                 PSMC1BLKR6_bit      BANKMASK(PSMC1BLKR), 6
__bit                   PSMC1BLKR7          ; //SWAP (((unsigned) &PSMC1BLKR)*8) + 7;
#define                                 PSMC1BLKR7_bit      BANKMASK(PSMC1BLKR), 7
__bit                   PSMC1DBF0           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 0;
#define                                 PSMC1DBF0_bit       BANKMASK(PSMC1DBF), 0
__bit                   PSMC1DBF1           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 1;
#define                                 PSMC1DBF1_bit       BANKMASK(PSMC1DBF), 1
__bit                   PSMC1DBF2           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 2;
#define                                 PSMC1DBF2_bit       BANKMASK(PSMC1DBF), 2
__bit                   PSMC1DBF3           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 3;
#define                                 PSMC1DBF3_bit       BANKMASK(PSMC1DBF), 3
__bit                   PSMC1DBF4           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 4;
#define                                 PSMC1DBF4_bit       BANKMASK(PSMC1DBF), 4
__bit                   PSMC1DBF5           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 5;
#define                                 PSMC1DBF5_bit       BANKMASK(PSMC1DBF), 5
__bit                   PSMC1DBF6           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 6;
#define                                 PSMC1DBF6_bit       BANKMASK(PSMC1DBF), 6
__bit                   PSMC1DBF7           ; //SWAP (((unsigned) &PSMC1DBF)*8) + 7;
#define                                 PSMC1DBF7_bit       BANKMASK(PSMC1DBF), 7
__bit                   PSMC1DBR0           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 0;
#define                                 PSMC1DBR0_bit       BANKMASK(PSMC1DBR), 0
__bit                   PSMC1DBR1           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 1;
#define                                 PSMC1DBR1_bit       BANKMASK(PSMC1DBR), 1
__bit                   PSMC1DBR2           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 2;
#define                                 PSMC1DBR2_bit       BANKMASK(PSMC1DBR), 2
__bit                   PSMC1DBR3           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 3;
#define                                 PSMC1DBR3_bit       BANKMASK(PSMC1DBR), 3
__bit                   PSMC1DBR4           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 4;
#define                                 PSMC1DBR4_bit       BANKMASK(PSMC1DBR), 4
__bit                   PSMC1DBR5           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 5;
#define                                 PSMC1DBR5_bit       BANKMASK(PSMC1DBR), 5
__bit                   PSMC1DBR6           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 6;
#define                                 PSMC1DBR6_bit       BANKMASK(PSMC1DBR), 6
__bit                   PSMC1DBR7           ; //SWAP (((unsigned) &PSMC1DBR)*8) + 7;
#define                                 PSMC1DBR7_bit       BANKMASK(PSMC1DBR), 7
__bit                   PSMC1DC0            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 0;
#define                                 PSMC1DC0_bit        BANKMASK(PSMC1DCL), 0
__bit                   PSMC1DC1            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 1;
#define                                 PSMC1DC1_bit        BANKMASK(PSMC1DCL), 1
__bit                   PSMC1DC10           ; //SWAP (((unsigned) &PSMC1DCH)*8) + 2;
#define                                 PSMC1DC10_bit       BANKMASK(PSMC1DCH), 2
__bit                   PSMC1DC11           ; //SWAP (((unsigned) &PSMC1DCH)*8) + 3;
#define                                 PSMC1DC11_bit       BANKMASK(PSMC1DCH), 3
__bit                   PSMC1DC12           ; //SWAP (((unsigned) &PSMC1DCH)*8) + 4;
#define                                 PSMC1DC12_bit       BANKMASK(PSMC1DCH), 4
__bit                   PSMC1DC13           ; //SWAP (((unsigned) &PSMC1DCH)*8) + 5;
#define                                 PSMC1DC13_bit       BANKMASK(PSMC1DCH), 5
__bit                   PSMC1DC14           ; //SWAP (((unsigned) &PSMC1DCH)*8) + 6;
#define                                 PSMC1DC14_bit       BANKMASK(PSMC1DCH), 6
__bit                   PSMC1DC15           ; //SWAP (((unsigned) &PSMC1DCH)*8) + 7;
#define                                 PSMC1DC15_bit       BANKMASK(PSMC1DCH), 7
__bit                   PSMC1DC2            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 2;
#define                                 PSMC1DC2_bit        BANKMASK(PSMC1DCL), 2
__bit                   PSMC1DC3            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 3;
#define                                 PSMC1DC3_bit        BANKMASK(PSMC1DCL), 3
__bit                   PSMC1DC4            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 4;
#define                                 PSMC1DC4_bit        BANKMASK(PSMC1DCL), 4
__bit                   PSMC1DC5            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 5;
#define                                 PSMC1DC5_bit        BANKMASK(PSMC1DCL), 5
__bit                   PSMC1DC6            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 6;
#define                                 PSMC1DC6_bit        BANKMASK(PSMC1DCL), 6
__bit                   PSMC1DC7            ; //SWAP (((unsigned) &PSMC1DCL)*8) + 7;
#define                                 PSMC1DC7_bit        BANKMASK(PSMC1DCL), 7
__bit                   PSMC1DC8            ; //SWAP (((unsigned) &PSMC1DCH)*8) + 0;
#define                                 PSMC1DC8_bit        BANKMASK(PSMC1DCH), 0
__bit                   PSMC1DC9            ; //SWAP (((unsigned) &PSMC1DCH)*8) + 1;
#define                                 PSMC1DC9_bit        BANKMASK(PSMC1DCH), 1
__bit                   PSMC1EN             ; //SWAP (((unsigned) &PSMC1CON)*8) + 7;
#define                                 PSMC1EN_bit         BANKMASK(PSMC1CON), 7
__bit                   PSMC1FFA0           ; //SWAP (((unsigned) &PSMC1FFA)*8) + 0;
#define                                 PSMC1FFA0_bit       BANKMASK(PSMC1FFA), 0
__bit                   PSMC1FFA1           ; //SWAP (((unsigned) &PSMC1FFA)*8) + 1;
#define                                 PSMC1FFA1_bit       BANKMASK(PSMC1FFA), 1
__bit                   PSMC1FFA2           ; //SWAP (((unsigned) &PSMC1FFA)*8) + 2;
#define                                 PSMC1FFA2_bit       BANKMASK(PSMC1FFA), 2
__bit                   PSMC1FFA3           ; //SWAP (((unsigned) &PSMC1FFA)*8) + 3;
#define                                 PSMC1FFA3_bit       BANKMASK(PSMC1FFA), 3
__bit                   PSMC1LD             ; //SWAP (((unsigned) &PSMC1CON)*8) + 6;
#define                                 PSMC1LD_bit         BANKMASK(PSMC1CON), 6
__bit                   PSMC1PH0            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 0;
#define                                 PSMC1PH0_bit        BANKMASK(PSMC1PHL), 0
__bit                   PSMC1PH1            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 1;
#define                                 PSMC1PH1_bit        BANKMASK(PSMC1PHL), 1
__bit                   PSMC1PH10           ; //SWAP (((unsigned) &PSMC1PHH)*8) + 2;
#define                                 PSMC1PH10_bit       BANKMASK(PSMC1PHH), 2
__bit                   PSMC1PH11           ; //SWAP (((unsigned) &PSMC1PHH)*8) + 3;
#define                                 PSMC1PH11_bit       BANKMASK(PSMC1PHH), 3
__bit                   PSMC1PH12           ; //SWAP (((unsigned) &PSMC1PHH)*8) + 4;
#define                                 PSMC1PH12_bit       BANKMASK(PSMC1PHH), 4
__bit                   PSMC1PH13           ; //SWAP (((unsigned) &PSMC1PHH)*8) + 5;
#define                                 PSMC1PH13_bit       BANKMASK(PSMC1PHH), 5
__bit                   PSMC1PH14           ; //SWAP (((unsigned) &PSMC1PHH)*8) + 6;
#define                                 PSMC1PH14_bit       BANKMASK(PSMC1PHH), 6
__bit                   PSMC1PH15           ; //SWAP (((unsigned) &PSMC1PHH)*8) + 7;
#define                                 PSMC1PH15_bit       BANKMASK(PSMC1PHH), 7
__bit                   PSMC1PH2            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 2;
#define                                 PSMC1PH2_bit        BANKMASK(PSMC1PHL), 2
__bit                   PSMC1PH3            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 3;
#define                                 PSMC1PH3_bit        BANKMASK(PSMC1PHL), 3
__bit                   PSMC1PH4            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 4;
#define                                 PSMC1PH4_bit        BANKMASK(PSMC1PHL), 4
__bit                   PSMC1PH5            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 5;
#define                                 PSMC1PH5_bit        BANKMASK(PSMC1PHL), 5
__bit                   PSMC1PH6            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 6;
#define                                 PSMC1PH6_bit        BANKMASK(PSMC1PHL), 6
__bit                   PSMC1PH7            ; //SWAP (((unsigned) &PSMC1PHL)*8) + 7;
#define                                 PSMC1PH7_bit        BANKMASK(PSMC1PHL), 7
__bit                   PSMC1PH8            ; //SWAP (((unsigned) &PSMC1PHH)*8) + 0;
#define                                 PSMC1PH8_bit        BANKMASK(PSMC1PHH), 0
__bit                   PSMC1PH9            ; //SWAP (((unsigned) &PSMC1PHH)*8) + 1;
#define                                 PSMC1PH9_bit        BANKMASK(PSMC1PHH), 1
__bit                   PSMC1PR0            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 0;
#define                                 PSMC1PR0_bit        BANKMASK(PSMC1PRL), 0
__bit                   PSMC1PR1            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 1;
#define                                 PSMC1PR1_bit        BANKMASK(PSMC1PRL), 1
__bit                   PSMC1PR10           ; //SWAP (((unsigned) &PSMC1PRH)*8) + 2;
#define                                 PSMC1PR10_bit       BANKMASK(PSMC1PRH), 2
__bit                   PSMC1PR11           ; //SWAP (((unsigned) &PSMC1PRH)*8) + 3;
#define                                 PSMC1PR11_bit       BANKMASK(PSMC1PRH), 3
__bit                   PSMC1PR12           ; //SWAP (((unsigned) &PSMC1PRH)*8) + 4;
#define                                 PSMC1PR12_bit       BANKMASK(PSMC1PRH), 4
__bit                   PSMC1PR13           ; //SWAP (((unsigned) &PSMC1PRH)*8) + 5;
#define                                 PSMC1PR13_bit       BANKMASK(PSMC1PRH), 5
__bit                   PSMC1PR14           ; //SWAP (((unsigned) &PSMC1PRH)*8) + 6;
#define                                 PSMC1PR14_bit       BANKMASK(PSMC1PRH), 6
__bit                   PSMC1PR15           ; //SWAP (((unsigned) &PSMC1PRH)*8) + 7;
#define                                 PSMC1PR15_bit       BANKMASK(PSMC1PRH), 7
__bit                   PSMC1PR2            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 2;
#define                                 PSMC1PR2_bit        BANKMASK(PSMC1PRL), 2
__bit                   PSMC1PR3            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 3;
#define                                 PSMC1PR3_bit        BANKMASK(PSMC1PRL), 3
__bit                   PSMC1PR4            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 4;
#define                                 PSMC1PR4_bit        BANKMASK(PSMC1PRL), 4
__bit                   PSMC1PR5            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 5;
#define                                 PSMC1PR5_bit        BANKMASK(PSMC1PRL), 5
__bit                   PSMC1PR6            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 6;
#define                                 PSMC1PR6_bit        BANKMASK(PSMC1PRL), 6
__bit                   PSMC1PR7            ; //SWAP (((unsigned) &PSMC1PRL)*8) + 7;
#define                                 PSMC1PR7_bit        BANKMASK(PSMC1PRL), 7
__bit                   PSMC1PR8            ; //SWAP (((unsigned) &PSMC1PRH)*8) + 0;
#define                                 PSMC1PR8_bit        BANKMASK(PSMC1PRH), 0
__bit                   PSMC1PR9            ; //SWAP (((unsigned) &PSMC1PRH)*8) + 1;
#define                                 PSMC1PR9_bit        BANKMASK(PSMC1PRH), 1
__bit                   PSMC1SIE            ; //SWAP (((unsigned) &PIE4)*8) + 0;
#define                                 PSMC1SIE_bit        BANKMASK(PIE4), 0
__bit                   PSMC1SIF            ; //SWAP (((unsigned) &PIR4)*8) + 0;
#define                                 PSMC1SIF_bit        BANKMASK(PIR4), 0
__bit                   PSMC1TIE            ; //SWAP (((unsigned) &PIE4)*8) + 4;
#define                                 PSMC1TIE_bit        BANKMASK(PIE4), 4
__bit                   PSMC1TIF            ; //SWAP (((unsigned) &PIR4)*8) + 4;
#define                                 PSMC1TIF_bit        BANKMASK(PIR4), 4
__bit                   PSMC1TMR0           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 0;
#define                                 PSMC1TMR0_bit       BANKMASK(PSMC1TMRL), 0
__bit                   PSMC1TMR1           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 1;
#define                                 PSMC1TMR1_bit       BANKMASK(PSMC1TMRL), 1
__bit                   PSMC1TMR10          ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 2;
#define                                 PSMC1TMR10_bit      BANKMASK(PSMC1TMRH), 2
__bit                   PSMC1TMR11          ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 3;
#define                                 PSMC1TMR11_bit      BANKMASK(PSMC1TMRH), 3
__bit                   PSMC1TMR12          ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 4;
#define                                 PSMC1TMR12_bit      BANKMASK(PSMC1TMRH), 4
__bit                   PSMC1TMR13          ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 5;
#define                                 PSMC1TMR13_bit      BANKMASK(PSMC1TMRH), 5
__bit                   PSMC1TMR14          ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 6;
#define                                 PSMC1TMR14_bit      BANKMASK(PSMC1TMRH), 6
__bit                   PSMC1TMR15          ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 7;
#define                                 PSMC1TMR15_bit      BANKMASK(PSMC1TMRH), 7
__bit                   PSMC1TMR2           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 2;
#define                                 PSMC1TMR2_bit       BANKMASK(PSMC1TMRL), 2
__bit                   PSMC1TMR3           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 3;
#define                                 PSMC1TMR3_bit       BANKMASK(PSMC1TMRL), 3
__bit                   PSMC1TMR4           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 4;
#define                                 PSMC1TMR4_bit       BANKMASK(PSMC1TMRL), 4
__bit                   PSMC1TMR5           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 5;
#define                                 PSMC1TMR5_bit       BANKMASK(PSMC1TMRL), 5
__bit                   PSMC1TMR6           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 6;
#define                                 PSMC1TMR6_bit       BANKMASK(PSMC1TMRL), 6
__bit                   PSMC1TMR7           ; //SWAP (((unsigned) &PSMC1TMRL)*8) + 7;
#define                                 PSMC1TMR7_bit       BANKMASK(PSMC1TMRL), 7
__bit                   PSMC1TMR8           ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 0;
#define                                 PSMC1TMR8_bit       BANKMASK(PSMC1TMRH), 0
__bit                   PSMC1TMR9           ; //SWAP (((unsigned) &PSMC1TMRH)*8) + 1;
#define                                 PSMC1TMR9_bit       BANKMASK(PSMC1TMRH), 1
__bit                   PSMC2BLKF0          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 0;
#define                                 PSMC2BLKF0_bit      BANKMASK(PSMC2BLKF), 0
__bit                   PSMC2BLKF1          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 1;
#define                                 PSMC2BLKF1_bit      BANKMASK(PSMC2BLKF), 1
__bit                   PSMC2BLKF2          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 2;
#define                                 PSMC2BLKF2_bit      BANKMASK(PSMC2BLKF), 2
__bit                   PSMC2BLKF3          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 3;
#define                                 PSMC2BLKF3_bit      BANKMASK(PSMC2BLKF), 3
__bit                   PSMC2BLKF4          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 4;
#define                                 PSMC2BLKF4_bit      BANKMASK(PSMC2BLKF), 4
__bit                   PSMC2BLKF5          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 5;
#define                                 PSMC2BLKF5_bit      BANKMASK(PSMC2BLKF), 5
__bit                   PSMC2BLKF6          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 6;
#define                                 PSMC2BLKF6_bit      BANKMASK(PSMC2BLKF), 6
__bit                   PSMC2BLKF7          ; //SWAP (((unsigned) &PSMC2BLKF)*8) + 7;
#define                                 PSMC2BLKF7_bit      BANKMASK(PSMC2BLKF), 7
__bit                   PSMC2BLKR0          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 0;
#define                                 PSMC2BLKR0_bit      BANKMASK(PSMC2BLKR), 0
__bit                   PSMC2BLKR1          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 1;
#define                                 PSMC2BLKR1_bit      BANKMASK(PSMC2BLKR), 1
__bit                   PSMC2BLKR2          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 2;
#define                                 PSMC2BLKR2_bit      BANKMASK(PSMC2BLKR), 2
__bit                   PSMC2BLKR3          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 3;
#define                                 PSMC2BLKR3_bit      BANKMASK(PSMC2BLKR), 3
__bit                   PSMC2BLKR4          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 4;
#define                                 PSMC2BLKR4_bit      BANKMASK(PSMC2BLKR), 4
__bit                   PSMC2BLKR5          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 5;
#define                                 PSMC2BLKR5_bit      BANKMASK(PSMC2BLKR), 5
__bit                   PSMC2BLKR6          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 6;
#define                                 PSMC2BLKR6_bit      BANKMASK(PSMC2BLKR), 6
__bit                   PSMC2BLKR7          ; //SWAP (((unsigned) &PSMC2BLKR)*8) + 7;
#define                                 PSMC2BLKR7_bit      BANKMASK(PSMC2BLKR), 7
__bit                   PSMC2DBF0           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 0;
#define                                 PSMC2DBF0_bit       BANKMASK(PSMC2DBF), 0
__bit                   PSMC2DBF1           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 1;
#define                                 PSMC2DBF1_bit       BANKMASK(PSMC2DBF), 1
__bit                   PSMC2DBF2           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 2;
#define                                 PSMC2DBF2_bit       BANKMASK(PSMC2DBF), 2
__bit                   PSMC2DBF3           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 3;
#define                                 PSMC2DBF3_bit       BANKMASK(PSMC2DBF), 3
__bit                   PSMC2DBF4           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 4;
#define                                 PSMC2DBF4_bit       BANKMASK(PSMC2DBF), 4
__bit                   PSMC2DBF5           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 5;
#define                                 PSMC2DBF5_bit       BANKMASK(PSMC2DBF), 5
__bit                   PSMC2DBF6           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 6;
#define                                 PSMC2DBF6_bit       BANKMASK(PSMC2DBF), 6
__bit                   PSMC2DBF7           ; //SWAP (((unsigned) &PSMC2DBF)*8) + 7;
#define                                 PSMC2DBF7_bit       BANKMASK(PSMC2DBF), 7
__bit                   PSMC2DBR0           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 0;
#define                                 PSMC2DBR0_bit       BANKMASK(PSMC2DBR), 0
__bit                   PSMC2DBR1           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 1;
#define                                 PSMC2DBR1_bit       BANKMASK(PSMC2DBR), 1
__bit                   PSMC2DBR2           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 2;
#define                                 PSMC2DBR2_bit       BANKMASK(PSMC2DBR), 2
__bit                   PSMC2DBR3           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 3;
#define                                 PSMC2DBR3_bit       BANKMASK(PSMC2DBR), 3
__bit                   PSMC2DBR4           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 4;
#define                                 PSMC2DBR4_bit       BANKMASK(PSMC2DBR), 4
__bit                   PSMC2DBR5           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 5;
#define                                 PSMC2DBR5_bit       BANKMASK(PSMC2DBR), 5
__bit                   PSMC2DBR6           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 6;
#define                                 PSMC2DBR6_bit       BANKMASK(PSMC2DBR), 6
__bit                   PSMC2DBR7           ; //SWAP (((unsigned) &PSMC2DBR)*8) + 7;
#define                                 PSMC2DBR7_bit       BANKMASK(PSMC2DBR), 7
__bit                   PSMC2DC0            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 0;
#define                                 PSMC2DC0_bit        BANKMASK(PSMC2DCL), 0
__bit                   PSMC2DC1            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 1;
#define                                 PSMC2DC1_bit        BANKMASK(PSMC2DCL), 1
__bit                   PSMC2DC10           ; //SWAP (((unsigned) &PSMC2DCH)*8) + 2;
#define                                 PSMC2DC10_bit       BANKMASK(PSMC2DCH), 2
__bit                   PSMC2DC11           ; //SWAP (((unsigned) &PSMC2DCH)*8) + 3;
#define                                 PSMC2DC11_bit       BANKMASK(PSMC2DCH), 3
__bit                   PSMC2DC12           ; //SWAP (((unsigned) &PSMC2DCH)*8) + 4;
#define                                 PSMC2DC12_bit       BANKMASK(PSMC2DCH), 4
__bit                   PSMC2DC13           ; //SWAP (((unsigned) &PSMC2DCH)*8) + 5;
#define                                 PSMC2DC13_bit       BANKMASK(PSMC2DCH), 5
__bit                   PSMC2DC14           ; //SWAP (((unsigned) &PSMC2DCH)*8) + 6;
#define                                 PSMC2DC14_bit       BANKMASK(PSMC2DCH), 6
__bit                   PSMC2DC15           ; //SWAP (((unsigned) &PSMC2DCH)*8) + 7;
#define                                 PSMC2DC15_bit       BANKMASK(PSMC2DCH), 7
__bit                   PSMC2DC2            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 2;
#define                                 PSMC2DC2_bit        BANKMASK(PSMC2DCL), 2
__bit                   PSMC2DC3            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 3;
#define                                 PSMC2DC3_bit        BANKMASK(PSMC2DCL), 3
__bit                   PSMC2DC4            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 4;
#define                                 PSMC2DC4_bit        BANKMASK(PSMC2DCL), 4
__bit                   PSMC2DC5            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 5;
#define                                 PSMC2DC5_bit        BANKMASK(PSMC2DCL), 5
__bit                   PSMC2DC6            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 6;
#define                                 PSMC2DC6_bit        BANKMASK(PSMC2DCL), 6
__bit                   PSMC2DC7            ; //SWAP (((unsigned) &PSMC2DCL)*8) + 7;
#define                                 PSMC2DC7_bit        BANKMASK(PSMC2DCL), 7
__bit                   PSMC2DC8            ; //SWAP (((unsigned) &PSMC2DCH)*8) + 0;
#define                                 PSMC2DC8_bit        BANKMASK(PSMC2DCH), 0
__bit                   PSMC2DC9            ; //SWAP (((unsigned) &PSMC2DCH)*8) + 1;
#define                                 PSMC2DC9_bit        BANKMASK(PSMC2DCH), 1
__bit                   PSMC2EN             ; //SWAP (((unsigned) &PSMC2CON)*8) + 7;
#define                                 PSMC2EN_bit         BANKMASK(PSMC2CON), 7
__bit                   PSMC2FFA0           ; //SWAP (((unsigned) &PSMC2FFA)*8) + 0;
#define                                 PSMC2FFA0_bit       BANKMASK(PSMC2FFA), 0
__bit                   PSMC2FFA1           ; //SWAP (((unsigned) &PSMC2FFA)*8) + 1;
#define                                 PSMC2FFA1_bit       BANKMASK(PSMC2FFA), 1
__bit                   PSMC2FFA2           ; //SWAP (((unsigned) &PSMC2FFA)*8) + 2;
#define                                 PSMC2FFA2_bit       BANKMASK(PSMC2FFA), 2
__bit                   PSMC2FFA3           ; //SWAP (((unsigned) &PSMC2FFA)*8) + 3;
#define                                 PSMC2FFA3_bit       BANKMASK(PSMC2FFA), 3
__bit                   PSMC2LD             ; //SWAP (((unsigned) &PSMC2CON)*8) + 6;
#define                                 PSMC2LD_bit         BANKMASK(PSMC2CON), 6
__bit                   PSMC2PH0            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 0;
#define                                 PSMC2PH0_bit        BANKMASK(PSMC2PHL), 0
__bit                   PSMC2PH1            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 1;
#define                                 PSMC2PH1_bit        BANKMASK(PSMC2PHL), 1
__bit                   PSMC2PH10           ; //SWAP (((unsigned) &PSMC2PHH)*8) + 2;
#define                                 PSMC2PH10_bit       BANKMASK(PSMC2PHH), 2
__bit                   PSMC2PH11           ; //SWAP (((unsigned) &PSMC2PHH)*8) + 3;
#define                                 PSMC2PH11_bit       BANKMASK(PSMC2PHH), 3
__bit                   PSMC2PH12           ; //SWAP (((unsigned) &PSMC2PHH)*8) + 4;
#define                                 PSMC2PH12_bit       BANKMASK(PSMC2PHH), 4
__bit                   PSMC2PH13           ; //SWAP (((unsigned) &PSMC2PHH)*8) + 5;
#define                                 PSMC2PH13_bit       BANKMASK(PSMC2PHH), 5
__bit                   PSMC2PH14           ; //SWAP (((unsigned) &PSMC2PHH)*8) + 6;
#define                                 PSMC2PH14_bit       BANKMASK(PSMC2PHH), 6
__bit                   PSMC2PH15           ; //SWAP (((unsigned) &PSMC2PHH)*8) + 7;
#define                                 PSMC2PH15_bit       BANKMASK(PSMC2PHH), 7
__bit                   PSMC2PH2            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 2;
#define                                 PSMC2PH2_bit        BANKMASK(PSMC2PHL), 2
__bit                   PSMC2PH3            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 3;
#define                                 PSMC2PH3_bit        BANKMASK(PSMC2PHL), 3
__bit                   PSMC2PH4            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 4;
#define                                 PSMC2PH4_bit        BANKMASK(PSMC2PHL), 4
__bit                   PSMC2PH5            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 5;
#define                                 PSMC2PH5_bit        BANKMASK(PSMC2PHL), 5
__bit                   PSMC2PH6            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 6;
#define                                 PSMC2PH6_bit        BANKMASK(PSMC2PHL), 6
__bit                   PSMC2PH7            ; //SWAP (((unsigned) &PSMC2PHL)*8) + 7;
#define                                 PSMC2PH7_bit        BANKMASK(PSMC2PHL), 7
__bit                   PSMC2PH8            ; //SWAP (((unsigned) &PSMC2PHH)*8) + 0;
#define                                 PSMC2PH8_bit        BANKMASK(PSMC2PHH), 0
__bit                   PSMC2PH9            ; //SWAP (((unsigned) &PSMC2PHH)*8) + 1;
#define                                 PSMC2PH9_bit        BANKMASK(PSMC2PHH), 1
__bit                   PSMC2PR0            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 0;
#define                                 PSMC2PR0_bit        BANKMASK(PSMC2PRL), 0
__bit                   PSMC2PR1            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 1;
#define                                 PSMC2PR1_bit        BANKMASK(PSMC2PRL), 1
__bit                   PSMC2PR10           ; //SWAP (((unsigned) &PSMC2PRH)*8) + 2;
#define                                 PSMC2PR10_bit       BANKMASK(PSMC2PRH), 2
__bit                   PSMC2PR11           ; //SWAP (((unsigned) &PSMC2PRH)*8) + 3;
#define                                 PSMC2PR11_bit       BANKMASK(PSMC2PRH), 3
__bit                   PSMC2PR12           ; //SWAP (((unsigned) &PSMC2PRH)*8) + 4;
#define                                 PSMC2PR12_bit       BANKMASK(PSMC2PRH), 4
__bit                   PSMC2PR13           ; //SWAP (((unsigned) &PSMC2PRH)*8) + 5;
#define                                 PSMC2PR13_bit       BANKMASK(PSMC2PRH), 5
__bit                   PSMC2PR14           ; //SWAP (((unsigned) &PSMC2PRH)*8) + 6;
#define                                 PSMC2PR14_bit       BANKMASK(PSMC2PRH), 6
__bit                   PSMC2PR15           ; //SWAP (((unsigned) &PSMC2PRH)*8) + 7;
#define                                 PSMC2PR15_bit       BANKMASK(PSMC2PRH), 7
__bit                   PSMC2PR2            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 2;
#define                                 PSMC2PR2_bit        BANKMASK(PSMC2PRL), 2
__bit                   PSMC2PR3            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 3;
#define                                 PSMC2PR3_bit        BANKMASK(PSMC2PRL), 3
__bit                   PSMC2PR4            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 4;
#define                                 PSMC2PR4_bit        BANKMASK(PSMC2PRL), 4
__bit                   PSMC2PR5            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 5;
#define                                 PSMC2PR5_bit        BANKMASK(PSMC2PRL), 5
__bit                   PSMC2PR6            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 6;
#define                                 PSMC2PR6_bit        BANKMASK(PSMC2PRL), 6
__bit                   PSMC2PR7            ; //SWAP (((unsigned) &PSMC2PRL)*8) + 7;
#define                                 PSMC2PR7_bit        BANKMASK(PSMC2PRL), 7
__bit                   PSMC2PR8            ; //SWAP (((unsigned) &PSMC2PRH)*8) + 0;
#define                                 PSMC2PR8_bit        BANKMASK(PSMC2PRH), 0
__bit                   PSMC2PR9            ; //SWAP (((unsigned) &PSMC2PRH)*8) + 1;
#define                                 PSMC2PR9_bit        BANKMASK(PSMC2PRH), 1
__bit                   PSMC2SIE            ; //SWAP (((unsigned) &PIE4)*8) + 1;
#define                                 PSMC2SIE_bit        BANKMASK(PIE4), 1
__bit                   PSMC2SIF            ; //SWAP (((unsigned) &PIR4)*8) + 1;
#define                                 PSMC2SIF_bit        BANKMASK(PIR4), 1
__bit                   PSMC2TIE            ; //SWAP (((unsigned) &PIE4)*8) + 5;
#define                                 PSMC2TIE_bit        BANKMASK(PIE4), 5
__bit                   PSMC2TIF            ; //SWAP (((unsigned) &PIR4)*8) + 5;
#define                                 PSMC2TIF_bit        BANKMASK(PIR4), 5
__bit                   PSMC2TMR0           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 0;
#define                                 PSMC2TMR0_bit       BANKMASK(PSMC2TMRL), 0
__bit                   PSMC2TMR1           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 1;
#define                                 PSMC2TMR1_bit       BANKMASK(PSMC2TMRL), 1
__bit                   PSMC2TMR10          ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 2;
#define                                 PSMC2TMR10_bit      BANKMASK(PSMC2TMRH), 2
__bit                   PSMC2TMR11          ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 3;
#define                                 PSMC2TMR11_bit      BANKMASK(PSMC2TMRH), 3
__bit                   PSMC2TMR12          ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 4;
#define                                 PSMC2TMR12_bit      BANKMASK(PSMC2TMRH), 4
__bit                   PSMC2TMR13          ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 5;
#define                                 PSMC2TMR13_bit      BANKMASK(PSMC2TMRH), 5
__bit                   PSMC2TMR14          ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 6;
#define                                 PSMC2TMR14_bit      BANKMASK(PSMC2TMRH), 6
__bit                   PSMC2TMR15          ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 7;
#define                                 PSMC2TMR15_bit      BANKMASK(PSMC2TMRH), 7
__bit                   PSMC2TMR2           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 2;
#define                                 PSMC2TMR2_bit       BANKMASK(PSMC2TMRL), 2
__bit                   PSMC2TMR3           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 3;
#define                                 PSMC2TMR3_bit       BANKMASK(PSMC2TMRL), 3
__bit                   PSMC2TMR4           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 4;
#define                                 PSMC2TMR4_bit       BANKMASK(PSMC2TMRL), 4
__bit                   PSMC2TMR5           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 5;
#define                                 PSMC2TMR5_bit       BANKMASK(PSMC2TMRL), 5
__bit                   PSMC2TMR6           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 6;
#define                                 PSMC2TMR6_bit       BANKMASK(PSMC2TMRL), 6
__bit                   PSMC2TMR7           ; //SWAP (((unsigned) &PSMC2TMRL)*8) + 7;
#define                                 PSMC2TMR7_bit       BANKMASK(PSMC2TMRL), 7
__bit                   PSMC2TMR8           ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 0;
#define                                 PSMC2TMR8_bit       BANKMASK(PSMC2TMRH), 0
__bit                   PSMC2TMR9           ; //SWAP (((unsigned) &PSMC2TMRH)*8) + 1;
#define                                 PSMC2TMR9_bit       BANKMASK(PSMC2TMRH), 1
__bit                   RA0                 ; //SWAP (((unsigned) &PORTA)*8) + 0;
#define                                 RA0_bit             BANKMASK(PORTA), 0
__bit                   RA1                 ; //SWAP (((unsigned) &PORTA)*8) + 1;
#define                                 RA1_bit             BANKMASK(PORTA), 1
__bit                   RA2                 ; //SWAP (((unsigned) &PORTA)*8) + 2;
#define                                 RA2_bit             BANKMASK(PORTA), 2
__bit                   RA3                 ; //SWAP (((unsigned) &PORTA)*8) + 3;
#define                                 RA3_bit             BANKMASK(PORTA), 3
__bit                   RA4                 ; //SWAP (((unsigned) &PORTA)*8) + 4;
#define                                 RA4_bit             BANKMASK(PORTA), 4
__bit                   RA5                 ; //SWAP (((unsigned) &PORTA)*8) + 5;
#define                                 RA5_bit             BANKMASK(PORTA), 5
__bit                   RA6                 ; //SWAP (((unsigned) &PORTA)*8) + 6;
#define                                 RA6_bit             BANKMASK(PORTA), 6
__bit                   RA7                 ; //SWAP (((unsigned) &PORTA)*8) + 7;
#define                                 RA7_bit             BANKMASK(PORTA), 7
__bit                   RB0                 ; //SWAP (((unsigned) &PORTB)*8) + 0;
#define                                 RB0_bit             BANKMASK(PORTB), 0
__bit                   RB1                 ; //SWAP (((unsigned) &PORTB)*8) + 1;
#define                                 RB1_bit             BANKMASK(PORTB), 1
__bit                   RB2                 ; //SWAP (((unsigned) &PORTB)*8) + 2;
#define                                 RB2_bit             BANKMASK(PORTB), 2
__bit                   RB3                 ; //SWAP (((unsigned) &PORTB)*8) + 3;
#define                                 RB3_bit             BANKMASK(PORTB), 3
__bit                   RB4                 ; //SWAP (((unsigned) &PORTB)*8) + 4;
#define                                 RB4_bit             BANKMASK(PORTB), 4
__bit                   RB5                 ; //SWAP (((unsigned) &PORTB)*8) + 5;
#define                                 RB5_bit             BANKMASK(PORTB), 5
__bit                   RB6                 ; //SWAP (((unsigned) &PORTB)*8) + 6;
#define                                 RB6_bit             BANKMASK(PORTB), 6
__bit                   RB7                 ; //SWAP (((unsigned) &PORTB)*8) + 7;
#define                                 RB7_bit             BANKMASK(PORTB), 7
__bit                   RC0                 ; //SWAP (((unsigned) &PORTC)*8) + 0;
#define                                 RC0_bit             BANKMASK(PORTC), 0
__bit                   RC1                 ; //SWAP (((unsigned) &PORTC)*8) + 1;
#define                                 RC1_bit             BANKMASK(PORTC), 1
__bit                   RC2                 ; //SWAP (((unsigned) &PORTC)*8) + 2;
#define                                 RC2_bit             BANKMASK(PORTC), 2
__bit                   RC3                 ; //SWAP (((unsigned) &PORTC)*8) + 3;
#define                                 RC3_bit             BANKMASK(PORTC), 3
__bit                   RC4                 ; //SWAP (((unsigned) &PORTC)*8) + 4;
#define                                 RC4_bit             BANKMASK(PORTC), 4
__bit                   RC5                 ; //SWAP (((unsigned) &PORTC)*8) + 5;
#define                                 RC5_bit             BANKMASK(PORTC), 5
__bit                   RC6                 ; //SWAP (((unsigned) &PORTC)*8) + 6;
#define                                 RC6_bit             BANKMASK(PORTC), 6
__bit                   RC7                 ; //SWAP (((unsigned) &PORTC)*8) + 7;
#define                                 RC7_bit             BANKMASK(PORTC), 7
__bit                   RCEN                ; //SWAP (((unsigned) &SSPCON2)*8) + 3;
#define                                 RCEN_bit            BANKMASK(SSPCON2), 3
__bit                   RCIDL               ; //SWAP (((unsigned) &BAUD1CON)*8) + 6;
#define                                 RCIDL_bit           BANKMASK(BAUD1CON), 6
__bit                   RCIE                ; //SWAP (((unsigned) &PIE1)*8) + 5;
#define                                 RCIE_bit            BANKMASK(PIE1), 5
__bit                   RCIF                ; //SWAP (((unsigned) &PIR1)*8) + 5;
#define                                 RCIF_bit            BANKMASK(PIR1), 5
__bit                   RD                  ; //SWAP (((unsigned) &EECON1)*8) + 0;
#define                                 RD_bit              BANKMASK(EECON1), 0
__bit                   RE3                 ; //SWAP (((unsigned) &PORTE)*8) + 3;
#define                                 RE3_bit             BANKMASK(PORTE), 3
__bit                   RSEN                ; //SWAP (((unsigned) &SSPCON2)*8) + 1;
#define                                 RSEN_bit            BANKMASK(SSPCON2), 1
__bit                   RX9                 ; //SWAP (((unsigned) &RC1STA)*8) + 6;
#define                                 RX9_bit             BANKMASK(RC1STA), 6
__bit                   RX9D                ; //SWAP (((unsigned) &RC1STA)*8) + 0;
#define                                 RX9D_bit            BANKMASK(RC1STA), 0
__bit                   RXSEL               ; //SWAP (((unsigned) &APFCON)*8) + 1;
#define                                 RXSEL_bit           BANKMASK(APFCON), 1
__bit                   R_nW                ; //SWAP (((unsigned) &SSPSTAT)*8) + 2;
#define                                 R_nW_bit            BANKMASK(SSPSTAT), 2
__bit                   SBCDE               ; //SWAP (((unsigned) &SSPCON3)*8) + 2;
#define                                 SBCDE_bit           BANKMASK(SSPCON3), 2
__bit                   SBOREN              ; //SWAP (((unsigned) &BORCON)*8) + 7;
#define                                 SBOREN_bit          BANKMASK(BORCON), 7
__bit                   SCIE                ; //SWAP (((unsigned) &SSPCON3)*8) + 5;
#define                                 SCIE_bit            BANKMASK(SSPCON3), 5
__bit                   SCKP                ; //SWAP (((unsigned) &BAUD1CON)*8) + 4;
#define                                 SCKP_bit            BANKMASK(BAUD1CON), 4
__bit                   SCKSEL              ; //SWAP (((unsigned) &APFCON)*8) + 4;
#define                                 SCKSEL_bit          BANKMASK(APFCON), 4
__bit                   SCS0                ; //SWAP (((unsigned) &OSCCON)*8) + 0;
#define                                 SCS0_bit            BANKMASK(OSCCON), 0
__bit                   SCS1                ; //SWAP (((unsigned) &OSCCON)*8) + 1;
#define                                 SCS1_bit            BANKMASK(OSCCON), 1
__bit                   SDAHT               ; //SWAP (((unsigned) &SSPCON3)*8) + 3;
#define                                 SDAHT_bit           BANKMASK(SSPCON3), 3
__bit                   SDISEL              ; //SWAP (((unsigned) &APFCON)*8) + 3;
#define                                 SDISEL_bit          BANKMASK(APFCON), 3
__bit                   SDOSEL              ; //SWAP (((unsigned) &APFCON)*8) + 5;
#define                                 SDOSEL_bit          BANKMASK(APFCON), 5
__bit                   SEN                 ; //SWAP (((unsigned) &SSPCON2)*8) + 0;
#define                                 SEN_bit             BANKMASK(SSPCON2), 0
__bit                   SENDB               ; //SWAP (((unsigned) &TX1STA)*8) + 3;
#define                                 SENDB_bit           BANKMASK(TX1STA), 3
__bit                   SLRCONA0            ; //SWAP (((unsigned) &SLRCONA)*8) + 0;
#define                                 SLRCONA0_bit        BANKMASK(SLRCONA), 0
__bit                   SLRCONA1            ; //SWAP (((unsigned) &SLRCONA)*8) + 1;
#define                                 SLRCONA1_bit        BANKMASK(SLRCONA), 1
__bit                   SLRCONA2            ; //SWAP (((unsigned) &SLRCONA)*8) + 2;
#define                                 SLRCONA2_bit        BANKMASK(SLRCONA), 2
__bit                   SLRCONA3            ; //SWAP (((unsigned) &SLRCONA)*8) + 3;
#define                                 SLRCONA3_bit        BANKMASK(SLRCONA), 3
__bit                   SLRCONA4            ; //SWAP (((unsigned) &SLRCONA)*8) + 4;
#define                                 SLRCONA4_bit        BANKMASK(SLRCONA), 4
__bit                   SLRCONA5            ; //SWAP (((unsigned) &SLRCONA)*8) + 5;
#define                                 SLRCONA5_bit        BANKMASK(SLRCONA), 5
__bit                   SLRCONA6            ; //SWAP (((unsigned) &SLRCONA)*8) + 6;
#define                                 SLRCONA6_bit        BANKMASK(SLRCONA), 6
__bit                   SLRCONA7            ; //SWAP (((unsigned) &SLRCONA)*8) + 7;
#define                                 SLRCONA7_bit        BANKMASK(SLRCONA), 7
__bit                   SLRCONB0            ; //SWAP (((unsigned) &SLRCONB)*8) + 0;
#define                                 SLRCONB0_bit        BANKMASK(SLRCONB), 0
__bit                   SLRCONB1            ; //SWAP (((unsigned) &SLRCONB)*8) + 1;
#define                                 SLRCONB1_bit        BANKMASK(SLRCONB), 1
__bit                   SLRCONB2            ; //SWAP (((unsigned) &SLRCONB)*8) + 2;
#define                                 SLRCONB2_bit        BANKMASK(SLRCONB), 2
__bit                   SLRCONB3            ; //SWAP (((unsigned) &SLRCONB)*8) + 3;
#define                                 SLRCONB3_bit        BANKMASK(SLRCONB), 3
__bit                   SLRCONB4            ; //SWAP (((unsigned) &SLRCONB)*8) + 4;
#define                                 SLRCONB4_bit        BANKMASK(SLRCONB), 4
__bit                   SLRCONB5            ; //SWAP (((unsigned) &SLRCONB)*8) + 5;
#define                                 SLRCONB5_bit        BANKMASK(SLRCONB), 5
__bit                   SLRCONB6            ; //SWAP (((unsigned) &SLRCONB)*8) + 6;
#define                                 SLRCONB6_bit        BANKMASK(SLRCONB), 6
__bit                   SLRCONB7            ; //SWAP (((unsigned) &SLRCONB)*8) + 7;
#define                                 SLRCONB7_bit        BANKMASK(SLRCONB), 7
__bit                   SLRCONC0            ; //SWAP (((unsigned) &SLRCONC)*8) + 0;
#define                                 SLRCONC0_bit        BANKMASK(SLRCONC), 0
__bit                   SLRCONC1            ; //SWAP (((unsigned) &SLRCONC)*8) + 1;
#define                                 SLRCONC1_bit        BANKMASK(SLRCONC), 1
__bit                   SLRCONC2            ; //SWAP (((unsigned) &SLRCONC)*8) + 2;
#define                                 SLRCONC2_bit        BANKMASK(SLRCONC), 2
__bit                   SLRCONC3            ; //SWAP (((unsigned) &SLRCONC)*8) + 3;
#define                                 SLRCONC3_bit        BANKMASK(SLRCONC), 3
__bit                   SLRCONC4            ; //SWAP (((unsigned) &SLRCONC)*8) + 4;
#define                                 SLRCONC4_bit        BANKMASK(SLRCONC), 4
__bit                   SLRCONC5            ; //SWAP (((unsigned) &SLRCONC)*8) + 5;
#define                                 SLRCONC5_bit        BANKMASK(SLRCONC), 5
__bit                   SLRCONC6            ; //SWAP (((unsigned) &SLRCONC)*8) + 6;
#define                                 SLRCONC6_bit        BANKMASK(SLRCONC), 6
__bit                   SLRCONC7            ; //SWAP (((unsigned) &SLRCONC)*8) + 7;
#define                                 SLRCONC7_bit        BANKMASK(SLRCONC), 7
__bit                   SMP                 ; //SWAP (((unsigned) &SSPSTAT)*8) + 7;
#define                                 SMP_bit             BANKMASK(SSPSTAT), 7
__bit                   SPEN                ; //SWAP (((unsigned) &RC1STA)*8) + 7;
#define                                 SPEN_bit            BANKMASK(RC1STA), 7
__bit                   SPLLEN              ; //SWAP (((unsigned) &OSCCON)*8) + 7;
#define                                 SPLLEN_bit          BANKMASK(OSCCON), 7
__bit                   SREN                ; //SWAP (((unsigned) &RC1STA)*8) + 5;
#define                                 SREN_bit            BANKMASK(RC1STA), 5
__bit                   SSP1IE              ; //SWAP (((unsigned) &PIE1)*8) + 3;
#define                                 SSP1IE_bit          BANKMASK(PIE1), 3
__bit                   SSP1IF              ; //SWAP (((unsigned) &PIR1)*8) + 3;
#define                                 SSP1IF_bit          BANKMASK(PIR1), 3
__bit                   SSPEN               ; //SWAP (((unsigned) &SSPCON1)*8) + 5;
#define                                 SSPEN_bit           BANKMASK(SSPCON1), 5
__bit                   SSPM0               ; //SWAP (((unsigned) &SSPCON1)*8) + 0;
#define                                 SSPM0_bit           BANKMASK(SSPCON1), 0
__bit                   SSPM1               ; //SWAP (((unsigned) &SSPCON1)*8) + 1;
#define                                 SSPM1_bit           BANKMASK(SSPCON1), 1
__bit                   SSPM2               ; //SWAP (((unsigned) &SSPCON1)*8) + 2;
#define                                 SSPM2_bit           BANKMASK(SSPCON1), 2
__bit                   SSPM3               ; //SWAP (((unsigned) &SSPCON1)*8) + 3;
#define                                 SSPM3_bit           BANKMASK(SSPCON1), 3
__bit                   SSPOV               ; //SWAP (((unsigned) &SSPCON1)*8) + 6;
#define                                 SSPOV_bit           BANKMASK(SSPCON1), 6
__bit                   STKOVF              ; //SWAP (((unsigned) &PCON)*8) + 7;
#define                                 STKOVF_bit          BANKMASK(PCON), 7
__bit                   STKUNF              ; //SWAP (((unsigned) &PCON)*8) + 6;
#define                                 STKUNF_bit          BANKMASK(PCON), 6
__bit                   SWDTEN              ; //SWAP (((unsigned) &WDTCON)*8) + 0;
#define                                 SWDTEN_bit          BANKMASK(WDTCON), 0
__bit                   SYNC                ; //SWAP (((unsigned) &TX1STA)*8) + 4;
#define                                 SYNC_bit            BANKMASK(TX1STA), 4
__bit                   T0CS                ; //SWAP (((unsigned) &OPTION_REG)*8) + 5;
#define                                 T0CS_bit            BANKMASK(OPTION_REG), 5
__bit                   T0IE                ; //SWAP (((unsigned) &INTCON)*8) + 5;
#define                                 T0IE_bit            BANKMASK(INTCON), 5
__bit                   T0IF                ; //SWAP (((unsigned) &INTCON)*8) + 2;
#define                                 T0IF_bit            BANKMASK(INTCON), 2
__bit                   T0SE                ; //SWAP (((unsigned) &OPTION_REG)*8) + 4;
#define                                 T0SE_bit            BANKMASK(OPTION_REG), 4
__bit                   T1CKPS0             ; //SWAP (((unsigned) &T1CON)*8) + 4;
#define                                 T1CKPS0_bit         BANKMASK(T1CON), 4
__bit                   T1CKPS1             ; //SWAP (((unsigned) &T1CON)*8) + 5;
#define                                 T1CKPS1_bit         BANKMASK(T1CON), 5
__bit                   T1GGO               ; //SWAP (((unsigned) &T1GCON)*8) + 3;
#define                                 T1GGO_bit           BANKMASK(T1GCON), 3
__bit                   T1GPOL              ; //SWAP (((unsigned) &T1GCON)*8) + 6;
#define                                 T1GPOL_bit          BANKMASK(T1GCON), 6
__bit                   T1GSPM              ; //SWAP (((unsigned) &T1GCON)*8) + 4;
#define                                 T1GSPM_bit          BANKMASK(T1GCON), 4
__bit                   T1GSS0              ; //SWAP (((unsigned) &T1GCON)*8) + 0;
#define                                 T1GSS0_bit          BANKMASK(T1GCON), 0
__bit                   T1GSS1              ; //SWAP (((unsigned) &T1GCON)*8) + 1;
#define                                 T1GSS1_bit          BANKMASK(T1GCON), 1
__bit                   T1GTM               ; //SWAP (((unsigned) &T1GCON)*8) + 5;
#define                                 T1GTM_bit           BANKMASK(T1GCON), 5
__bit                   T1GVAL              ; //SWAP (((unsigned) &T1GCON)*8) + 2;
#define                                 T1GVAL_bit          BANKMASK(T1GCON), 2
__bit                   T1OSCEN             ; //SWAP (((unsigned) &T1CON)*8) + 3;
#define                                 T1OSCEN_bit         BANKMASK(T1CON), 3
__bit                   T1OSCR              ; //SWAP (((unsigned) &OSCSTAT)*8) + 7;
#define                                 T1OSCR_bit          BANKMASK(OSCSTAT), 7
__bit                   T2CKPS0             ; //SWAP (((unsigned) &T2CON)*8) + 0;
#define                                 T2CKPS0_bit         BANKMASK(T2CON), 0
__bit                   T2CKPS1             ; //SWAP (((unsigned) &T2CON)*8) + 1;
#define                                 T2CKPS1_bit         BANKMASK(T2CON), 1
__bit                   T2OUTPS0            ; //SWAP (((unsigned) &T2CON)*8) + 3;
#define                                 T2OUTPS0_bit        BANKMASK(T2CON), 3
__bit                   T2OUTPS1            ; //SWAP (((unsigned) &T2CON)*8) + 4;
#define                                 T2OUTPS1_bit        BANKMASK(T2CON), 4
__bit                   T2OUTPS2            ; //SWAP (((unsigned) &T2CON)*8) + 5;
#define                                 T2OUTPS2_bit        BANKMASK(T2CON), 5
__bit                   T2OUTPS3            ; //SWAP (((unsigned) &T2CON)*8) + 6;
#define                                 T2OUTPS3_bit        BANKMASK(T2CON), 6
__bit                   TMR0CS              ; //SWAP (((unsigned) &OPTION_REG)*8) + 5;
#define                                 TMR0CS_bit          BANKMASK(OPTION_REG), 5
__bit                   TMR0IE              ; //SWAP (((unsigned) &INTCON)*8) + 5;
#define                                 TMR0IE_bit          BANKMASK(INTCON), 5
__bit                   TMR0IF              ; //SWAP (((unsigned) &INTCON)*8) + 2;
#define                                 TMR0IF_bit          BANKMASK(INTCON), 2
__bit                   TMR0SE              ; //SWAP (((unsigned) &OPTION_REG)*8) + 4;
#define                                 TMR0SE_bit          BANKMASK(OPTION_REG), 4
__bit                   TMR1CS0             ; //SWAP (((unsigned) &T1CON)*8) + 6;
#define                                 TMR1CS0_bit         BANKMASK(T1CON), 6
__bit                   TMR1CS1             ; //SWAP (((unsigned) &T1CON)*8) + 7;
#define                                 TMR1CS1_bit         BANKMASK(T1CON), 7
__bit                   TMR1GE              ; //SWAP (((unsigned) &T1GCON)*8) + 7;
#define                                 TMR1GE_bit          BANKMASK(T1GCON), 7
__bit                   TMR1GIE             ; //SWAP (((unsigned) &PIE1)*8) + 7;
#define                                 TMR1GIE_bit         BANKMASK(PIE1), 7
__bit                   TMR1GIF             ; //SWAP (((unsigned) &PIR1)*8) + 7;
#define                                 TMR1GIF_bit         BANKMASK(PIR1), 7
__bit                   TMR1IE              ; //SWAP (((unsigned) &PIE1)*8) + 0;
#define                                 TMR1IE_bit          BANKMASK(PIE1), 0
__bit                   TMR1IF              ; //SWAP (((unsigned) &PIR1)*8) + 0;
#define                                 TMR1IF_bit          BANKMASK(PIR1), 0
__bit                   TMR1ON              ; //SWAP (((unsigned) &T1CON)*8) + 0;
#define                                 TMR1ON_bit          BANKMASK(T1CON), 0
__bit                   TMR2IE              ; //SWAP (((unsigned) &PIE1)*8) + 1;
#define                                 TMR2IE_bit          BANKMASK(PIE1), 1
__bit                   TMR2IF              ; //SWAP (((unsigned) &PIR1)*8) + 1;
#define                                 TMR2IF_bit          BANKMASK(PIR1), 1
__bit                   TMR2ON              ; //SWAP (((unsigned) &T2CON)*8) + 2;
#define                                 TMR2ON_bit          BANKMASK(T2CON), 2
__bit                   TRIGSEL0            ; //SWAP (((unsigned) &ADCON2)*8) + 4;
#define                                 TRIGSEL0_bit        BANKMASK(ADCON2), 4
__bit                   TRIGSEL1            ; //SWAP (((unsigned) &ADCON2)*8) + 5;
#define                                 TRIGSEL1_bit        BANKMASK(ADCON2), 5
__bit                   TRIGSEL2            ; //SWAP (((unsigned) &ADCON2)*8) + 6;
#define                                 TRIGSEL2_bit        BANKMASK(ADCON2), 6
__bit                   TRIGSEL3            ; //SWAP (((unsigned) &ADCON2)*8) + 7;
#define                                 TRIGSEL3_bit        BANKMASK(ADCON2), 7
__bit                   TRISA0              ; //SWAP (((unsigned) &TRISA)*8) + 0;
#define                                 TRISA0_bit          BANKMASK(TRISA), 0
__bit                   TRISA1              ; //SWAP (((unsigned) &TRISA)*8) + 1;
#define                                 TRISA1_bit          BANKMASK(TRISA), 1
__bit                   TRISA2              ; //SWAP (((unsigned) &TRISA)*8) + 2;
#define                                 TRISA2_bit          BANKMASK(TRISA), 2
__bit                   TRISA3              ; //SWAP (((unsigned) &TRISA)*8) + 3;
#define                                 TRISA3_bit          BANKMASK(TRISA), 3
__bit                   TRISA4              ; //SWAP (((unsigned) &TRISA)*8) + 4;
#define                                 TRISA4_bit          BANKMASK(TRISA), 4
__bit                   TRISA5              ; //SWAP (((unsigned) &TRISA)*8) + 5;
#define                                 TRISA5_bit          BANKMASK(TRISA), 5
__bit                   TRISA6              ; //SWAP (((unsigned) &TRISA)*8) + 6;
#define                                 TRISA6_bit          BANKMASK(TRISA), 6
__bit                   TRISA7              ; //SWAP (((unsigned) &TRISA)*8) + 7;
#define                                 TRISA7_bit          BANKMASK(TRISA), 7
__bit                   TRISB0              ; //SWAP (((unsigned) &TRISB)*8) + 0;
#define                                 TRISB0_bit          BANKMASK(TRISB), 0
__bit                   TRISB1              ; //SWAP (((unsigned) &TRISB)*8) + 1;
#define                                 TRISB1_bit          BANKMASK(TRISB), 1
__bit                   TRISB2              ; //SWAP (((unsigned) &TRISB)*8) + 2;
#define                                 TRISB2_bit          BANKMASK(TRISB), 2
__bit                   TRISB3              ; //SWAP (((unsigned) &TRISB)*8) + 3;
#define                                 TRISB3_bit          BANKMASK(TRISB), 3
__bit                   TRISB4              ; //SWAP (((unsigned) &TRISB)*8) + 4;
#define                                 TRISB4_bit          BANKMASK(TRISB), 4
__bit                   TRISB5              ; //SWAP (((unsigned) &TRISB)*8) + 5;
#define                                 TRISB5_bit          BANKMASK(TRISB), 5
__bit                   TRISB6              ; //SWAP (((unsigned) &TRISB)*8) + 6;
#define                                 TRISB6_bit          BANKMASK(TRISB), 6
__bit                   TRISB7              ; //SWAP (((unsigned) &TRISB)*8) + 7;
#define                                 TRISB7_bit          BANKMASK(TRISB), 7
__bit                   TRISC0              ; //SWAP (((unsigned) &TRISC)*8) + 0;
#define                                 TRISC0_bit          BANKMASK(TRISC), 0
__bit                   TRISC1              ; //SWAP (((unsigned) &TRISC)*8) + 1;
#define                                 TRISC1_bit          BANKMASK(TRISC), 1
__bit                   TRISC2              ; //SWAP (((unsigned) &TRISC)*8) + 2;
#define                                 TRISC2_bit          BANKMASK(TRISC), 2
__bit                   TRISC3              ; //SWAP (((unsigned) &TRISC)*8) + 3;
#define                                 TRISC3_bit          BANKMASK(TRISC), 3
__bit                   TRISC4              ; //SWAP (((unsigned) &TRISC)*8) + 4;
#define                                 TRISC4_bit          BANKMASK(TRISC), 4
__bit                   TRISC5              ; //SWAP (((unsigned) &TRISC)*8) + 5;
#define                                 TRISC5_bit          BANKMASK(TRISC), 5
__bit                   TRISC6              ; //SWAP (((unsigned) &TRISC)*8) + 6;
#define                                 TRISC6_bit          BANKMASK(TRISC), 6
__bit                   TRISC7              ; //SWAP (((unsigned) &TRISC)*8) + 7;
#define                                 TRISC7_bit          BANKMASK(TRISC), 7
__bit                   TRISE3              ; //SWAP (((unsigned) &TRISE)*8) + 3;
#define                                 TRISE3_bit          BANKMASK(TRISE), 3
__bit                   TRMT                ; //SWAP (((unsigned) &TX1STA)*8) + 1;
#define                                 TRMT_bit            BANKMASK(TX1STA), 1
__bit                   TSEN                ; //SWAP (((unsigned) &FVRCON)*8) + 5;
#define                                 TSEN_bit            BANKMASK(FVRCON), 5
__bit                   TSRNG               ; //SWAP (((unsigned) &FVRCON)*8) + 4;
#define                                 TSRNG_bit           BANKMASK(FVRCON), 4
__bit                   TUN0                ; //SWAP (((unsigned) &OSCTUNE)*8) + 0;
#define                                 TUN0_bit            BANKMASK(OSCTUNE), 0
__bit                   TUN1                ; //SWAP (((unsigned) &OSCTUNE)*8) + 1;
#define                                 TUN1_bit            BANKMASK(OSCTUNE), 1
__bit                   TUN2                ; //SWAP (((unsigned) &OSCTUNE)*8) + 2;
#define                                 TUN2_bit            BANKMASK(OSCTUNE), 2
__bit                   TUN3                ; //SWAP (((unsigned) &OSCTUNE)*8) + 3;
#define                                 TUN3_bit            BANKMASK(OSCTUNE), 3
__bit                   TUN4                ; //SWAP (((unsigned) &OSCTUNE)*8) + 4;
#define                                 TUN4_bit            BANKMASK(OSCTUNE), 4
__bit                   TUN5                ; //SWAP (((unsigned) &OSCTUNE)*8) + 5;
#define                                 TUN5_bit            BANKMASK(OSCTUNE), 5
__bit                   TX9                 ; //SWAP (((unsigned) &TX1STA)*8) + 6;
#define                                 TX9_bit             BANKMASK(TX1STA), 6
__bit                   TX9D                ; //SWAP (((unsigned) &TX1STA)*8) + 0;
#define                                 TX9D_bit            BANKMASK(TX1STA), 0
__bit                   TXEN                ; //SWAP (((unsigned) &TX1STA)*8) + 5;
#define                                 TXEN_bit            BANKMASK(TX1STA), 5
__bit                   TXIE                ; //SWAP (((unsigned) &PIE1)*8) + 4;
#define                                 TXIE_bit            BANKMASK(PIE1), 4
__bit                   TXIF                ; //SWAP (((unsigned) &PIR1)*8) + 4;
#define                                 TXIF_bit            BANKMASK(PIR1), 4
__bit                   TXSEL               ; //SWAP (((unsigned) &APFCON)*8) + 2;
#define                                 TXSEL_bit           BANKMASK(APFCON), 2
__bit                   UA                  ; //SWAP (((unsigned) &SSPSTAT)*8) + 1;
#define                                 UA_bit              BANKMASK(SSPSTAT), 1
__bit                   VREGPM              ; //SWAP (((unsigned) &VREGCON)*8) + 1;
#define                                 VREGPM_bit          BANKMASK(VREGCON), 1
__bit                   WCOL                ; //SWAP (((unsigned) &SSPCON1)*8) + 7;
#define                                 WCOL_bit            BANKMASK(SSPCON1), 7
__bit                   WDTPS0              ; //SWAP (((unsigned) &WDTCON)*8) + 1;
#define                                 WDTPS0_bit          BANKMASK(WDTCON), 1
__bit                   WDTPS1              ; //SWAP (((unsigned) &WDTCON)*8) + 2;
#define                                 WDTPS1_bit          BANKMASK(WDTCON), 2
__bit                   WDTPS2              ; //SWAP (((unsigned) &WDTCON)*8) + 3;
#define                                 WDTPS2_bit          BANKMASK(WDTCON), 3
__bit                   WDTPS3              ; //SWAP (((unsigned) &WDTCON)*8) + 4;
#define                                 WDTPS3_bit          BANKMASK(WDTCON), 4
__bit                   WDTPS4              ; //SWAP (((unsigned) &WDTCON)*8) + 5;
#define                                 WDTPS4_bit          BANKMASK(WDTCON), 5
__bit                   WPUA0               ; //SWAP (((unsigned) &WPUA)*8) + 0;
#define                                 WPUA0_bit           BANKMASK(WPUA), 0
__bit                   WPUA1               ; //SWAP (((unsigned) &WPUA)*8) + 1;
#define                                 WPUA1_bit           BANKMASK(WPUA), 1
__bit                   WPUA2               ; //SWAP (((unsigned) &WPUA)*8) + 2;
#define                                 WPUA2_bit           BANKMASK(WPUA), 2
__bit                   WPUA3               ; //SWAP (((unsigned) &WPUA)*8) + 3;
#define                                 WPUA3_bit           BANKMASK(WPUA), 3
__bit                   WPUA4               ; //SWAP (((unsigned) &WPUA)*8) + 4;
#define                                 WPUA4_bit           BANKMASK(WPUA), 4
__bit                   WPUA5               ; //SWAP (((unsigned) &WPUA)*8) + 5;
#define                                 WPUA5_bit           BANKMASK(WPUA), 5
__bit                   WPUA6               ; //SWAP (((unsigned) &WPUA)*8) + 6;
#define                                 WPUA6_bit           BANKMASK(WPUA), 6
__bit                   WPUA7               ; //SWAP (((unsigned) &WPUA)*8) + 7;
#define                                 WPUA7_bit           BANKMASK(WPUA), 7
__bit                   WPUB0               ; //SWAP (((unsigned) &WPUB)*8) + 0;
#define                                 WPUB0_bit           BANKMASK(WPUB), 0
__bit                   WPUB1               ; //SWAP (((unsigned) &WPUB)*8) + 1;
#define                                 WPUB1_bit           BANKMASK(WPUB), 1
__bit                   WPUB2               ; //SWAP (((unsigned) &WPUB)*8) + 2;
#define                                 WPUB2_bit           BANKMASK(WPUB), 2
__bit                   WPUB3               ; //SWAP (((unsigned) &WPUB)*8) + 3;
#define                                 WPUB3_bit           BANKMASK(WPUB), 3
__bit                   WPUB4               ; //SWAP (((unsigned) &WPUB)*8) + 4;
#define                                 WPUB4_bit           BANKMASK(WPUB), 4
__bit                   WPUB5               ; //SWAP (((unsigned) &WPUB)*8) + 5;
#define                                 WPUB5_bit           BANKMASK(WPUB), 5
__bit                   WPUB6               ; //SWAP (((unsigned) &WPUB)*8) + 6;
#define                                 WPUB6_bit           BANKMASK(WPUB), 6
__bit                   WPUB7               ; //SWAP (((unsigned) &WPUB)*8) + 7;
#define                                 WPUB7_bit           BANKMASK(WPUB), 7
__bit                   WPUC0               ; //SWAP (((unsigned) &WPUC)*8) + 0;
#define                                 WPUC0_bit           BANKMASK(WPUC), 0
__bit                   WPUC1               ; //SWAP (((unsigned) &WPUC)*8) + 1;
#define                                 WPUC1_bit           BANKMASK(WPUC), 1
__bit                   WPUC2               ; //SWAP (((unsigned) &WPUC)*8) + 2;
#define                                 WPUC2_bit           BANKMASK(WPUC), 2
__bit                   WPUC3               ; //SWAP (((unsigned) &WPUC)*8) + 3;
#define                                 WPUC3_bit           BANKMASK(WPUC), 3
__bit                   WPUC4               ; //SWAP (((unsigned) &WPUC)*8) + 4;
#define                                 WPUC4_bit           BANKMASK(WPUC), 4
__bit                   WPUC5               ; //SWAP (((unsigned) &WPUC)*8) + 5;
#define                                 WPUC5_bit           BANKMASK(WPUC), 5
__bit                   WPUC6               ; //SWAP (((unsigned) &WPUC)*8) + 6;
#define                                 WPUC6_bit           BANKMASK(WPUC), 6
__bit                   WPUC7               ; //SWAP (((unsigned) &WPUC)*8) + 7;
#define                                 WPUC7_bit           BANKMASK(WPUC), 7
__bit                   WPUE3               ; //SWAP (((unsigned) &WPUE)*8) + 3;
#define                                 WPUE3_bit           BANKMASK(WPUE), 3
__bit                   WR                  ; //SWAP (((unsigned) &EECON1)*8) + 1;
#define                                 WR_bit              BANKMASK(EECON1), 1
__bit                   WREN                ; //SWAP (((unsigned) &EECON1)*8) + 2;
#define                                 WREN_bit            BANKMASK(EECON1), 2
__bit                   WRERR               ; //SWAP (((unsigned) &EECON1)*8) + 3;
#define                                 WRERR_bit           BANKMASK(EECON1), 3
__bit                   WUE                 ; //SWAP (((unsigned) &BAUD1CON)*8) + 1;
#define                                 WUE_bit             BANKMASK(BAUD1CON), 1
__bit                   ZERO                ; //SWAP (((unsigned) &STATUS)*8) + 2;
#define                                 ZERO_bit            BANKMASK(STATUS), 2
__bit                   Z_SHAD              ; //SWAP (((unsigned) &STATUS_SHAD)*8) + 2;
#define                                 Z_SHAD_bit          BANKMASK(STATUS_SHAD), 2
__bit                   nBOR                ; //SWAP (((unsigned) &PCON)*8) + 0;
#define                                 nBOR_bit            BANKMASK(PCON), 0
__bit                   nPD                 ; //SWAP (((unsigned) &STATUS)*8) + 3;
#define                                 nPD_bit             BANKMASK(STATUS), 3
__bit                   nPOR                ; //SWAP (((unsigned) &PCON)*8) + 1;
#define                                 nPOR_bit            BANKMASK(PCON), 1
__bit                   nRI                 ; //SWAP (((unsigned) &PCON)*8) + 2;
#define                                 nRI_bit             BANKMASK(PCON), 2
__bit                   nRMCLR              ; //SWAP (((unsigned) &PCON)*8) + 3;
#define                                 nRMCLR_bit          BANKMASK(PCON), 3
__bit                   nRWDT               ; //SWAP (((unsigned) &PCON)*8) + 4;
#define                                 nRWDT_bit           BANKMASK(PCON), 4
__bit                   nT1SYNC             ; //SWAP (((unsigned) &T1CON)*8) + 2;
#define                                 nT1SYNC_bit         BANKMASK(T1CON), 2
__bit                   nTO                 ; //SWAP (((unsigned) &STATUS)*8) + 4;
#define                                 nTO_bit             BANKMASK(STATUS), 4
__bit                   nWPUEN              ; //SWAP (((unsigned) &OPTION_REG)*8) + 7;
#define                                 nWPUEN_bit          BANKMASK(OPTION_REG), 7

#endif // _PIC16F1783_H_
