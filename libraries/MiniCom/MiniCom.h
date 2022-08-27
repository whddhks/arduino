#pragma once

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <SimpleTimer.h>

class MiniCom{
    protected :
    long serial_bps;        //Serial 속도
    LiquidCrystal_I2C lcd;  //1602 LCD
    SimpleTimer timer;      //타이머
    bool no_lcd;            //LCD 사용여부

    public :
    MiniCom(long serial_bps=115200, int lcd_addr=0x27);
    void serNoLcd(){no_lcd = true;}; //주로 한줄짜리는 이렇게 안에 구현 해버린다.
    void init();
    void run();

    int setInterval(unsigned long interval, timer_callback f);
    SimpleTimer& getTimer() {return timer;}

    void print(int row,const char *pMsg);
    void print(int row, String title, int value);
    void print(int row, String title1, int value1,String title2, int value2);
    void print(int row, String title, double value);
    void print(int row, String title1, double value1,
                        String title2, double value2);
};