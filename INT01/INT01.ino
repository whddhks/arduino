#include <Led.h>
#include <Switch.h>
Led leds[4]={Led(3),Led(4),Led(5),Led(6)};



void flash(){
  Serial.println("pressed");
}
void setup() {
  attachInterrupt(digitalPinToInterrupt(2),flash,FALLING);
  Serial.begin(9600);
  //2번 버튼을 눌렀을때(FALLING) flash함수를 가져와달라
}

void loop() {
  
  
}
