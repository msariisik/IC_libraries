/*
 * A4964 Library
 * Meric SARIISIK
 * 01/2019
 */

 #ifndef __A4964_DEF__
 #define __A4964_DEF__


//how many bits to shift in register
 // register address (in the 16 word)
#define PWM_CONFIG0         0x0000
#define PWM_CONFIG1         0x0800
#define BRIDGE_CONFIG       0x1000
#define GATE_DRIVEN_CONFIG0 0x1800
#define GATE_DRIVEN_CONFIG1 0x2000
#define GATE_DRIVEN_CONFIG2 0x2800
#define CURRENT_LIMIT       0x3000
#define VDS_MONITOR0        0x3800
#define VDS_MONITOR1        0x4000
#define WATCHDOG_CONFIG0    0x4800
#define WATCHDOG_CONFIG1    0x5000
#define COMMUNICATION0      0x5800
#define COMMUNICATION1      0x6000
#define BEMF_CONFIG0        0x6800
#define BEMF_CONFIG1        0x7000
#define STARTUP_CONFIG0     0x7800
#define STARTUP_CONFIG1     0x8000
#define STARTUP_CONFIG2     0x8800
#define STARTUP_CONFIG3     0x9000
#define STARTUP_CONFIG4     0x9800
#define STARTUP_CONFIG5     0xA000
#define SPEED_LOOP0         0xA800
#define SPEED_LOOP1         0xB000
#define SPEED_LOOP2         0xB800
#define NVM_WRITE           0xC000
#define SYSTEM              0xC800
#define PHASE_ADVANCE       0xD000
#define MOTOR_FUNCTION      0xD800
#define MASK                0xE000
#define READBACK_SELECT     0xE800
#define WRITE_ONLY          0xF000
#define READ_ONLY           0xF800


#define WR 10
#define REG_READ 0
#define REG_WRITE (1<<WR)

//PWM_CONFIG0 bits
#define PW    1
#define PMD   7
#define MOD   9

//PWM_CONFIG1 bits
#define DS    1
#define DD0   5
#define DD1   6
#define DP    7

//BRIDGE_CONFIG bits
#define DT    1
#define SA0   7
#define SA1   8

//GATE_DRIVEN_CONFIG0 bits
#define IR2 1
#define IR1 5

//GATE_DRIVEN_CONFIG1 bits
#define IF2 1
#define IF1 5

//GATE_DRIVEN_CONFIG2 bits
#define TFS 1
#define TRS 5

//CURRENT_LIMIT bits
#define VIL 1
#define OBT 5

//VDS_MONITOR0 bits
#define VT    1
#define MIT0  8
#define MIT1  9

//VDS_MONITOR1 bits
#define VQT 1
#define VDQ 8

//WATCHDOG_CONFIG0 bits
#define WM  1

//WATCHDOG_CONFIG1 bits
#define WW  1
#define WC  6

//COMMUTATION0 bits
#define CI  1
#define CP  5

//COMMUTATION1 bits
#define CIT  1
#define CPT  5

//BEMF_CONFIG0 bits
#define BW  1

//BEMF_CONFIG1 bits
#define BF  1
#define BS0 5
#define BS1 6

//STARTUP_CONFIG0 bits
#define HD  1
#define HT  6

//STARTUP_CONFIG1 bits
#define HR0 1
#define HR1 2
#define KM  3
#define RSC 8
#define STM 9

//STARTUP_CONFIG2 bits
#define WBD 1
#define WMF 5
#define WIN 8

//STARTUP_CONFIG3 bits
#define SF1 1
#define SF2 5

//STARTUP_CONFIG4 bits
#define SD1 1
#define SD2 5

//STARTUP_CONFIG5 bits
#define SFS 1
#define STS 5

//SPEED_LOOP0 bits
#define SG  1
#define SGL 5

//SPEED_LOOP1 bits
#define SR  1
#define DF0 6
#define DF1 7
#define DV0 8
#define DV1 9

//SPEED_LOOP2 bits
#define SH 1
#define SL 5

//NVM_WRITE bits
#define SAV0 8
#define SAV1 9

//SYSTEM bits
#define CM0 1
#define CM1 2
#define DIL 3
#define IPI 4
#define LWK 5
#define OPM 6
#define VRG 7
#define VLR 8
#define ESF 9

//PHASE_ADVANCE bits
#define PA    1
#define KIP0  7
#define KIP1  8
#define PAM   9

//MOTOR_FUNCTION bits
#define RUN   1
#define DIR   2
#define BRK   3
#define DRM   4
#define OWM0  5
#define OWM1  6
#define GTS   7
#define LEN   8

//MASK bits
#define VO    1
#define BU    2
#define VLU   3
#define VRU   4
#define VSU   5
#define TW    6
#define OT    7
#define LOS   8
#define WD    9

//READBACK_SELECT bits
#define RBS0  1
#define RBS1  2
#define RBS2  3
#define CKS   4
#define LBR   5
#define DSR   7
#define DGS0  8
#define DGS1  9

////CONSTANTS//////////////////////////////////////
//PWM_CONFIG0 constants
#define BRIDGE_PWM_FIXED_PERIOD(N) ((N&0x3F)<<PW)
#define BRIDGE_PWM_MODE_CENTER_ALIGNED 0
#define BRIDGE_PWM_MODE_EDGE_ALIGNED  (1<<PMD)
#define MODULATION_MODE_3_PHASE 0
#define MODULATION_MODE_2_PHASE (1<<MOD)

//PWM_CONFIG1 constants
#define PWM_DITHER_STEP_COUNT(N) ((N&0x0F)<<DS)
#define PWM_DITHER_DWELL_TIME_1MS 0
#define PWM_DITHER_DWELL_TIME_2MS (1<<DD0)
#define PWM_DITHER_DWELL_TIME_5MS (1<<DD1)
#define PWM_DITHER_DWELL_TIME_10MS ((1<<DD0)|(1<<DD1))
#define PWM_DITHER_STEP_PERIOD(N) ((N&0x07)<<DP)

//BRIDGE_CONFIG constants
#define DEAD_TIME(N) ((N&0x3F)<<DT)
#define SENSE_AMP_GAIN_2_5 0
#define SENSE_AMP_GAIN_5 (1<<SA0)
#define SENSE_AMP_GAIN_10 (1<<SA1)
#define SENSE_AMP_GAIN_20 ((1<<SA0)|(1<<SA1))

//GATE_DRIVEN_CONFIG0 constants
#define TURN_ON_CURRENT2(N) ((N&0x0F)<<IR2)
#define TURN_ON_CURRENT1(N) ((N&0x0F)<<IR1)

//GATE_DRIVEN_CONFIG1 constants
#define TURN_OFF_CURRENT2(N) ((N&0x0F)<<IF2)
#define TURN_OFF_CURRENT1(N) ((N&0x0F)<<IF1)

//GATE_DRIVEN_CONFIG2 constants
#define SLEW_CONTROL_TURN_OFF_TIME(N) ((N&0x0F)<<TFS)
#define SLEW_CONTROL_TURN_ON_TIME(N) ((N&0x0F)<<TRS)

//CURRENT_LIMIT constants
#define SCALE(N) ((N&0x0F)<<VIL)
#define BLANK_TIME(N) ((N&0x1F)<<TFS)

//VDS_MONITOR0 constants
#define OVERVOLTAGE_THRESHOLD(N) ((N&0x3F)<<VT)
#define SENSE_AMP_MAX_THRESHOLD_200MV 0
#define SENSE_AMP_MAX_THRESHOLD_100MV (1<<MIT0)
#define SENSE_AMP_MAX_THRESHOLD_50MV (1<<MIT1)
#define SENSE_AMP_MAX_THRESHOLD_25MV ((1<<MIT0)|(1<<MIT1))

//VDS_MONITOR1 constants
#define QUALITY_TIME(N) ((N&0x3F)<<VQT)
#define FAULT_QUALIFIER_DEBOUNCE 0
#define FAULT_QUALIFIER_BLANK (1<<VDQ)

//WATCHDOG_CONFIG0 constants
#define MIN_TIME(N) ((N&0x1F)<<WM)

//WATCHDOG_CONFIG1 constants
#define WINDOW_TIME(N) ((N&0x1F)<<WW)
#define FAIL_CYCLE_COUNT_BEFORE_SLEEP(N) ((N&0x0F)<<WC)

//COMMUTATION0 constants
#define SS_COMMU_CONTROLLER_I_GAIN(N) ((N&0x0F)<<CI)
#define SS_COMMU_CONTROLLER_P_GAIN(N) ((N&0x0F)<<CP)

//COMMUTATION1 constants
#define TRANSIENT_COMMU_CONTROLLER_P_GAIN(N) ((N&0x0F)<<CPT)
#define TRANSIENT_COMMU_CONTROLLER_I_GAIN(N) ((N&0x0F)<<CIT)

//BEMF_CONFIG0 constants
#define DETECTION_WINDOW(N) ((N&0x1F)<<BW)

//BEMF_CONFIG1 constants
#define WINDMILL_BEMF_FILTER_TIME(N) ((N&0x0F)<<BF)
#define BEMF_SAMPLING_1 0
#define BEMF_SAMPLING_2 (1<<BS0)
#define BEMF_SAMPLING_3 (1<<BS1)
#define BEMF_SAMPLING_6 ((1<<BS0)|(1<<BS1))

//STARTUP_CONFIG0 constants
#define PEAK_PWM_DUTY_DURING_ALLIGNMENT(N) ((N&0x1F)<<HD)
#define ALIGNMENT_TIME(N) ((N&0x0F)<<HT)

//STARTUP_CONFIG1 constants
#define ALIGNMENT_DUTY_CYCLE_RAMP_TIME_0 0
#define ALIGNMENT_DUTY_CYCLE_RAMP_TIME_25 (1<<HR0)
#define ALIGNMENT_DUTY_CYCLE_RAMP_TIME_50 (1<<HR1)
#define ALIGNMENT_DUTY_CYCLE_RAMP_TIME_100 ((1<<HR0)|(1<<HR1))
#define MOTOR_CONSTANT_RATIO_OF_SPEED_BEMF(N) ((N&0x0F)<<KM)
#define NO_RESTART 0
#define RESTART_CONTROL (1<<RSC)
#define START_COAST_MODE_DISABLED 0
#define START_COAST_MODE_ENABLED (1<<STM)

//STARTUP_CONFIG2 constants
#define DUTY_CYCLE_DURING_WINDMILL_BRAKING(N) ((N&0x0F)<<WBD)
#define MIN_WINDMILL_DETECTION_FREQ(N) ((N&0x07)<<WMF)
#define WINDMILL_MODE_SELECT_DISABLED 0
#define WINDMILL_MODE_SELECT_ENABLED (1<<WIN)

//STARTUP_CONFIG3 constants
#define START_RAMP_INITIAL_FREQ(N) ((N&0x0F)<<SF1)
#define START_RAMP_FINAL_FREQ(N) ((N&0x0F)<<SF2)

//STARTUP_CONFIG4 constants
#define START_RAMP_INITIAL_DUTY_CYCLE(N) ((N&0x0F)<<SD1)
#define START_RAMP_FINAL_DUTY_CYCLE(N) ((N&0x0F)<<SD2)

//STARTUP_CONFIG5 constants
#define START_RAMP_FREQ_STEP(N) ((N&0x0F)<<SFS)
#define START_RAMP_STEP_TIME(N) ((N&0x0F)<<STS)

//SPEED_LOOP0 constants
#define CONTROL_ACCELERATION_LIMIT(N) ((N&0x1F)<<SGL)
#define CONTROL_GAIN(N) ((N&0x0F)<<SG)

//SPEED_LOOP1 constants
#define SPEED_CONTROL_RESOLUTION(N) ((N&0x07)<<SR)
#define DECELERATION_FACTOR_1 0
#define DECELERATION_FACTOR_2 (1<<DF0)
#define DECELERATION_FACTOR_5 (1<<DF1)
#define DECELERATION_FACTOR_10 ((1<<DF0)|(1<<DF1))
#define DUTY_CYCLE_COMPENSATION_DIS 0
#define DUTY_CYCLE_COMPENSATION_12V (1<<DV0)
#define DUTY_CYCLE_COMPENSATION_24V (1<<DV1)

//SPEED_LOOP2 constants
#define UNDERSPEED_HIGH_SPEED_THRESHOLD(N) ((N&0x0F)<<SH)
#define UNDERSPEED_LOW_SPEED_THRESHOLD(N) ((N&0x0F)<<SL)

//NVM_WRITE constants //when to save, it is used. Default 01
#define SAVE_PARAM_TO_MEMORY_RESET 0
#define SAVE_PARAM_TO_MEMORY_EN (1<<SAV1)

//SYSTEM constants
#define CLOSED_LOOP_SPEED 0
#define CLOSED_LOOP_CURRENT (1<<CM1)
#define OPEN_LOOP_SPEED ((1<<CM0)|(1<<CM1))
#define ENABLE_CURRENT_LIMIT 0
#define DISABLE_CURRENT_LIMIT (1<<DIL)
#define PWM_SENSE_TRUE_ACTIVE_HIGH 0
#define PWM_SENSE_INVERTED_ACTIVE_LOW (1<<IPI)
#define PWM_WAKE_MODE 0
#define LIN_WAKE_MODE (1<<LWK)
#define OPERATING_MODE_SPI_ONLY 0
#define OPERATING_MODE_STAND_ALONE_WITH_SPI (1<<OPM)
#define GATE_DRIVE_REG_VOLTAGE_8V 0
#define GATE_DRIVE_REG_VOLTAGE_11V (1<<VRG)
#define LOGIC_REG_VOLTAGE_3V3 0
#define LOGIC_REG_VOLTAGE_5V  (1<<VLR)
#define NO_STOP_ON_FAIL 0
#define STOP_ON_FAIL (1<<ESF)

//PHASE_ADVANCE constants
#define PHASE_ADVANCE_MANUAL 0
#define PHASE_ADVANCE_AUTO  (1<<PAM)
#define AUTO_PHASE_ADC_CONTROL_GAIN_1 0
#define AUTO_PHASE_ADC_CONTROL_GAIN_2 (1<<KIP0)
#define AUTO_PHASE_ADC_CONTROL_GAIN_4 (1<<KIP1)
#define AUTO_PHASE_ADC_CONTROL_GAIN_8 ((1<<KIP0)|(1<<KIP1))
#define PHASE_ADVANCE_SET(N) ((N&0x3F)<<PA)

//MOTOR_FUNCTION constants
#define LIN_STANDBY 0
#define LIN_ACTIVE (1<<LEN)
#define GO_TO_SLEEP (1<<GTS)
#define OVERMODULATION_100 0
#define OVERMODULATION_112_5 (1<<OVM0)
#define OVERMODULATION_125 (1<<OVM1)
#define OVERMODULATION_150 ((1<<OVM0)|(1<<OVM1))
#define DRIVE_SINUSOIDAL 0
#define DRIVE_TRAPEZOIDAL (1<<DRM)
#define BRAKE_DISABLED 0
#define BRAKE_ENABLE (1<<BRK)
#define FORWARD_DIRECTION 0
#define REVERSE_DIRECTION (1<<DIR)
#define RUN_ENABLE (1<<RUN)
#define RUN_DISABLE 0

//MASK constants
#define FAULT_DETECTION_DISABLED_VDS_OVERVOLTAGE (1<<VO)
#define FAULT_DETECTION_DISABLED_BOOTSTRAP_UNDERVOLTAGE (1<<BU)
#define FAULT_DETECTION_DISABLED_VLR_UNDERVOLTAGE (1<<VLU)
#define FAULT_DETECTION_DISABLED_VREG_UNDERVOLTAGE (1<<VRU)
#define FAULT_DETECTION_DISABLED_VBB_UNDERVOLTAGE (1<<VSU)
#define FAULT_DETECTION_DISABLED_TEMPERATURE_WARNING (1<<TW)
#define FAULT_DETECTION_DISABLED_OVERTEMPERATURE (1<<OT)
#define FAULT_DETECTION_DISABLED_LOSS_BEMF_SYNC (1<<LOS)
#define FAULT_DETECTION_DISABLED_WATCHDOG (1<<WD)

//READBACK_SELECT constants
#define DIAG_OUTPUT_ACTIVE_LOW 0
#define DIAG_OUTPUT_HIGH_MOTOR_STATIONARY (1<<DGS0)
#define DIAG_OUTPUT_PULSE_HIGH_NO_FAULT_PRESENT (1<<DGS1)
#define DIAG_OUTPUT_PULSE_FG_NO_FAULT_PRESENT ((1<<DGS0)|(1<<DGS1))
#define RESET_ON_SERIAL_READ_ENABLED 0
#define RESET_ON_SERIAL_READ_DISABLED (1<<DSR)
#define LIN_BAUD_RATE_10KHZ 0
#define LIN_BAUD_RATE_20KHZ (1<<LBR)
#define SDO_OUTPUT_HIGH_IMPEDANCE 0
#define SDO_OUTPUT_DIVIDED_SYSTEM_CLOCK (1<<CKS)
#define DATA_OUTPUT_DIAGNOSTIC_REG 0
#define DATA_OUTPUT_MOTOR_SPEED (1<<RBS0)
#define DATA_OUTPUT_AVERAGE_SUPPLY_CURRENT (1<<RBS1)
#define DATA_OUTPUT_SUPPLY_VOLTAGE ((1<<RBS0)|(1<<RBS1))
#define DATA_OUTPUT_CHIP_TEMPERATURE (1<<RBS2)
#define DATA_OUTPUT_DEMAND_INPUT ((1<<RBS0)|(1<<RBS2))
#define DATA_OUTPUT_APPLIED_BRIDGE_PEAK_DUTY_CYCLE ((1<<RBS1)|(1<<RBS2))
#define DATA_OUTPUT_APPLIED_PHASE_ADVANCE ((1<<RBS0)|(1<<RBS1)|(1<<RBS2))

#endif
