/**
 * Copyright © liefyuan Co., Ltd. 1994-2021. All rights reserved.
 * File name  : bsp_beep.h
 * Author     : liefyuan
 * Version    : V1.0
 * Description: beep driver file.
 * Others     : None
 * Contact    : liefyuan@qq.com
 * Journal    : First version V1.0 2021/4/27 Created by liefyuan
 */ 
#ifndef _BSP_BEEP_H
#define _BSP_BEEP_H

#include "imx6ul.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void bsp_beep_init(void);
void bsp_beep_switch(int status);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _BSP_BEEP_H */