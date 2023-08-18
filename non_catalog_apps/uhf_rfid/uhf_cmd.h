// #ifndef UHF_CMD_H
// #define UHF_CMD_H

// #include <stdint.h>
// #include <stdlib.h>

// typedef struct UHF_RFID_CMD {
//     uint8_t* cmd;
//     size_t length;
// }UHF_RFID_CMD;

// typedef enum{
//     COMMAND_FRAME = 0x00,
//     RESPONSE_FRAME,
//     NOTIFICATION_FRAME
// }UHFFrameType;

// typedef enum{
//     RFU_BANK,
//     EPC_BANK,
//     TID_BANK,
//     USER_BANK
// }UHFBank;

// typedef enum{
//     CHINA_900MHZ = 1,
//     CHINA_800MHZ = 4,
//     US = 2,
//     EU = 3,
//     KOREA = 6
// }UHFWorkArea;

// #define DEFAULT_BAUD_RATE 115200
// #define FRAME_START 0xBB
// #define FRAME_END 0x7E
// #define ERROR 0x15

// UHF_RFID_CMD CMD_HARDWARE_VERSION = {.cmd = (uint8_t[]){0xBB, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_SOFTWARE_VERSION = {.cmd = (uint8_t[]){0xBB, 0x00, 0x03, 0x00, 0x01, 0x01, 0x05, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_MANUFACTURERS = {.cmd = (uint8_t[]){0xBB, 0x00, 0x03, 0x00, 0x01, 0x02, 0x06, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_SINGLE_POLLING = {.cmd = (uint8_t[]){0xBB, 0x00, 0x22, 0x00, 0x00, 0x22, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_MULTIPLE_POLLING = {.cmd = (uint8_t[]){0xBB, 0x00, 0x27, 0x00, 0x03, 0x22, 0x27, 0x10, 0x83, 0x7E}, .length = 10};

// UHF_RFID_CMD CMD_STOP_MULTIPLE_POLLING = {.cmd = (uint8_t[]){0xBB, 0x00, 0x28, 0x00, 0x00, 0x28, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_SET_SELECT_PARAMETER = {.cmd = (uint8_t[]){0xBB, 0x00, 0x0C, 0x00, 0x13, 0x01, 0x00, 0x00, 0x00, 0x20, 0x60, 0x00, 0x30, 0x75, 0x1F, 0xEB, 0x70, 0x5C, 0x59, 0x04, 0xE3, 0xD5, 0x0D, 0x70, 0xAD, 0x7E }, .length = 26};

// UHF_RFID_CMD CMD_GET_SELECT_PARAMETER = {.cmd = (uint8_t[]){0xBB, 0x00, 0x0B, 0x00, 0x00, 0x0B, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_SET_SELECT_MODE = {.cmd = (uint8_t[]){0xBB, 0x00, 0x12, 0x00, 0x01, 0x01, 0x14, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_READ_LABEL_DATA_STORAGE = {.cmd = (uint8_t[]){0xBB, 0x00, 0x39, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x4D, 0x7E}, .length = 16};

// UHF_RFID_CMD CMD_WRITE_LABEL_DATA_STORAGE = {.cmd = (uint8_t[]){0xBB, 0x00, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x71, 0x7E}, .length = 24};

// UHF_RFID_CMD CMD_LOCK_LABEL_DATA_STORAGE = {.cmd = (uint8_t[]){0xBB, 0x00, 0x82, 0x00, 0x07, 0x00, 0x00, 0xFF, 0xFF, 0x02, 0x00, 0x80, 0x09, 0x7E}, .length = 13};

// UHF_RFID_CMD CMD_INACTIVATE_KILL_TAG = {.cmd = (uint8_t[]){0xBB, 0x00, 0x65, 0x00, 0x04, 0x00, 0x00, 0xFF, 0xFF, 0x67, 0x7E}, .length = 11};

// UHF_RFID_CMD CMD_SET_COMMUNICATION_BAUD_RATE = {.cmd = (uint8_t[]){0xBB, 0x00, 0x11, 0x00, 0x02, 0x00, 0xC0, 0xD3, 0x7E}, .length = 9};

// UHF_RFID_CMD CMD_GET_QUERY_PARAMETERS = {.cmd = (uint8_t[]){0xBB, 0x00, 0x0D, 0x00, 0x00, 0x0D, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_SET_QUERY_PARAMETER = {.cmd = (uint8_t[]){0xBB, 0x00, 0x0E, 0x00, 0x02, 0x10, 0x20, 0x40, 0x7E}, .length = 9};

// UHF_RFID_CMD CMD_SETUP_WORK_AREA = {.cmd = (uint8_t[]){0xBB, 0x00, 0x07, 0x00, 0x01, 0x01, 0x09, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_ACQUIRE_WORK_LOCATIONS = {.cmd = (uint8_t[]){0xBB, 0x00, 0x08, 0x00, 0x00, 0x08, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_SETUP_WORKING_CHANNEL = {.cmd = (uint8_t[]){0xBB, 0x00, 0xAB, 0x00, 0x01, 0x01, 0xAC, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_GET_WORKING_CHANNEL = {.cmd = (uint8_t[]){0xBB, 0x00, 0xAA, 0x00, 0x00, 0xAA, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_SET_AUTO_FREQUENCY_HOPPING = {.cmd = (uint8_t[]){0xBB, 0x00, 0xAD, 0x00, 0x01, 0xFF, 0xAD, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_INSERT_WORKING_CHANNEL = {.cmd = (uint8_t[]){0xBB, 0x00, 0xA9, 0x00, 0x06, 0x05, 0x01, 0x02,0x03, 0x04, 0x05, 0xC3, 0x7E}, .length = 13};

// UHF_RFID_CMD CMD_ACQUIRE_TRANSMITTING_POWER = {.cmd = (uint8_t[]){0xBB, 0x00, 0xB7, 0x00, 0x00, 0xB7, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_SET_TRANSMITTING_POWER = {.cmd = (uint8_t[]){0xBB, 0x00, 0xB6, 0x00, 0x02, 0x07, 0xD0, 0x8F, 0x7E}, .length = 9};

// UHF_RFID_CMD CMD_SET_CONTINUOUS_CARRIER = {.cmd = (uint8_t[]){0xBB, 0x00, 0xB0, 0x00, 0x01, 0xFF, 0xB0, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_GET_DEMODULATOR_PARAMETERS = {.cmd = (uint8_t[]){0xBB, 0x00, 0xF1, 0x00, 0x00, 0xF1, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_SET_DEMODULATOR_PARAMETERS = {.cmd = (uint8_t[]){0xBB, 0x00, 0xF0, 0x00, 0x04, 0x03, 0x06, 0x01, 0xB0, 0xAE, 0x7E}, .length = 11};

// UHF_RFID_CMD CMD_TEST_RF_INPUT_BLOCK_SIGNAL = {.cmd = (uint8_t[]){0xBB, 0x00, 0xF2, 0x00, 0x00, 0xF2, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_TEST_RSSI_SIGNAL = {.cmd = (uint8_t[]){0xBB, 0x00, 0xF3, 0x00, 0x00, 0xF3, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_MODULE_HIBERNATION = {.cmd = (uint8_t[]){0xBB, 0x00, 0x17, 0x00, 0x00, 0x17, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_IDLE_HIBERNATION_TIME = {.cmd = (uint8_t[]){0xBB, 0x00, 0x1D, 0x00, 0x01, 0x02, 0x20, 0x7E}, .length = 8};

// UHF_RFID_CMD CMD_IDLE_MODE = {.cmd = (uint8_t[]){0xBB, 0x00, 0x04, 0x00, 0x03, 0x01, 0x01, 0x03, 0x0C, 0x7E}, .length = 10};

// UHF_RFID_CMD CMD_NXP_READPROTECT = {.cmd = (uint8_t[]){0xBB, 0x00, 0xE1, 0x00, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0xE4, 0x7E}, .length = 12};

// UHF_RFID_CMD CMD_NXP_CHANGE_EAS = {.cmd = (uint8_t[]){0xBB, 0x00, 0xE3, 0x00, 0x05, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0xE7, 0x7E}, .length = 12};

// UHF_RFID_CMD CMD_NXP_EAS_ALARM = {.cmd = (uint8_t[]){0xBB, 0x00, 0xE4, 0x00, 0x00, 0xE4, 0x7E}, .length = 7};

// UHF_RFID_CMD CMD_NXP_CONFIG_WORD = {.cmd = (uint8_t[]){0xBB, 0x00, 0xE0, 0x00, 0x06, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xE4, 0x7E}, .length = 13};

// UHF_RFID_CMD CMD_IMPINJ_MONZA4_QT = {.cmd = (uint8_t[]){0xBB, 0x00, 0xE5, 0x00, 0x08, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x01, 0x40, 0x00, 0x2D, 0x7E}, .length = 15};

// UHF_RFID_CMD CMD_BLOCK_PERMALOCK = {.cmd = (uint8_t[]){0xBB, 0x00, 0xD3, 0x00, 0x0B, 0x00, 0x00, 0xFF,0xFF, 0x01, 0x03, 0x00, 0x00, 0x01, 0x07, 0x00, 0xE8, 0x7E}, .length = 18};

// #endif /* UHF_CMD_H */