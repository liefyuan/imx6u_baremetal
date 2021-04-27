/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_led.c
 * Author     : liefyuan
 * Version    : V1.0
 * Description: led driver file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 

#include "bsp_led.h"

/*
 * @description : 初始化 LED 对应的 GPIO
 * @param : 无
 * @return : 无
 */
void bsp_led_init(void)
{
	/* 1、初始化 IO 复用 */
	IOMUXC_SetPinMux(IOMUXC_GPIO1_IO03_GPIO1_IO03, 0);

	/* 2、、配置 GPIO1_IO03 的 IO 属性 */
	IOMUXC_SetPinConfig(IOMUXC_GPIO1_IO03_GPIO1_IO03, 0X10B0);

	/* 3、初始化 GPIO,GPIO1_IO03 设置为输出*/
	GPIO1->GDIR |= (1 << 3);

	/* 4、设置 GPIO1_IO03 输出低电平，打开 LED0*/
	GPIO1->DR &= ~(1 << 3);
}

/*
 * @description : LED 控制函数，控制 LED 打开还是关闭
 * @param - led : 要控制的 LED 灯编号
 * @param - status : 0，关闭 LED0，1 打开 LED0
 * @return : 无
 */
void bsp_led_switch(int led, int status)
{
	switch(led)
	{
	case LED0:
		if(status == ON)
			GPIO1->DR &= ~(1<<3); /* output high open LED0 */
		else if(status == OFF)
			GPIO1->DR |= (1<<3); /* output low close LED0 */
		break;
	}
}