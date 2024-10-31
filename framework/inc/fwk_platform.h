/*
 * Copyright 2020-2022 NXP.
 * This software is owned or controlled by NXP and may only be used strictly in accordance with the
 * license terms that accompany it. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you
 * agree to comply with and are bound by, such license terms. If you do not agree to be bound by the
 * applicable license terms, then you may not retain, install, activate or otherwise use the software.
 */

/*
 * @brief framework platform dependency declaration.
 * The implementation of these functions should be defined per platform.
 */

#ifndef _FWK_PLATFORM_H_
#define _FWK_PLATFORM_H_

#include <FreeRTOS.h>
#include <task.h>
#include <queue.h>
#include <semphr.h>
#include <timers.h>
#include <list.h>

#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#if defined(__cplusplus)
extern "C" {
#endif

#define FWK_MALLOC pvPortMalloc
#define FWK_FREE   vPortFree

#define FWKDATA __attribute__((section(".bss.fwk_section,\"aw\",%nobits @")))

/*
 * Get the current time in us
 */
unsigned int FWK_CurrentTimeUs();

#if defined(__cplusplus)
}
#endif

#endif /* _FWK_PLATFORM_H_ */
