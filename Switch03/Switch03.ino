#include <Switch.h>
#include <Led.h>

Led led(3);
Switch btn(2);
void toggle() {
  led.toggle();
}
//함수이름 자체가 주소이다. 
void setup() {
  Serial.begin(9600);
  btn.setCallback(toggle);
}

void loop() {
  btn.check();
}
