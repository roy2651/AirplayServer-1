#ifndef PLAYFAIR_H
#define PLAYFAIR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

extern uint8_t reply_message[4][142];

extern uint8_t fp_header[12];

void playfair_decrypt(unsigned char* message3, unsigned char* cipherText, unsigned char* keyOut);

#ifdef __cplusplus
}
#endif

#endif

