/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_key.h
 * Author     : liefyuan
 * Version    : V1.0
 * Description: key driver file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 

#ifndef _BSP_KEY_H
#define _BSP_KEY_H

#include "imx6ul.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 定义按键值 */
enum keyvalue{
	KEY_NONE   = 0,
	KEY0_VALUE,
	KEY1_VALUE,
	KEY2_VALUE,
};

void bsp_key_init(void);
int bsp_key_get_value(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _BSP_KEY_H */