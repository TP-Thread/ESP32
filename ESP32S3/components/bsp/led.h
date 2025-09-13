#ifndef AR_LED_H
#define AR_LED_H

#include "driver/gpio.h"

#define LED_PIN GPIO_NUM_1

enum GPIO_OUTPUT_STATE
{
    PIN_RESET,
    PIN_SET
};

#define led_on() gpio_set_level(LED_PIN, PIN_RESET)
#define led_off() gpio_set_level(LED_PIN, PIN_SET)
#define led_toggle() gpio_set_level(LED_PIN, !gpio_get_level(LED_PIN))

void led_init(void);

#endif /* AR_LED_H */
