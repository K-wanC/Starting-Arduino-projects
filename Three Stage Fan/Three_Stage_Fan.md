# Three Stage Fan
Controlling a single-cable fan by codes, learning to use analog output.

# Building
<img width="461" height="547" alt="image" src="https://github.com/user-attachments/assets/ca4f71d7-2e9b-49ff-a5eb-1ddc23b536ab" />

*Since there's no fan component shown in the simulator website Wokwi, the LED will be indicating a brushed DC motor (9V).

# Code
```
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
```

