/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_clk.c
 * Author     : liefyuan
 * Version    : V1.0
 * Description: clk config file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
 
 #include "bsp_clk.h"
 
/*
 * @description : 使能 I.MX6U 所有外设时钟
 * @param : 无
 * @return : 无
 */
 void bsp_clk_init(void)
 {
	CCM->CCGR0 = 0XFFFFFFFF;
	CCM->CCGR1 = 0XFFFFFFFF;
	CCM->CCGR2 = 0XFFFFFFFF;
	CCM->CCGR3 = 0XFFFFFFFF;
	CCM->CCGR4 = 0XFFFFFFFF;
	CCM->CCGR5 = 0XFFFFFFFF;
	CCM->CCGR6 = 0XFFFFFFFF;	 
 }
 
 