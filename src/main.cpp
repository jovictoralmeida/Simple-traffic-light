#include "mbed.h"

DigitalOut ledRed(PD_15);
DigitalOut ledGreen(PD_12);
DigitalOut ledOra(PD_13);


int main() {
    while(1) {
        ledGreen = 1;
        wait(0.2);
        ledGreen = 0;
        wait(0.2);
        
        ledOra = 1;
        wait(0.2);
        ledOra = 0;
        wait(0.2);
        
        ledRed = 1;
        wait(0.2);
        ledRed = 0;
        wait(0.2);
    }
}