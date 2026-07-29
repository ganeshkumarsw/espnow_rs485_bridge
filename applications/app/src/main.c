/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/pm/pm.h>
#include <zephyr/pm/device.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    while (1)
    {
       	printf("Hello World! %s\n", CONFIG_BOARD_TARGET);
        k_msleep(100);
    }
    
}
