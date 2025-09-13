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

void app_main(void)
{
    led_init();
    exti_init();

    while (1)
    {

        vTaskDelay(10);
    }
}
