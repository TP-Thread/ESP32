#ifndef AR_EXTI_H
#define AR_EXTI_H

#include "esp_attr.h"
#include "driver/gpio.h"
#include "led.h"

#define BOOT_PIN GPIO_NUM_0

void exti_init(void);

#endif /* AR_EXTI_H */
