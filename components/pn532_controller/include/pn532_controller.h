#include <cstdint>

#ifndef PN532_CONTROLLER_H
#define PN532_CONTROLLER_H

#define     PN532_SCK       (18)
#define     PN532_MISO      (19)
#define     PN532_MOSI      (23)
#define     PN532_SS        (5)

// #define     PN532_SDA       (21)
// #define     PN532_SCL       (22)

// #define     PN532_RX        (16)
// #define     PN532_TX        (17)

void pn532_init();

bool pn532_readPassiveTagUID();
uint8_t* pn532_getUID();

bool pn532_startExchange();
uint8_t* pn532_getAPDUResponse();

#endif