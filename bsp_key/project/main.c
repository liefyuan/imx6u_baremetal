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
 #include "bsp_beep.h"
 #include "bsp_key.h"
 
 
/*
 * @description : main 函数
 * @param : 无
 * @return : 无
 */
int main(void)
{
	int i = 0;
	int keyvalue = 0;
	unsigned char led_state = OFF;
	unsigned char beep_state = OFF;

	bsp_clk_init();   /* 使能所有的时钟 */
	bsp_led_init();   /* 初始化 led */
	bsp_beep_init();  /* 初始化beep */
	bsp_key_init();   /* 初始化key */

	while(1)
	{
		keyvalue = bsp_key_get_value();
		if(keyvalue)
		{
			switch ((keyvalue))
			{
				case KEY0_VALUE:
					beep_state = !beep_state;
					bsp_beep_switch(beep_state);
					break;
			}
		}

		i++;
		if(i==50)
		{
			i = 0;
			led_state = !led_state;
			bsp_led_switch(LED0, led_state);
		}
		bsp_delay_ms(10);
	}
	return 0;
}
 
 