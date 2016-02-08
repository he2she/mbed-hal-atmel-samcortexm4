/* mbed Microcontroller Library
 * Copyright (c) 2006-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "mbed_assert.h"
#include "sleep_api.h"
#include "sleepmgr.h"
#if DEVICE_SLEEP

#include "cmsis.h"

void mbed_enter_sleep(sleep_t *obj)
{
    enum sleepmgr_mode sleep_mode;

    sleep_mode = SLEEPMGR_SLEEP_WFI;
    sleepmgr_sleep(sleep_mode);
}

void mbed_exit_sleep(sleep_t *obj)
{
    (void)obj;
}

#endif
