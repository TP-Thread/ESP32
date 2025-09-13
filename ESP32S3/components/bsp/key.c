/**
 ****************************************************************************************************
 * @file        key.c
 * @author      TP-Thread
 * @date        2025-09-11
 * @brief       按键驱动代码
 ****************************************************************************************************
 */

#include "key.h"

/**
 * @brief       初始化按键
 */
void key_init(void)
{
    gpio_config_t gpio_init_struct;

    gpio_init_struct.pin_bit_mask = 1ull << BOOT_GPIO_PIN; /* BOOT按键引脚 */
    gpio_init_struct.mode = GPIO_MODE_INPUT;               /* 输入模式 */
    gpio_init_struct.pull_up_en = GPIO_PULLUP_ENABLE;      /* 使能上拉 */
    gpio_init_struct.pull_down_en = GPIO_PULLDOWN_DISABLE; /* 失能下拉 */
    gpio_init_struct.intr_type = GPIO_INTR_DISABLE;        /* 失能引脚中断 */

    gpio_config(&gpio_init_struct); /* 配置使能 */
}

/**
 * @brief       按键扫描函数
 * @retval      0, BOOT按下
 */
uint8_t key_get_val(void)
{
    uint8_t keyval = 1;

    if (gpio_get_level(BOOT_GPIO_PIN) == 0)
    {
        vTaskDelay(10); /* 去抖动 */

        if (gpio_get_level(BOOT_GPIO_PIN) == 0)
        {
            keyval = 0x00; /* BOOT按下 */
        }
    }

    return keyval; /* 返回键值 */
}
