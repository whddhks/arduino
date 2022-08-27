# include "Led.h" //<>라이브러리 디렉토리에서 찾아라 ""현재디렉토리에서 찾고 없으면 라이브러리를 봐라

Led::Led(int pin) : pin(pin){
  pinMode(pin,OUTPUT); //셋업에서 하던 작업을 생성자에서 해주라
  }

void Led::on(){digitalWrite(pin,HIGH);}
void Led::off(){digitalWrite(pin,LOW);}
void Led::setValue(int value){digitalWrite(pin,value);} 
int Led::toggle(){
  int v= !digitalRead(pin); //OUTPUT 권한은 Read권한도 받는데 Read권한은 OUTPUT권한은 없다 INPUT권한은 Read 권한이 없다.
  digitalWrite(pin,v);
}
