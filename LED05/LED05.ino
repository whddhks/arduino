#include "Led.h"

Led led(3);
void setup() {
}

void loop() {
//  led.on();
//  delay(500);
//  led.off();
//  delay(500);
  led.toggle();
  delay(1000);
}
