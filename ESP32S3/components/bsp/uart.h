#ifndef AR_UART_H
#define AR_UART_H

#include <string.h>
#include "driver/uart.h"
#include "driver/uart_select.h"
#include "driver/gpio.h"

#define UART_UX UART_NUM_0
#define UART_TX_GPIO_PIN GPIO_NUM_43
#define UART_RX_GPIO_PIN GPIO_NUM_44

#define RX_BUF_SIZE 1024
#define TX_BUF_SIZE 1024

void uart_init(uint32_t baudrate);

#endif /* AR_UART_H */
