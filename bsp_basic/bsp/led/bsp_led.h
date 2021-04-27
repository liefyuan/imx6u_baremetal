/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_led.h
 * Author     : liefyuan
 * Version    : V1.0
 * Description: led driver file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "imx6ul.h"

#define LED0 0

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void bsp_led_init(void);
void bsp_led_switch(int led, int status);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _BSP_LED_H */