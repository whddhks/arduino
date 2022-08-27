#include <Led.h>
#include <Switch.h>
Switch btn(2);
Led leds[4]={Led(3),Led(4),Led(5),Led(6)}; 
int out_no=0;

void shift() {
  for (int n=0 ; n< 4 ; n++){
    leds[n].setValue(n<=out_no);
  }
  out_no=(++out_no)%4;
}

void setup() {
  btn.setCallback(shift);
}

void loop() { //주기적으로  검사하는것 polling
  btn.check();
}
