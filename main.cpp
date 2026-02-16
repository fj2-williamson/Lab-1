/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     500ms


int main()
{
    // Initialise the digital pin LED1, LED2 and LED3 as an output
    DigitalOut led(LED1), led1(LED2), led2(LED3);
int count = 0;
    while (true) {
        led1 = !led1;

        if (count % 2 == 0){
            led = !led;}

        if (count % 4 == 0){
        led2 = !led2;}
        count++;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}
