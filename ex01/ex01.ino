#include <Led.h>
#include <Switch.h>

Led led(4);
Switch btn(2);

void pressed() {
  led.toggle();
  //delay(3000); 이건 자주쓰면 안된다. 딜레이 시간동안 버튼이작동하지 않는다.

  /*t1= millis();
    ..........
    t2= millis();
    t2-t1 > 1000 둘 사이의 시간이 1초면 사이에있는 조건을 만족해라

    이런 방법을 쓰면 코드가 엄청 지저분 해진다.

    그래서 SimpleTimer라는 것을 쓴다.
  */
  
}
void setup() {
  btn.setCallback(pressed);
}

void loop() {
 btn.check();
}
