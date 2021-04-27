/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_gpio.h
 * Author     : liefyuan
 * Version    : V1.0
 * Description: gpio driver file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
#ifndef _BSP_GPIO_H
#define _BSP_GPIO_H

#include "imx6ul.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 枚举类型和结构体定义 */
typedef enum _gpio_pin_direction
{
    kGPIO_DigitalInput = 0U,  		/* 输入 */
    kGPIO_DigitalOutput = 1U, 		/* 输出 */
} gpio_pin_direction_t;
	

typedef struct _gpio_pin_config
{
    gpio_pin_direction_t direction; /* GPIO方向:输入还是输出 */
    uint8_t outputLogic;            /* 如果是输出的话，默认输出电平 */
} gpio_pin_config_t;

void bsp_gpio_init(GPIO_Type *base, int pin, gpio_pin_config_t *config);
int bsp_gpio_pin_read(GPIO_Type *base, int pin);
void bsp_gpio_pin_write(GPIO_Type *base, int pin, int value);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _BSP_GPIO_H */