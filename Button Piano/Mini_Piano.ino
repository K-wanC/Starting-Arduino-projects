#include "...\tone.chart.txt"
//Should include full directory to the file
int pin1 = 2;
int pin2 = 3;
int pin3 = 4;
int pin4 = 5;
int speaker = 10;
void setup() {
  pinMode(pin1,INPUT_PULLUP);
  pinMode(pin2,INPUT_PULLUP);
  pinMode(pin3,INPUT_PULLUP);
  pinMode(pin4,INPUT_PULLUP);
  pinMode(speaker,OUTPUT);
}

void loop() {
  //Utilizing the tone function, as it can alternate hertz and time of the output, the notes were defined in the attachment
  while(digitalRead(pin1)==LOW)
  {
    tone(speaker,NOTE_C1,10);
  }
  while(digitalRead(pin2)==LOW)
  {
    tone(speaker,NOTE_C2,10);
  }
  while(digitalRead(pin3)==LOW)
  {
    tone(speaker,NOTE_C3,10);
  }
  while(digitalRead(pin4)==LOW)
  {
    tone(speaker,NOTE_C4,10);
  }
}
