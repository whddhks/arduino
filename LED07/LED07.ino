#include <Led.h>
//프로그래밍언어들은 파일명을 대소문자 구분할수있다 윈도우는 못함
Led leds[4] ={Led(3),Led(4),Led(5),Led(6)};
int out_no =0;
void setup() {
}
//꺼쪘다가 하나식 증가해서 다켜지게 하고 다시 다꺼지게
void loop() {
  for (int n=0;n<4;n++){
    leds[n].setValue(n<=out_no);
  }
  out_no=(++out_no)%4;
  delay(100);
}
