# Button Piano

A fundamental approach towards utilizing buzzer, learn how to give buzzer sound variants, as the buzzer reacts to buttons.


## Building
<img width="483" height="562" alt="image" src="https://github.com/user-attachments/assets/28f6b0f6-af1b-47d3-9e66-32661702ada6" />


## Coding

[Tone Chart used](https://github.com/user-attachments/files/30604852/tone.chart.txt)
```
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
```
