#include "mbed.h"

BusOut leds(D12,D11,D10,D9,D8,D7,D6,D5);
BusOut gnds(A0,A2,A3,A1,D3,A4,A5,D2);
DigitalOut led(D13);
DigitalIn sw(PC_13);
Thread thread;

uint8_t n=0,x=0;
int dt[]= {1,2,5,10,20,50,100};
int m=0;
bool bt=1,prebt=1;
void msfunc()
{
    while(true) {
        leds=(1<<n);//^(n>>1);//graycode
        gnds=~(1<<x);
        n++;
        if(n>7) {
            n=0;
            x++;
            if(x>7) {
                x=0;
            }

        }
        ThisThread::sleep_for(dt[m]);
    }
}
int main()
{
    thread.start(msfunc);
    while(true) {
        led=!led;
        bt=sw;
        if(bt!=prebt&&!bt)
            m++;
        if(m>=7)m=0;

        prebt=bt;
        ThisThread::sleep_for(10);
    }
}