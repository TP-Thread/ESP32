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

void app_main(void)
{
    led_init();

    while (1)
    {
        LED_TOGGLE();
        vTaskDelay(1000);
    }
}
