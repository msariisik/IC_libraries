/*
 * CS553X Library
 * Meric SARIISIK
 * 7/2015
 */


#ifndef __CS553X_H__
#define __CS553X_H__

#define CS553X_SYNC1      0XFF  //Part of the serial port re-initialization sequence.
#define CS553X_SYNC0      0XFE  //End of the serial port re-initialization sequence.

#define CS553X_NULL       0X00  //This command is used to clear a port flag and keep the converter in the continuous conversion mode.

/*
//Command Register (CS553X_COMM_REG)
#define CS553X_COMM_C               (1 << 7)              //D7 Command Bit, C
#define CS553X_COMM_ARA             (1 << 6)              //D6 Access Registers as Arrays, ARA
#define CS553X_COMM_CS              (((x) & 0x3) << 4)    //D5-D4 Channel Select Bits,CS1-CS0
#define CS553X_COMM_READ            (1 << 3)              //D3 Read/Write, R/W
#define CS553X_COMM_WRITE           (0 << 3)
#define CS553X_COMM_RSB             (((x) & 0x7) << 0)    //D2-D0 Register Select Bit,RSB3-RSB0
*/

//alıntı
#define CS553X_READ_DATA_TIMEOUT 2000000    //4.9152 MHz crystal takes 20ms to start

//Command Register Descriptions
/*READ/WRITE ALL OFFSET CALIBRATION REGISTERS*/
#define CS553X_CMD_READ_ALL_OFFSET_CAL            0x49
#define CS553X_CMD_WRITE_ALL_OFFSET_CAL           0x41

/*READ/WRITE ALL GAIN CALIBRATION REGISTERS*/
#define CS553X_CMD_READ_ALL_GAIN_CAL              0x4A
#define CS553X_CMD_WRITE_ALL_GAIN_CAL             0x42

/*READ/WRITE ALL CHANNEL-SETUP REGISTERS*/
#define CS553X_CMD_READ_ALL_CH_SETUP              0x4D
#define CS553X_CMD_WRITE_ALL_CH_SETUP             0x45

/*READ/WRITE INDIVIDUAL OFFSET REGISTER*/
#define CS553X_CMD_READ_INDV_OFFSET1          0x09
#define CS553X_CMD_WRITE_INDV_OFFSET1         0x01
#define CS553X_CMD_READ_INDV_OFFSET2          0x19
#define CS553X_CMD_WRITE_INDV_OFFSET2         0x11

/*READ/WRITE INDIVIDUAL GAIN REGISTER*/
#define CS553X_CMD_READ_INDV_GAIN1                0x0A
#define CS553X_CMD_WRITE_INDV_GAIN1               0x02
#define CS553X_CMD_READ_INDV_GAIN2                0x1A
#define CS553X_CMD_WRITE_INDV_GAIN2               0x12

/*READ/WRITE INDIVIDUAL CHANNEL-SETUP REGISTER*/
#define CS553X_CMD_READ_INDV_CH_SETUP1            0x0D
#define CS553X_CMD_WRITE_INDV_CH_SETUP1           0x05
#define CS553X_CMD_READ_INDV_CH_SETUP2            0x1D
#define CS553X_CMD_WRITE_INDV_CH_SETUP2           0x15
#define CS553X_CMD_READ_INDV_CH_SETUP3            0x2D
#define CS553X_CMD_WRITE_INDV_CH_SETUP3           0x25
#define CS553X_CMD_READ_INDV_CH_SETUP4            0x3D
#define CS553X_CMD_WRITE_INDV_CH_SETUP4           0x35

/*READ/WRITE CONFIGURATION REGISTER*/
#define CS553X_CMD_READ_CONF                      0x0B
#define CS553X_CMD_WRITE_CONF                     0x03

/*PERFORM CONVERSION*/
//Perform a single conversion.
#define CS553X_CMD_SINGLE_CONV_CH_SETUP1          0X80
#define CS553X_CMD_SINGLE_CONV_CH_SETUP2          0X88
#define CS553X_CMD_SINGLE_CONV_CH_SETUP3          0X90
#define CS553X_CMD_SINGLE_CONV_CH_SETUP4          0X98
#define CS553X_CMD_SINGLE_CONV_CH_SETUP5          0XA0
#define CS553X_CMD_SINGLE_CONV_CH_SETUP6          0XA8
#define CS553X_CMD_SINGLE_CONV_CH_SETUP7          0XB0
#define CS553X_CMD_SINGLE_CONV_CH_SETUP8          0XB8

//Perform continuous conversions.
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP1      0XC0
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP2      0XC8
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP3      0XD0
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP4      0XD8
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP5      0XE0
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP6      0XE8
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP7      0XF0
#define CS553X_CMD_CONTINUOUS_CONV_CH_SETUP8      0XF8

/*PERFORM CALIBRATION*/
//001 Self-Offset Calibration
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP1       0X81
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP2       0X89
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP3       0X91
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP4       0X99
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP5       0XA1
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP6       0XA9
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP7       0XB1
#define CS553X_CMD_SELF_OFFSET_CALIB_SETUP8       0XB9

//010 Self-Gain Calibration
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP1         0X82
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP2         0X8A
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP3         0X92
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP4         0X9A
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP5         0XA2
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP6         0XAA
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP7         0XB2
#define CS553X_CMD_SELF_GAIN_CALIB_SETUP8         0XBA

//101 System-Offset Calibration
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP1        0X85
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP2        0X8D
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP3        0X95
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP4        0X9D
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP5        0XA5
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP6        0XAD
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP7        0XB5
#define CS553X_CMD_SYS_OFFSET_CALIB_SETUP8        0XBD

//110 System-Gain Calibration
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP1          0X86
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP2          0X8E
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP3          0X96
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP4          0X9E
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP5          0XA6
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP6          0XAE
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP7          0XB6
#define CS553X_CMD_SYS_GAIN_CALIB_SETUP8          0XBE

//2.3.9. Configuration Register Descriptions
#define CS553X_PSS        1 << 31     //Power Save Select
#define CS553X_PDW        1 << 30     //Power Down Mode
#define CS553X_RS         1 << 29     //Reset System
#define CS553X_RV         1 << 28     //Reset Valid
#define CS553X_IS         1 << 27     //Input Short
#define CS553X_GB         1 << 26     //Guard Signal Bit
#define CS553X_VRS        1 << 25     //Voltage Reference Select
#define CS553X_OLS        1 << 22     //Output Latch Select
#define CS553X_OGS        1 << 20     //Offset and Gain Select
#define CS553X_FRS        1 << 19     //Filter Rate Select

//2.4.1. Channel-Setup Register
//Channel Select Bits
#define CS553X_CS1        0 << 14
#define CS553X_CS2        1 << 14

//Gain Bits
#define CS553X_GAIN_1     0 << 11
#define CS553X_GAIN_2     1 << 11
#define CS553X_GAIN_4     2 << 11
#define CS553X_GAIN_8     3 << 11
#define CS553X_GAIN_16    4 << 11
#define CS553X_GAIN_32    5 << 11
#define CS553X_GAIN_64    6 << 11

//Word Rate when FSR=1
#define CS553X_WR_100SPS    0x0 << 7
#define CS553X_WR_50SPS     0x1 << 7
#define CS553X_WR_25SPS     0x2 << 7
#define CS553X_WR_12P5SPS   0x3 << 7
#define CS553X_WR_6P25SPS   0x4 << 7
#define CS553X_WR_3200SPS   0x8 << 7
#define CS553X_WR_1600SPS   0x9 << 7
#define CS553X_WR_800SPS    0xA << 7
#define CS553X_WR_400SPS    0xB << 7
#define CS553X_WR_200SPS    0xC << 7

//Unipolar / Bipolar
#define CS553X_UNIPOLAR     1 << 6
#define CS553X_BIPOLAR      0 << 6

//Output Latch Bits
#define CS553X_OL0           0 << 4
#define CS553X_OL1           1 << 4       //should Select!
#define CS553X_OL2           2 << 4
#define CS553X_OL3           3 << 4

//Delay Time Bit
#define CS553X_DT0           0 << 3
#define CS553X_DT1           1 << 3       //should select!

//Open Circuit Detect Bit
#define CS553X_OCD0          0 << 2
#define CS553X_OCD1          1 << 2       //should select!

//Offset / Gain Register Pointer Bits
#define CS553X_OG0           0
#define CS553X_OG1           1

//alıntı
#define CMD_STOP_CONT_CONV 0xFF

#define TIMEOUTERR 0xff
#define SUCCESSFUL 0x0
#define CAL_TIMEOUT_LIMIT 4000


#endif
