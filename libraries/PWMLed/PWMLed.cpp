#include "PWMLed.h"

PWMLed::PWMLed(int pin, int value):Led(pin) ,value(value){
    analogWrite(pin,value);
}// �ڹٿ����� �θ�Ŭ���� ������ȣ���� super ���⼭�� �� ����ó�� �ϸ��
void PWMLed::setValue(int value){
    this->value=value;
    analogWrite(pin,value);
}
