#pragma once
#include <Arduino.h>

typedef void (*button_callback_t)();
//type definition 기존에있던 타입을 새로롭게 정의 하는것이다. 긴 타입을 짧게 사용할 때 사용한다.
//함수처럼 보인다.
//& : 참조변수
//* : pointer 공통적으로 내포하고있는 범위는 참조 변수와 비슷하다.
//    주소를 저장한다.==원래는 데이터를 가르키는데
//    여기서는 함수를 가르킨다.이런것을
//    함수pointer=> 지정한 형태의 함수에 대해서 포인트
//                  매개변수와 반환 타입이 없는 함수 무조건 둘다 없어야한다.

class Switch{
  protected :
    int pin;
    button_callback_t callback;
    
  public :
    Switch(int pin);
    void setCallback(button_callback_t callback);
    int read(); // 현재 버튼의 상태 리턴
    void check(); //클릭 검사하고 ,클릭됐으면 처리
};
