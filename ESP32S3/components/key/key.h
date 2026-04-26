/**
 * @file key.h
 * @author A-rtos (A-rtos@outlook.com)
 * @brief KEY Driver Function Declaration
 * @version 0.1
 * @date 2026-04-26
 * 
 * @copyright Copyright (c) 2026 A-rtos
 * 
 */

#ifndef KEY_H
#define KEY_H

#include "driver/gpio.h"

#define BOOT_GPIO_PIN   GPIO_NUM_0

#define BOOT            gpio_get_level(BOOT_GPIO_PIN)
#define BOOT_PRES       1

void key_init(void);
uint8_t key_scan(uint8_t mode);

#endif /* KEY_H */
