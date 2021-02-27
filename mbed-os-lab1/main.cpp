#include "mbed.h"

DigitalOut myLED1(LED3);
DigitalOut myLED2(LED1);

int main() {
    while (1) {
        myLED1 = 0;
        myLED2 = 0;
        //LED3(orange) blink three times
        for (int i = 1; i <= 6; i++) {
            ThisThread::sleep_for(100ms);
            myLED1 = !myLED1;
        }
        //LED1(green) blink two times
        for (int i = 1; i <= 4; i++) {
            ThisThread::sleep_for(100ms);
            myLED2 = !myLED2;
        }
    }
    return 0;
}s