/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     200ms

DigitalOut led(LED1), led1(LED2), led2(LED3);
void PingPong(){
    led = 1;
    ThisThread::sleep_for(BLINKING_RATE);
    led = 0;
    ThisThread::sleep_for(BLINKING_RATE);
    led1 = 1;
    ThisThread::sleep_for(BLINKING_RATE);
    led1 = 0;
    ThisThread::sleep_for(BLINKING_RATE);
    led2 = 1;
    ThisThread::sleep_for(BLINKING_RATE);
    led2 = 0;
    ThisThread::sleep_for(BLINKING_RATE);
    led1 = 1;
    ThisThread::sleep_for(BLINKING_RATE);
    led1 = 0;
    ThisThread::sleep_for(BLINKING_RATE);
}
int main(){
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1), led1(LED2), led2(LED3);
    while (true){
    PingPong();
    }
}
