#include "PWMLed.h"

PWMLed::PWMLed(int pin, int value):Led(pin) ,value(value){
    analogWrite(pin,value);
}// 자바에서는 부모클래스 생성자호출은 super 여기서는 저 위에처럼 하면됨
void PWMLed::setValue(int value){
    this->value=value;
    analogWrite(pin,value);
}
