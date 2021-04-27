/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_clk.h
 * Author     : liefyuan
 * Version    : V1.0
 * Description: clk config file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
#ifndef _BSP_CLK_H
#define _BSP_CLK_H

#include "imx6ul.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void bsp_clk_init(void);
void bsp_clk_enable(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _BSP_CLK_H */