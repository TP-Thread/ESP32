/**
 * @file led.h
 * @author A-rtos (A-rtos@outlook.com)
 * @brief LED Driver Faunction Declaration
 * @version 0.1
 * @date 2026-04-26
 * 
 * @copyright Copyright (c) 2026 A-rtos
 * 
 */

#ifndef LED_H
#define LED_H

#include "driver/gpio.h"

#define LED_GPIO_PIN    GPIO_NUM_1

/* 引脚的输出的电平状态 */
enum GPIO_OUTPUT_STATE
{
    PIN_RESET,
    PIN_SET
};

#define LED(x)          do { x ?                                      \
                             gpio_set_level(LED_GPIO_PIN, PIN_SET) :  \
                             gpio_set_level(LED_GPIO_PIN, PIN_RESET); \
                        } while(0)
#define LED_TOGGLE()    gpio_set_level(LED_GPIO_PIN, !gpio_get_level(LED_GPIO_PIN));

void led_init(void);

#endif /* LED_H */
