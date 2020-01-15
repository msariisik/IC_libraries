/*
 * ACS71020 Library
 * Meric SARIISIK
 * 12/2018
 */

/*
EEPROM
-At power up all shadow registers are loaded from EEPROM including
all configuration parameters.
-The shadow registers can be written to in order to change the device
behavior without having to perform an EEPROM write.
-Any changes made it shadow memory are volatile and do not persist
through a reset event.
*/

//high state indicates a Read and a low state indicates a Write
#ifndef __ACS71020_H__
#define __ACS71020_H__

//EEPROM and Shadow coding are different considering error checking when reading
#define ACS71020_EEPROM_1         0X0B
#define ACS71020_SHADOW_1         0X1B
#define ACS71020_EEPROM_2         0X0C
#define ACS71020_SHADOW_2         0X1C
#define ACS71020_EEPROM_3         0X0D
#define ACS71020_SHADOW_3         0X1D
#define ACS71020_EEPROM_4         0X0E
#define ACS71020_SHADOW_4         0X1E
#define ACS71020_EEPROM_5         0X0F
#define ACS71020_SHADOW_5         0X1F

#define ACS71020_VOLATILE_1       0X20
#define ACS71020_VOLATILE_2       0X84//0x21
#define ACS71020_VOLATILE_3       0X22
#define ACS71020_VOLATILE_4       0X23
#define ACS71020_VOLATILE_5       0X24
#define ACS71020_VOLATILE_6       0X25
#define ACS71020_VOLATILE_7       0X26
#define ACS71020_VOLATILE_8       0X27
#define ACS71020_VOLATILE_9       0X28
#define ACS71020_VOLATILE_10      0X29
#define ACS71020_VOLATILE_11      0X2A
#define ACS71020_VOLATILE_12      0X2B
#define ACS71020_VOLATILE_13      0X2C
#define ACS71020_VOLATILE_14      0X2D
#define ACS71020_VOLATILE_15      0X2F
#define ACS71020_VOLATILE_16      0X30

#endif
