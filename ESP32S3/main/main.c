/**
 ******************************************************************************
 * @file     main.c
 * @author   TP-Thread
 * @date     2025-09-11
 ******************************************************************************
 */

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "led.h"
#include "exti.h"
#include "uart.h"

void app_main(void)
{
    uint8_t len = 0;
    uint16_t times = 0;
    unsigned char data[RX_BUF_SIZE] = {0};

    led_init();
    exti_init();
    uart_init(115200);

    while (1)
    {
        uart_get_buffered_data_len(UART0, (size_t *)&len); /* 获取环形缓冲区数据长度 */

        if (len > 0)
        {
            memset(data, 0, RX_BUF_SIZE); /* 对缓冲区清零 */
            printf("您发送的消息为:\r\n");
            uart_read_bytes(UART0, data, len, 100);                                  /* 读数据 */
            uart_write_bytes(UART0, (const char *)data, strlen((const char *)data)); /* 写数据 */
        }
        else
        {
            times++;

            if (times % 100 == 0)
            {
                led_toggle();
            }

            vTaskDelay(10);
        }
    }
}
