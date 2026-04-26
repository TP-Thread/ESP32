/**
 * @file exti.h
 * @author A-rtos (A-rtos@outlook.com)
 * @brief EXTI Driver Function Declaration
 * @version 0.1
 * @date 2026-04-26
 * 
 * @copyright Copyright (c) 2026 A-rtos
 * 
 */

#ifndef EXIT_H
#define EXIT_H

#include "driver/gpio.h"

#define BOOT_INT_GPIO_PIN   GPIO_NUM_0
#define BOOT                gpio_get_level(BOOT_INT_GPIO_PIN)

void exit_init(void);

#endif /* EXIT_H */
