/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_delay.c
 * Author     : liefyuan
 * Version    : V1.0
 * Description: delay config file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
 
 #include "bsp_delay.h"
 
/*
 * @description : 短时间延时函数
 * @param - n : 要延时循环次数(空操作循环次数，模式延时)
 * @return : 无
 */
static void delay(volatile unsigned int n)
{
	while(n--){}
}

/*
 * @description : 延时函数,在 396Mhz 的主频下
 * 延时时间大约为 1ms
 * @param - n : 要延时的 ms 数
 * @return : 无
 */
void bsp_delay_ms(volatile unsigned int n)
{
	while(n--)
	{
		delay(0x7ff);
	}
}
 
 