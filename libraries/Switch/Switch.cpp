#include "Switch.h"

 
 Switch::Switch(int pin):pin(pin){
  pinMode(pin,INPUT_PULLUP);
  callback=NULL;
  }
 int Switch::read(){
  return !digitalRead(pin); 
  }
  //원래는 OFF 가 1 ON이 0 이었는데 read에서 부정을 해놨기때문에 반전되었다.

 void Switch::setCallback(button_callback_t callback){
  this->callback=callback;
 }
 void Switch::check(){
  boolean o_sw , n_sw;
  o_sw = read();
  delay(10);
  n_sw = read();
  if (o_sw== 0 && n_sw==1) {
    Serial.println("Button presseds");
    if (callback!=NULL){
      callback();
    }
    }
  }
