/******************************************************************************************
* SENSEL CONFIDENTIAL
*
* Copyright 2013-2017 Sensel, Inc
* All Rights Reserved.
*
* NOTICE:  All information contained herein is, and remains the property of Sensel, Inc.
* The intellectual and technical concepts contained herein are proprietary to Sensel, Inc.
* and may be covered by U.S. and Foreign Patents, patents in process, and are protected
* by trade secret or copyright law. Dissemination of this information or reproduction of
* this material is strictly forbidden unless prior written permission is obtained from
* Sensel, Inc.
******************************************************************************************/

#ifndef SENSEL_REGISTER_MAP_H
#define SENSEL_REGISTER_MAP_H

// WARNING:
// Please do not edit this file directly....
// A script was used to generate this file on 01/29/2017 (09:32:33)

#define SENSEL_REG_MAP_PROTOCOL_VERSION 1
#define SENSEL_REG_MAP_MAJOR_VERSION 0
#define SENSEL_REG_MAP_MINOR_VERSION 5
#define SENSEL_REG_MAP_BUILD_VERSION 6

#define SENSEL_REG_MAGIC                                    0x00
#define SENSEL_REG_FW_VERSION_PROTOCOL                      0x06
#define SENSEL_REG_FW_VERSION_MAJOR                         0x07
#define SENSEL_REG_FW_VERSION_MINOR                         0x08
#define SENSEL_REG_FW_VERSION_BUILD                         0x09
#define SENSEL_REG_FW_VERSION_RELEASE                       0x0B
#define SENSEL_REG_DEVICE_ID                                0x0C
#define SENSEL_REG_DEVICE_REVISION                          0x0E
#define SENSEL_REG_DEVICE_SERIAL_NUMBER                     0x0F
#define SENSEL_REG_SENSOR_NUM_COLS                          0x10
#define SENSEL_REG_SENSOR_NUM_ROWS                          0x12
#define SENSEL_REG_SENSOR_ACTIVE_AREA_WIDTH_UM              0x14
#define SENSEL_REG_SENSOR_ACTIVE_AREA_HEIGHT_UM             0x18
#define SENSEL_REG_COMPRESSION_METADATA                     0x1C
#define SENSEL_REG_SCAN_FRAME_RATE                          0x20
#define SENSEL_REG_SCAN_BUFFER_CONTROL                      0x22
#define SENSEL_REG_SCAN_RESOLUTION_CONTROL                  0x23
#define SENSEL_REG_SCAN_CONTENT_CONTROL                     0x24
#define SENSEL_REG_SCAN_ENABLED                             0x25
#define SENSEL_REG_SCAN_READ_FRAME                          0x26
#define SENSEL_REG_SCAN_DYNAMIC                             0x27
#define SENSEL_REG_PRESSURE_MAP_MAX_VALUE                   0x30
#define SENSEL_REG_PRESSURE_MAP_COMPRESSION_THRESHOLD       0x32
#define SENSEL_REG_PRESSURE_MAP_CALIBRATED                  0x33
#define SENSEL_REG_CONTACTS_MAX_COUNT                       0x40
#define SENSEL_REG_CONTACTS_ENABLE_BLOB_MERGE               0x41
#define SENSEL_REG_CONTACTS_AREA_THRESHOLD                  0x42
#define SENSEL_REG_CONTACTS_MIN_PEAK                        0x43
#define SENSEL_REG_CONTACTS_MIN_VALUE                       0x45
#define SENSEL_REG_CONTACTS_MIN_FORCE                       0x47
#define SENSEL_REG_CONTACTS_MAX_MOVE_DIST                   0x49
#define SENSEL_REG_CONTACTS_MASK                            0x4B
#define SENSEL_REG_BASELINE_ENABLED                         0x50
#define SENSEL_REG_BASELINE_INCREASE_RATE                   0x51
#define SENSEL_REG_BASELINE_DECREASE_RATE                   0x53
#define SENSEL_REG_CONTACTS_DEBOUNCE_PERCENT                0x55
#define SENSEL_REG_BIAS_SUBTRACT_ENABLED                    0x56
#define SENSEL_REG_ACCEL_X                                  0x60
#define SENSEL_REG_ACCEL_Y                                  0x62
#define SENSEL_REG_ACCEL_Z                                  0x64
#define SENSEL_REG_SPEAKER_TRIGGER                          0x66
#define SENSEL_REG_SPEAKER_EFFECT                           0x67
#define SENSEL_REG_HAPTICS_TRIGGER                          0x68
#define SENSEL_REG_HAPTICS_EFFECT_DOWN                      0x69
#define SENSEL_REG_HAPTICS_EFFECT_UP                        0x6A
#define SENSEL_REG_BATTERY_STATUS                           0x70
#define SENSEL_REG_BATTERY_PERCENTAGE                       0x71
#define SENSEL_REG_POWER_BUTTON_PRESSED                     0x72
#define SENSEL_REG_LED_BRIGHTNESS                           0x80
#define SENSEL_REG_UNIT_SHIFT_DIMS                          0xA0
#define SENSEL_REG_UNIT_SHIFT_FORCE                         0xA1
#define SENSEL_REG_UNIT_SHIFT_AREA                          0xA2
#define SENSEL_REG_UNIT_SHIFT_ANGLE                         0xA3
#define SENSEL_REG_UNIT_SHIFT_TIME                          0xA4
#define SENSEL_REG_BLE_VERSION_MAJOR                        0xB0
#define SENSEL_REG_BLE_VERSION_MINOR                        0xB1
#define SENSEL_REG_BLE_EVENT                                0xB2
#define SENSEL_REG_BLE_PAIR                                 0xB3
#define SENSEL_REG_BLE_RESET                                0xB4
#define SENSEL_REG_BLE_DFU                                  0xB5
#define SENSEL_REG_BLE_FIRMWARE                             0xB6
#define SENSEL_REG_BLE_ACTIVATE_FIRMWARE                    0xB7
#define SENSEL_REG_BLE_DEBUG                                0xB8
#define SENSEL_REG_BLE_ADVERTISING_SERIAL                   0xB9
#define SENSEL_REG_FLASH_HEADER                             0xC0
#define SENSEL_REG_FLASH_CALIBRATION                        0xC1
#define SENSEL_REG_FLASH_FACTORY                            0xC2
#define SENSEL_REG_FLASH_STATS                              0xC3
#define SENSEL_REG_FLASH_APP                                0xC4
#define SENSEL_REG_FLASH_OVERLAYS                           0xC5
#define SENSEL_REG_FLASH_ERRORS                             0xC6
#define SENSEL_REG_FLASH_FACTORY_APP                        0xC7
#define SENSEL_REG_FLASH_APP_RESET                          0xC8
#define SENSEL_REG_FLASH_READ_PROTECT                       0xC9
#define SENSEL_REG_DEVICE_OPEN                              0xD0
#define SENSEL_REG_DEVICE_FW_MODE                           0xD1
#define SENSEL_REG_DEVICE_UID                               0xD2
#define SENSEL_REG_SOFT_RESET                               0xE0
#define SENSEL_REG_ERROR_CODE                               0xEC
#define SENSEL_REG_DFU_RESET                                0xED
#define SENSEL_REG_BATTERY_VOLTAGE_MV                       0xF0
#define SENSEL_REG_HALL_EFFECT_STATUS                       0xF2
#define SENSEL_REG_SPEAKER_TEST                             0xF4
#define SENSEL_REG_SELF_TEST_ROWS_FLOAT_MV                  0xF5
#define SENSEL_REG_SELF_TEST_ROWS_GROUND_MV                 0xF7
#define SENSEL_REG_SELF_TEST_COLS_FLOAT_MV                  0xF9
#define SENSEL_REG_SELF_TEST_COLS_GROUND_MV                 0xFB

#endif
