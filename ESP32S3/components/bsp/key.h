#ifndef AR_KEY_H
#define AR_KEY_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define BOOT_PIN GPIO_NUM_0

void key_init(void);
uint8_t key_get_val(void);

#endif /* AR_KEY_H */
