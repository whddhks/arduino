
#pragma once

#include <Arduino.h>

class Led {
  protected:
    int pin;
  public:
    Led(int pin);

    void on();
    void off();
    void setValue(int value); //어떤상태인가
    int toggle(); //반전
    
};
