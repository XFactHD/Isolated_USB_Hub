#ifndef DEFINES_H
#define DEFINES_H

//Register defines
#define REG_VID_LSB       0x00
#define REG_VID_MSB       0x01
#define REG_PID_LSB       0x02
#define REG_PID_MSB       0x03
#define REG_DID_LSB       0x04
#define REG_DID_MSG       0x05
#define REG_CFG_1         0x06
#define REG_CFG_2         0x07
#define REG_CFG_3         0x08
#define REG_NR_DEVICE     0x09
#define REG_PORT_DIS_SP   0x0A
#define REG_PORT_DIS_BP   0x0B
#define REG_MAX_PWR_SP    0x0C
#define REG_MAX_PWR_BP    0x0D
#define REG_HC_MAX_I_SP   0x0E
#define REG_HC_MAX_I_BP   0x0F
#define REG_PWR_ON_TIME   0x10
#define REG_LANG_ID_H     0x11
#define REG_LANG_ID_L     0x12
#define REG_MANUF_STR_LEN 0x13
#define REG_PROD_STR_LEN  0x14
#define REG_SER_STR_LEN   0x15
#define REG_MANUF_STR     0x16
#define REG_PROD_STR      0x54
#define REG_SERIAL_STR    0x92
#define REG_BC_EN         0xD0
#define REG_BOOST_US      0xF6
#define REG_BOOST_DS      0xF8
#define REG_PORT_SWAP     0xFA
#define REG_PORT_MAP_12   0xFB
#define REG_PORT_MAP_34   0xFC


//Register bit defines
#define CFG1_SELF_BUS_PWR   0x80
#define CFG1_HS_DISABLE     0x20
#define CFG1_MTT_EN         0x10
#define CFG1_EOP_DISABLE    0x08
#define CFG1_ISENSE_NONE    0x04
#define CFG1_ISENSE_INDIV   0x02
#define CFG1_PWR_SW_INDIV   0x01

#define CFG2_DYN_PWR_SW     0x80
#define CFG2_OC_TIME_4MS    0x10
#define CFG2_OC_TIME_8MS    0x20
#define CFG2_OC_TIME_16MS   0x30
#define CFG2_COMPOUND       0x08

#define CFG3_PRTMAP_EN      0x08
#define CFG3_STRING_EN      0x01

#define NR_DEVICE_P4        0x10
#define NR_DEVICE_P3        0x08
#define NR_DEVICE_P2        0x04
#define NR_DEVICE_P1        0x02

#define PORT_DIS_SP_P4      0x10
#define PORT_DIS_SP_P3      0x08
#define PORT_DIS_SP_P2      0x04
#define PORT_DIS_SP_P1      0x02

#define PORT_DIS_BP_P4      0x10
#define PORT_DIS_BP_P3      0x08
#define PORT_DIS_BP_P2      0x04
#define PORT_DIS_BP_P1      0x02

#define BC_EN_P4            0x10
#define BC_EN_P3            0x08
#define BC_EN_P2            0x04
#define BC_EN_P1            0x02

#define BOOST_US_HIGH       0x03
#define BOOST_US_MEDIUM     0x02
#define BOOST_US_LOW        0x01

#define BOOST_DS_P4_HIGH    0xC0
#define BOOST_DS_P4_MEDIUM  0x80
#define BOOST_DS_P4_LOW     0x40
#define BOOST_DS_P3_HIGH    0x30
#define BOOST_DS_P3_MEDIUM  0x20
#define BOOST_DS_P3_LOW     0x10
#define BOOST_DS_P2_HIGH    0x0C
#define BOOST_DS_P2_MEDIUM  0x08
#define BOOST_DS_P2_LOW     0x04
#define BOOST_DS_P1_HIGH    0x03
#define BOOST_DS_P1_MEDIUM  0x02
#define BOOST_DS_P1_LOW     0x01

#define PORT_SWAP_DS_P4     0x10
#define PORT_SWAP_DS_P3     0x08
#define PORT_SWAP_DS_P2     0x04
#define PORT_SWAP_DS_P1     0x02
#define PORT_SWAP_US        0x01

#define PORT_MAP_12_P2L4    0x40
#define PORT_MAP_12_P2L3    0x30
#define PORT_MAP_12_P2L2    0x20
#define PORT_MAP_12_P2L1    0x10
#define PORT_MAP_12_P1L4    0x04
#define PORT_MAP_12_P1L3    0x03
#define PORT_MAP_12_P1L2    0x02
#define PORT_MAP_12_P1L1    0x01

#define PORT_MAP_34_P4L4    0x40
#define PORT_MAP_34_P4L3    0x30
#define PORT_MAP_34_P4L2    0x20
#define PORT_MAP_34_P4L1    0x10
#define PORT_MAP_34_P3L4    0x04
#define PORT_MAP_34_P3L3    0x03
#define PORT_MAP_34_P3L2    0x02
#define PORT_MAP_34_P3L1    0x01


//Pin defines
#define PIN_HUB_RESET 6
#define PIN_EEPROM_WP 5

#endif