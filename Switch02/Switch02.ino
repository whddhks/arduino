//버튼을 눌렀을 때 부터 상승한 구간을 level triger
//눌렀을 순간, 땠을때의 순간을 edge triger 
#include <Led.h>

#define OFF 1  //const int OFF=1; 이랑 같다.
#define ON 0 

Led leds[4]={Led(3),Led(4),Led(5),Led(6)};

const int sw_pin=2;
int out_no=0;
void setup() {
  //Serial.begin(9600);
  pinMode(sw_pin,INPUT_PULLUP);
}

void blink () {
   led.toggle(); 
}

void shift() {
  for (int n=0; n<4;n++) {
      leds[n].setValue(n==out_no);
    }
    out_no=(++out_no)%4;
}
// 버튼 조작코드를 유지한 채로 눌렀을때의 메소드를 만들어 if문 안에 불러오기만 하면된다.
// 이런함수를 이벤트핸들러 (콜백함수라 한다.)
void loop() {
  boolean o_sw , n_sw;
  o_sw = digitalRead(sw_pin);
  delay(10);
  n_sw = digitalRead(sw_pin);
  if (o_sw== OFF && n_sw==ON) {
    blink(); 
    //shift();
  }


//  if (o_sw== OFF && n_sw==ON){//하강엣지인가? 눌렀을때 반응한다.
//    Serial.println("button pressed");
//    
//    }


  
}
