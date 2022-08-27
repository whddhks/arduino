#include "MiniCom.h"


MiniCom::MiniCom(long serial_bps, int lcd_addr)
:serial_bps(serial_bps), lcd(lcd_addr,16,2){
    no_lcd= false;
}

void MiniCom::init(){
    Serial.begin(serial_bps);
    if (!no_lcd) {
        lcd.init();
        lcd.backlight();
    }
}
int MiniCom::setInterval(unsigned long interval, timer_callback f){
    return timer.setInterval(interval, f);
}

void MiniCom::run(){
    timer.run();
    }

void MiniCom::print(int row, const char *pMsg){ //(출력행,출력 메세지) 포인터가 붙은 것은 배열이라 생각하면된다. String  타입 
    if (no_lcd) return;
    char buf[17];
    sprintf(buf,"%-16s",pMsg);
    lcd.setCursor(0, row);
    lcd.print(buf);
    
}
void MiniCom::print(int row, String title, int value){  
    //"abc"+5 자바 에서는 String + int 로 합하면 String 으로 abc5
    //C++ 에서는 "abc"가 char의 포인터이다 그래서 안되는데 stirng s="abc" s+=5는 된다.
    if (no_lcd) return;
    String buf = title+value;
    print(row,buf.c_str());
    //char*를 String 으로 전달 가능 반대는 안된다. 범위가 String 이 더 넓다. 
    //c_str String을 char*로 리턴해준다.
}
void MiniCom::print(int row, String title1, int value1,String title2, int value2){
    if(no_lcd) return;
    String buf =title1+value1+","+title2+value2;
    print(row,buf.c_str());
}   
void MiniCom::print(int row, String title, double value){
    if (no_lcd) return;
    String buf = title+value;
    print(row,buf.c_str());
    
}
void MiniCom::print(int row, String title1, double value1,String title2, double value2){
    if(no_lcd) return;
    String buf =title1+value1+","+title2+value2;
    print(row,buf.c_str());
}