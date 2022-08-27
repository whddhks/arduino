#include <Led.h>
Led leds[4]={Led(3),Led(4),Led(5),Led(6)};
const int BNT=2;

 
void setup() {
  pinMode(BNT, INPUT_PULLUP); //_PULLUP내부 저항을 쓰겠다는 뜻 아두이노 안에는 내장저항이있다.
}

void loop() {
  int value = digitalRead(BNT); //1이 리턴된다
  for (int n=0;n<4;n++){
    if(n=0){
      leds[n].setValue(value);
    }else if (n%2==0){
      leds[n].setValue(value);
    }else if (n%2!=0){
      leds[n].setValue(!value);
    }
  }
  
//  leds[0].setValue(value);
//  leds[1].setValue(!value);
//  leds[2].setValue(value);
//  leds[3].setValue(!value);
//  
      
  
}
