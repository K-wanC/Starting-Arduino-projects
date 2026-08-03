#include "C:\Users\Kwan Chit Ng\Desktop\wkz\coding\Arduino\Mini_Piano\tonechart.txt"

int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int speaker = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,INPUT_PULLUP);
  pinMode(pin2,INPUT_PULLUP);
  pinMode(pin3,INPUT_PULLUP);
  pinMode(pin4,INPUT_PULLUP);
  pinMode(speaker,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(pin1)==LOW)
  {
    tone(speaker,NOTE_E2,10);
  }
  while(digitalRead(pin2)==LOW)
  {
    tone(speaker,NOTE_A2,10);
  }
  while(digitalRead(pin3)==LOW)
  {
    tone(speaker,NOTE_D1,10);
  }
  while(digitalRead(pin4)==LOW)
  {
    tone(speaker,NOTE_G1,10);
  }
}
