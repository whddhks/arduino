//blink 프로그램 


const int led=3; //내장 led가 연결되어있다.
int state =0;
void setup() {
  Serial.begin(115200);
  Serial.print("state:");
  Serial.println(state);
  pinMode(led,OUTPUT);

}

void loop() {
  digitalWrite(led, state); //pulldown ON
  delay(1000);
  state= !state; //toggle
  Serial.print("state:");
  Serial.println(state);
}
