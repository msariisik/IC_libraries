/*
 * LV8907UWGEVK Library
 * Meric SARIISIK
 * 12/2018
 */

/*
WEN = 1 write, WEN = 0 read WEN is added to the MSB of ADDR register

WEN + ADDR[6:0] + WDAT[7:0]

GSDAT[7:0] + RDAT[7:0]  //always GSDAT is sent from lv.

*/

//high state indicates a Read and a low state indicates a Write
#ifndef __LV8907_H__
#define __LV8907_H__

//IC SETUP REGISTER
#define LV8907_MRCONF0         0X00 //
#define LV8907_MRCONF1         0X01
#define LV8907_MRCONF2         0X02
#define LV8907_MRCONF3         0X03
#define LV8907_MRCONF4         0X04
#define LV8907_MRCONF5         0X05
#define LV8907_MRCONF6         0X06
#define LV8907_MRCONF7         0X07
#define LV8907_MRCONF8         0X08
#define LV8907_MRCONF9         0X09
#define LV8907_MRCONF10        0X0A
#define LV8907_MRCONF11        0X0B
#define LV8907_MRCONF12        0X0C

//SPEED CONTROL SETUP
#define LV8907_MRSPCT0         0X10
#define LV8907_MRSPCT1         0X11
#define LV8907_MRSPCT2         0X12
#define LV8907_MRSPCT3         0X13
#define LV8907_MRSPCT4         0X14
#define LV8907_MRSPCT5         0X15
#define LV8907_MRSPCT6         0X16
#define LV8907_MRSPCT7         0X17
#define LV8907_MRSPCT8         0X18
#define LV8907_MRSPCT9         0X19
#define LV8907_MRSPCT10        0X1A

//SYSTEM DIAGNOSTICS AND TEST
#define LV8907_MRACS        0X20
#define LV8907_MRACK        0X30
#define LV8907_MRODL        0X31
#define LV8907_MRRST        0X32
#define LV8907_MRORB        0X33
#define LV8907_MRDIAG0      0X34
#define LV8907_MRDIAG1      0X35
#define LV8907_TEST1        0X38
#define LV8907_TEST2        0X39
#define LV8907_TEST3        0X3A
#define LV8907_TEST4        0X3B
#define LV8907_TEST5        0X3C

//OTP MEMORY SECTION
#define LV8907_ORCONF0      0X40
#define LV8907_ORCONF1      0X41
#define LV8907_ORCONF2      0X42
#define LV8907_ORCONF3      0X43
#define LV8907_ORCONF4      0X44
#define LV8907_ORCONF5      0X45
#define LV8907_ORCONF6      0X46
#define LV8907_ORCONF7      0X47
#define LV8907_ORCONF8      0X48
#define LV8907_ORCONF9      0X49
#define LV8907_ORCONF10     0X4A
#define LV8907_ORCONF11     0X4B
#define LV8907_ORCONF12     0X4C
#define LV8907_ORSPCT0      0X50
#define LV8907_ORSPCT1      0X51
#define LV8907_ORSPCT2      0X52
#define LV8907_ORSPCT3      0X53
#define LV8907_ORSPCT4      0X54
#define LV8907_ORSPCT5      0X55
#define LV8907_ORSPCT6      0X56
#define LV8907_ORSPCT7      0X57
#define LV8907_ORSPCT8      0X58
#define LV8907_ORSPCT9      0X59
#define LV8907_ORSPCT10     0X5A
#define LV8907_ORACS        0X60

//MOTOR CONFIGURATION REGISTER OVERVIEW
#define LV8907_MRCONF0        0X00
#define LV8907_MRCONF1        0X01
#define LV8907_MRCONF2        0X02
#define LV8907_MRCONF3        0X03
#define LV8907_MRCONF4        0X04
#define LV8907_MRCONF5        0X05
#define LV8907_MRCONF6        0X06
#define LV8907_MRCONF7        0X07
#define LV8907_MRCONF8        0X08
#define LV8907_MRCONF9        0X09
#define LV8907_MRCONF10       0X0A
#define LV8907_MRCONF11       0X0B
#define LV8907_MRCONF12       0X0C




#endif
