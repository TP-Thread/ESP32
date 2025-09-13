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
#include "key.h"

void app_main(void)
{
    uint8_t key;

    led_init();
    key_init();

    while (1)
    {
        key = key_get_val();

        switch (key)
        {
        case 0:
            led_toggle();
            break;
        default:
            break;
        }

        vTaskDelay(10);
    }
}
