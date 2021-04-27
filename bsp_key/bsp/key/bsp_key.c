/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_key.c
 * Author     : liefyuan
 * Version    : V1.0
 * Description: key driver file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
#include "bsp_key.h"
#include "bsp_gpio.h"
#include "bsp_delay.h"

/*
 * @description	: 初始化按键
 * @param 		: 无
 * @return 		: 无
 */
void bsp_key_init(void)
{	
	gpio_pin_config_t key_config;
	
	/* 1、初始化IO复用, 复用为GPIO1_IO18 */
	IOMUXC_SetPinMux(IOMUXC_UART1_CTS_B_GPIO1_IO18,0);

	/* 2、、配置UART1_CTS_B的IO属性	
	 *bit 16:0 HYS关闭
	 *bit [15:14]: 11 默认22K上拉
	 *bit [13]: 1 pull功能
	 *bit [12]: 1 pull/keeper使能
	 *bit [11]: 0 关闭开路输出
	 *bit [7:6]: 10 速度100Mhz
	 *bit [5:3]: 000 关闭输出
	 *bit [0]: 0 低转换率
	 */
	IOMUXC_SetPinConfig(IOMUXC_UART1_CTS_B_GPIO1_IO18,0xF080);
	
	/* 3、初始化GPIO */
	//GPIO1->GDIR &= ~(1 << 18);	/* GPIO1_IO18设置为输入 */	
	key_config.direction = kGPIO_DigitalInput;
	bsp_gpio_init(GPIO1,18, &key_config);
}

/*
 * @description	: 获取按键值 
 * @param 		: 无
 * @return 		: 0 没有按键按下，其他值:对应的按键值
 */
int bsp_key_get_value(void)
{
	int ret = 0;
	static unsigned char release = 1; /* 按键松开 */ 

	if((release==1)&&(bsp_gpio_pin_read(GPIO1, 18) == 0)) 		/* KEY0 	*/
	{	
		bsp_delay_ms(10);		/* 延时消抖 		*/
		release = 0;	/* 标记按键按下 */
		if(bsp_gpio_pin_read(GPIO1, 18) == 0)
			ret = KEY0_VALUE;
	}
	else if(bsp_gpio_pin_read(GPIO1, 18) == 1)
	{
		ret = 0;
		release = 1; 	/* 标记按键释放 */
	}

	return ret;	
}
