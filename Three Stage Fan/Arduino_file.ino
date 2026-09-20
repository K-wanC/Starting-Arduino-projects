  int modeN[] = {0,127,255};
  int off = 8;
  int half = 9;
  int full = 10;
  int fan = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(off)==LOW){
    analogWrite(fan,0);
  }
  if(digitalRead(half)==LOW){
    analogWrite(fan,177);
  }
  if(digitalRead(full)==LOW){
    analogWrite(fan,255);
  }
}
