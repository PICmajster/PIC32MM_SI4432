/*
    File Name:        :  si4432.h
    Device            :  PIC32MM0256GPM048
    Compiler          :  XC32 2.05
    MPLAB             :  MPLAB X 4.15
    Created by        :  http://strefapic.blogspot.com
*/
#ifndef SI4432_H
#define SI4432_H

 #define SI4432_nSEL             PORTCbits.RC6
 //SI4432_nIRQ   ---->      RB9
 //SI4432_nSEL   ---->      RC6
 //SI4432_SCK    ---->      RB8
 //SI4432_SDO    ---->      RA9
 //SI4432_SDI    ---->      RB3

#define SI4432_WRITE_MASK                               0x80

#define SI4432_REG_00_DEVICE_TYPE                       0x00
#define SI4432_REG_01_VERSION_CODE                      0x01
#define SI4432_REG_02_DEVICE_STATUS                     0x02
#define SI4432_REG_03_INTERRUPT_STATUS1                 0x03
#define SI4432_REG_04_INTERRUPT_STATUS2                 0x04
#define SI4432_REG_05_INTERRUPT_ENABLE1                 0x05
#define SI4432_REG_06_INTERRUPT_ENABLE2                 0x06
#define SI4432_REG_07_OPERATING_MODE1                   0x07
#define SI4432_REG_08_OPERATING_MODE2                   0x08
#define SI4432_REG_09_OSCILLATOR_LOAD_CAPACITANCE       0x09
#define SI4432_REG_0A_UC_OUTPUT_CLOCK                   0x0a
#define SI4432_REG_0B_GPIO_CONFIGURATION0               0x0b
#define SI4432_REG_0C_GPIO_CONFIGURATION1               0x0c
#define SI4432_REG_0D_GPIO_CONFIGURATION2               0x0d
#define SI4432_REG_0E_IO_PORT_CONFIGURATION             0x0e
#define SI4432_REG_0F_ADC_CONFIGURATION                 0x0f

#define SI4432_REG_10_ADC_SENSOR_AMP_OFFSET             0x10
#define SI4432_REG_11_ADC_VALUE                         0x11
#define SI4432_REG_12_TEMPERATURE_SENSOR_CALIBRATION	0x12
#define SI4432_REG_13_TEMPERATURE_VALUE_OFFSET			0x13
#define SI4432_REG_14_WAKEUP_TIMER_PERIOD1              0x14
#define SI4432_REG_15_WAKEUP_TIMER_PERIOD2              0x15
#define SI4432_REG_16_WAKEUP_TIMER_PERIOD3              0x16
#define SI4432_REG_17_WAKEUP_TIMER_VALUE1               0x17
#define SI4432_REG_18_WAKEUP_TIMER_VALUE2               0x18
#define SI4432_REG_19_LDC_MODE_DURATION                 0x19
#define SI4432_REG_1A_LOW_BATTERY_DETECTOR_THRESHOLD	0x1a
#define SI4432_REG_1B_BATTERY_VOLTAGE_LEVEL             0x1b
#define SI4432_REG_1C_IF_FILTER_BANDWIDTH               0x1c
#define SI4432_REG_1D_AFC_LOOP_GEARSHIFT_OVERRIDE		0x1d
#define SI4432_REG_1E_AFC_TIMING_CONTROL                0x1e
#define SI4432_REG_1F_CLOCK_RECOVERY_GEARSHIFT_OVERRIDE	0x1f

#define SI4432_REG_20_CLOCK_RECOVERY_OVERSAMPLING_RATE	0x20
#define SI4432_REG_21_CLOCK_RECOVERY_OFFSET2			0x21
#define SI4432_REG_22_CLOCK_RECOVERY_OFFSET1			0x22
#define SI4432_REG_23_CLOCK_RECOVERY_OFFSET0			0x23
#define SI4432_REG_24_CLOCK_RECOVERY_TIMING_LOOP_GAIN1	0x24
#define SI4432_REG_25_CLOCK_RECOVERY_TIMING_LOOP_GAIN0	0x25
#define SI4432_REG_26_RSSI                              0x26
#define SI4432_REG_27_RSSI_THRESHOLD                    0x27
#define SI4432_REG_28_ANTENNA_DIVERSITY1                0x28
#define SI4432_REG_29_ANTENNA_DIVERSITY2                0x29
#define SI4432_REG_2A_AFC_LIMITER                       0x2a
#define SI4432_REG_2B_AFC_CORRECTION_READ               0x2b
#define SI4432_REG_2C_OOK_COUNTER_VALUE_1               0x2c
#define SI4432_REG_2D_OOK_COUNTER_VALUE_2               0x2d
#define SI4432_REG_2E_SLICER_PEAK_HOLD                  0x2e

#define SI4432_REG_30_DATA_ACCESS_CONTROL               0x30
#define SI4432_REG_31_EZMAC_STATUS                      0x31
#define SI4432_REG_32_HEADER_CONTROL1                   0x32
#define SI4432_REG_33_HEADER_CONTROL2                   0x33
#define SI4432_REG_34_PREAMBLE_LENGTH                   0x34
#define SI4432_REG_35_PREAMBLE_DETECTION_CONTROL		0x35
#define SI4432_REG_36_SYNC_WORD3                        0x36
#define SI4432_REG_37_SYNC_WORD2                        0x37
#define SI4432_REG_38_SYNC_WORD1                        0x38
#define SI4432_REG_39_SYNC_WORD0                        0x39
#define SI4432_REG_3A_TRANSMIT_HEADER3                  0x3a
#define SI4432_REG_3B_TRANSMIT_HEADER2                  0x3b
#define SI4432_REG_3C_TRANSMIT_HEADER1                  0x3c
#define SI4432_REG_3D_TRANSMIT_HEADER0                  0x3d
#define SI4432_REG_3E_PACKET_LENGTH                     0x3e
#define SI4432_REG_3F_CHECK_HEADER3                     0x3f

#define SI4432_REG_40_CHECK_HEADER2                     0x40
#define SI4432_REG_41_CHECK_HEADER1                     0x41
#define SI4432_REG_42_CHECK_HEADER0                     0x42
#define SI4432_REG_43_HEADER_ENABLE3                    0x43
#define SI4432_REG_44_HEADER_ENABLE2                    0x44
#define SI4432_REG_45_HEADER_ENABLE1                    0x45
#define SI4432_REG_46_HEADER_ENABLE0                    0x46
#define SI4432_REG_47_RECEIVED_HEADER3                  0x47
#define SI4432_REG_48_RECEIVED_HEADER2                  0x48
#define SI4432_REG_49_RECEIVED_HEADER1                  0x49
#define SI4432_REG_4A_RECEIVED_HEADER0                  0x4a
#define SI4432_REG_4B_RECEIVED_PACKET_LENGTH			0x4b

#define SI4432_REG_50_ANALOG_TEST_BUS_SELECT			0x50
#define SI4432_REG_51_DIGITAL_TEST_BUS_SELECT			0x51
#define SI4432_REG_52_TX_RAMP_CONTROL                   0x52
#define SI4432_REG_53_PLL_TUNE_TIME                     0x53
#define SI4432_REG_55_CALIBRATION_CONTROL               0x55
#define SI4432_REG_56_MODEM_TEST                        0x56
#define SI4432_REG_57_CHARGE_PUMP_TEST                  0x57
#define SI4432_REG_58_CHARGE_PUMP_CURRENT_TRIMMING		0x58
#define SI4432_REG_59_DIVIDER_CURRENT_TRIMMING			0x59
#define SI4432_REG_5A_VCO_CURRENT_TRIMMING              0x5a
#define SI4432_REG_5B_VCO_CALIBRATION                   0x5b
#define SI4432_REG_5C_SYNTHESIZER_TEST                  0x5c
#define SI4432_REG_5D_BLOCK_ENABLE_OVERRIDE1			0x5d
#define SI4432_REG_5E_BLOCK_ENABLE_OVERRIDE2			0x5e
#define SI4432_REG_5F_BLOCK_ENABLE_OVERRIDE3			0x5f

#define SI4432_REG_60_CHANNEL_FILTER_COEFFICIENT_ADDRESS	0x60
#define SI4432_REG_61_CHANNEL_FILTER_COEFFICIENT_VALUE		0x61
#define SI4432_REG_62_CRYSTAL_OSCILLATOR_POR_CONTROL		0x62
#define SI4432_REG_63_RC_OSCILLATOR_COARSE_CALIBRATION		0x63
#define SI4432_REG_64_RC_OSCILLATOR_FINE_CALIBRATION		0x64
#define SI4432_REG_65_LDO_CONTROL_OVERRIDE                  0x65
#define SI4432_REG_66_LDO_LEVEL_SETTINGS                    0x66
#define SI4432_REG_67_DELTA_SIGMA_ADC_TUNING1               0x67
#define SI4432_REG_68_DELTA_SIGMA_ADC_TUNING2               0x68
#define SI4432_REG_69_AGC_OVERRIDE1                         0x69
#define SI4432_REG_6A_AGC_OVERRIDE2                         0x6a
#define SI4432_REG_6B_GFSK_FIR_FILTER_COEFFICIENT_ADDRESS	0x6b
#define SI4432_REG_6C_GFSK_FIR_FILTER_COEFFICIENT_VALUE		0x6c
#define SI4432_REG_6D_TX_POWER                              0x6d
#define SI4432_REG_6E_TX_DATA_RATE1                         0x6e
#define SI4432_REG_6F_TX_DATA_RATE0                         0x6f

#define SI4432_REG_70_MODULATION_CONTROL1                   0x70
#define SI4432_REG_71_MODULATION_CONTROL2                   0x71
#define SI4432_REG_72_FREQUENCY_DEVIATION                   0x72
#define SI4432_REG_73_FREQUENCY_OFFSET1                     0x73
#define SI4432_REG_74_FREQUENCY_OFFSET2                     0x74
#define SI4432_REG_75_FREQUENCY_BAND_SELECT                 0x75
#define SI4432_REG_76_NOMINAL_CARRIER_FREQUENCY1            0x76
#define SI4432_REG_77_NOMINAL_CARRIER_FREQUENCY0            0x77
#define SI4432_REG_79_FREQUENCY_HOPPING_CHANNEL_SELECT		0x79
#define SI4432_REG_7A_FREQUENCY_HOPPING_STEP_SIZE           0x7a
#define SI4432_REG_7C_TX_FIFO_CONTROL1                      0x7c
#define SI4432_REG_7D_TX_FIFO_CONTROL2                      0x7d
#define SI4432_REG_7E_RX_FIFO_CONTROL                       0x7e
#define SI4432_REG_7F_FIFO_ACCESS                           0x7f


// Flags
// SI4432_REG_02_DEVICE_STATUS
#define SI4432_FFOVFL		0x80
#define SI4432_FFUNFL		0x40
#define SI4432_RXFFEM		0x20
#define SI4432_HEADERR		0x10
#define SI4432_CPS_TX		0x02
#define SI4432_CPS_RX		0x01
#define SI4432_CPS_IDLE		0x00

// SI4432_REG_03_INTERRUPT_STATUS1
#define SI4432_IFFERR		0x80
#define SI4432_ITXFFAFULL	0x40
#define SI4432_ITXFFAEM		0x20
#define SI4432_IRXFFAFULL	0x10
#define SI4432_IEXT         0x08
#define SI4432_IPKSENT		0x04
#define SI4432_IPKVALID		0x02
#define SI4432_ICRCERROR	0x01

// SI4432_REG_04_INTERRUPT_STATUS2
#define SI4432_ISWDET		0x80
#define SI4432_IPREAVAL		0x40
#define SI4432_IPREAINVAL	0x20
#define SI4432_IRSSI		0x10
#define SI4432_IWUT		    0x08
#define SI4432_ILBD         0x04
#define SI4432_ICHIPRDY		0x02
#define SI4432_IPOR         0x01

// SI4432_REG_05_INTERRUPT_ENABLE1
#define SI4432_ENFFERR		0x80
#define SI4432_ENTXFFAFULL	0x40
#define SI4432_ENTXFFAEM	0x20
#define SI4432_ENRXFFAFULL	0x10
#define SI4432_ENEXT		0x08
#define SI4432_ENPKSENT		0x04
#define SI4432_ENPKVALID	0x02
#define SI4432_ENCRCERROR	0x01

// SI4432_REG_06_INTERRUPT_ENABLE2
#define SI4432_ENSWDET		0x80
#define SI4432_ENPREAVAL	0x40
#define SI4432_ENPREAINVAL	0x20
#define SI4432_ENRSSI		0x10
#define SI4432_ENWUT		0x08
#define SI4432_ENLBDINT		0x04
#define SI4432_ENCHIPRDY	0x02
#define SI4432_ENPOR		0x01

// SI4432_REG_07_OPERATING_MODE1
#define SI4432_SWRES		0x80
#define SI4432_ENLBD		0x40
#define SI4432_ENWT         0x20
#define SI4432_X32KSEL		0x10
#define SI4432_TXON         0x08
#define SI4432_RXON         0x04
#define SI4432_PLLON		0x02
#define SI4432_XTON         0x01

// SI4432_REG_08_OPERATING_MODE2
#define SI4432_ANTDIV		0xE0
#define SI4432_RXMPK		0x10
#define SI4432_AUTOTX		0x08
#define SI4432_ENLDM		0x04
#define SI4432_FFCLRRX		0x02
#define SI4432_FFCLRTX		0x01

// SI4432_REG_09_OSCILLATOR_LOAD_CAPACITANCE
#define SI4432_XTALSHIFT	0x80
#define SI4432_XLC          0x7F

// SI4432_REG_0A_UC_OUTPUT_CLOCK
#define SI4432_CLKT         0x30
#define SI4432_ENLFC		0x08
#define SI4432_MCLK         0x07

// SI4432_REG_6D_TX_POWER
// SI4432B values
#define SI4432_TX_POWER_1DBM	0x00
#define SI4432_TX_POWER_2DBM	0x01
#define SI4432_TX_POWER_5DBM	0x02
#define SI4432_TX_POWER_8DBM	0x03
#define SI4432_TX_POWER_11DBM	0x04
#define SI4432_TX_POWER_14DBM	0x05
#define SI4432_TX_POWER_17DBM	0x06
#define SI4432_TX_POWER_20DBM	0x07


typedef struct {
	uint8_t regs[3];
} SI4432CarrierFreqConfig;

// preconfigured carrier frequencies
typedef enum {
	SI4432_Frequency434MHz = 0,
	SI4432_Frequency868MHz,
	SI4432_Frequency915MHz
} SI4432CarrierFreqEnum;


typedef enum {
	SI4432_ModeIdle = 0,
	SI4432_ModeStandby,
	SI4432_ModeSleep,
	SI4432_ModeTune,
	SI4432_ModeTx,
	SI4432_ModeRx
} SI4432ModeEnum;

extern void SI4432_Initialize (void);
extern void SI4432_ResetTxFifo(void);
extern void SI4432_ResetRxFifo(void);
/*

extern void SI4432_SetMode(SI4432Device *device, SI4432ModeEnum mode);
extern void SI4432_SetModemConfig(SI4432Device *device, SI4432ModemConfigEnum config);
extern uint8_t SI4432_ReadStatus(SI4432Device *device);
extern uint8_t SI4432_ReadRssi(SI4432Device *device);
extern void SI4432_ResetRxFifo(SI4432Device *device);
extern void SI4432_HandleInterrupts(void);
*/
#endif /* SI4432_H */