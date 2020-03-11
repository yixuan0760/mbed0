#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

//int Led(DigitalOut& ledpin);

int main()
{
    redLED = 1;
    greenLED = 1;
    while (true){
        for(int i=0; i<6; ++i){
            redLED = !redLED;
            wait(0.2f);
        } 
        for (int j=0; j<4; ++j){
            greenLED = !greenLED;
            wait(0.2f);
        }
    }
}