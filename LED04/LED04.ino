const int led_pin[4]={6,5,4,3};
//높은 차원이 step 낮은 차원이 led값
//const int led_out[4][4]={
//  {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}
//};
int out_no = 0;

void setup() {
  int n;
  for (n=0;n<4;n++){
    pinMode(led_pin[n],OUTPUT);
  }
}

void loop() {
  int n;
  for (n=0;n<4;n++) {
    //digitalWrite(led_pin[n],  led_out[out_no][n]);
    digitalWrite(led_pin[n],out_no==n);
  }
  out_no=(out_no+1)%4;
  delay(1000);

}
