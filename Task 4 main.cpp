/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


// Blinking rate in milliseconds
#define BLINKING_RATE     200ms 
// Initialise the ditigal pins before the function
DigitalOut led(LED1), led1(LED2), led2(LED3);
// Create function containing flash sequence
void blinkers(){
    // Loop until the counter 'i' reaches 5
for (int i = 0; i < 5; i++) {
led = !led;
        led1 = !led1;
        led2 = !led2;
        ThisThread::sleep_for(BLINKING_RATE);
}
}
int main(){
    // Recall the function
        blinkers();
        //turn LED1 on continuously and turn off LED2 and LED3
        led = 1;
        led1 = 0;
        led2 = 0;
}
