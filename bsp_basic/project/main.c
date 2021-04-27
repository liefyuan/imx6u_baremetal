/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : main.c
 * Author     : liefyuan
 * Version    : V1.0
 * Description: main file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
 
 #include "bsp_clk.h"
 #include "bsp_delay.h"
 #include "bsp_led.h"
 
 
/*
 * @description : main 函数
 * @param : 无
 * @return : 无
 */
int main(void)
{
	bsp_clk_init(); /* 使能所有的时钟 */
	bsp_led_init(); /* 初始化 led */

	while(1)
	{
		/* 打开 LED0 */
		bsp_led_switch(LED0,ON);
		bsp_delay_ms(500);

		/* 关闭 LED0 */
		bsp_led_switch(LED0,OFF);
		bsp_delay_ms(500);
	}
	return 0;
}
 
 