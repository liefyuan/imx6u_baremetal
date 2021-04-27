/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_delay.h
 * Author     : liefyuan
 * Version    : V1.0
 * Description: delay config file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
#ifndef _BSP_DELAY_H
#define _BSP_DELAY_H

#include "imx6ul.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void bsp_delay_ms(volatile unsigned int n);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _BSP_DELAY_H */