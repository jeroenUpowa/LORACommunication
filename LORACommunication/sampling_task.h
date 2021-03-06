#ifndef _SAMPLING_TASK_h
#define _SAMPLING_TASK_h

#include "arduino.h"


#define SAMPLING_BATT_LOOPTIME  60

#ifdef LORA
#define SAMPLING_PAYG_LOOPTIME  120
#endif // LORA

#define SAMPLE_SIZE 19
#define PAYG_SIZE   13


void sampling_setup(void);

void sampling_task(void);

uint8_t sampling_test(uint8_t *buffer);

#ifdef LORA
void lora_batt_sampling(void);

void lora_payg_sampling(void);
#endif // LORA

#endif // _SAMPLING_TASK