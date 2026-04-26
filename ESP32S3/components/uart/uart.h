/**
 * @file uart.h
 * @author A-rtos (A-rtos@outlook.com)
 * @brief UART Driver Faunction Declaration
 * @version 0.1
 * @date 2026-04-26
 * 
 * @copyright Copyright (c) 2026 A-rtos
 * 
 */

#ifndef UART_H
#define UART_H

#include "driver/gpio.h"
#include "driver/uart.h"
#include "driver/uart_select.h"

#define USART_UX            UART_NUM_0
#define USART_TX_GPIO_PIN   GPIO_NUM_43
#define USART_RX_GPIO_PIN   GPIO_NUM_44

#define RX_BUF_SIZE         1024

void uart_init(uint32_t baudrate);

#endif /* UART_H */
