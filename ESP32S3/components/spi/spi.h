/**
 * @file spi.h
 * @author A-rtos (A-rtos@outlook.com)
 * @brief SPI Driver Function Declaration
 * @version 0.1
 * @date 2026-04-26
 * 
 * @copyright Copyright (c) 2026 A-rtos
 * 
 */

#ifndef SPI_H
#define SPI_H

#include "driver/gpio.h"
#include "driver/spi_master.h"

/* 引脚定义 */
#define SPI_MOSI_GPIO_PIN   GPIO_NUM_11
#define SPI_CLK_GPIO_PIN    GPIO_NUM_12
#define SPI_MISO_GPIO_PIN   GPIO_NUM_13

/* 函数声明 */
void spi2_init(void);                                                           /* 初始化SPI2 */
void spi2_write_cmd(spi_device_handle_t handle, uint8_t cmd);                   /* SPI发送命令 */
void spi2_write_data(spi_device_handle_t handle, const uint8_t *data, int len); /* SPI发送数据 */
uint8_t spi2_transfer_byte(spi_device_handle_t handle, uint8_t byte);           /* SPI处理数据 */

#endif /* SPI_H */
