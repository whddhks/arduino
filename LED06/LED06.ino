#include <Led.h>
Led leds[4] ={Led(3),Led(4),Led(5),Led(6)};
int out_no =0;
void setup() {
}

void loop() {
  for (int n=0;n<4;n++) {
  //    if (n==out_no) {
  //      leds[n].on();
  //    }else{
  //      leds[n].off();
  //    }
  ls[n].setValue(n==out_no);
  }
  out_no=(++out_no)%4;
  delay(100);ed
}
