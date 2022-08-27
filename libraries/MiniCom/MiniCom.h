#pragma once

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <SimpleTimer.h>

class MiniCom{
    protected :
    long serial_bps;        //Serial �ӵ�
    LiquidCrystal_I2C lcd;  //1602 LCD
    SimpleTimer timer;      //Ÿ�̸�
    bool no_lcd;            //LCD ��뿩��

    public :
    MiniCom(long serial_bps=115200, int lcd_addr=0x27);
    void serNoLcd(){no_lcd = true;}; //�ַ� ����¥���� �̷��� �ȿ� ���� �ع�����.
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