#include <SimpleTimer.h>
#include <Switch.h>
#include <Led.h>
Led leds[4]={Led(3),Led(4),Led(5),Led(6)};
SimpleTimer timer;
Switch btn(2);
void toggle_1000() {
  leds[0].toggle();
}
void toggle_500(){
  leds[1].toggle();
}
void toggle_300() {
  leds[2].toggle();
}
void toggle() {
  leds[3].toggle();
}
void setup() {
 timer.setInterval(1000,toggle_1000);
 timer.setInterval(500,toggle_500);
 timer.setInterval(300,toggle_300);
 btn.setCallback(toggle);
}

void loop() {
  timer.run();
  btn.check();
  





  
}
