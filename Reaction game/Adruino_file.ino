const int speaker = 11;
const int side1 = 13;
const int side2 = 2;
const int winbulb1 = 7;
const int winbulb2 = 4;
bool pressed = 0;
void setup() {
  Serial.begin(9600);
  pinMode(winbulb1,OUTPUT);
  pinMode(winbulb2,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(speaker,OUTPUT);
  pinMode(side1,INPUT_PULLUP);
  pinMode(side2,INPUT_PULLUP);
}

void loop()
{
  for(int i = 8; i  <= 10; i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(speaker,HIGH);
    delay(600);
    digitalWrite(i,LOW);
    digitalWrite(speaker,LOW);
    delay(500);
  }
  while(pressed==0)
  {
    digitalWrite(winbulb1,HIGH);
    digitalWrite(winbulb2,HIGH);
    if(digitalRead(side1)==0)
    {
      Serial.println("Side 1 wins!");
      pressed=1;
      digitalWrite(winbulb2,LOW);
      delay(1000);
      digitalWrite(winbulb1,LOW);
    }
    else if(digitalRead(side2)==0)
    {
      Serial.println("Side 2 wins!");
      pressed=1;
      digitalWrite(winbulb1,LOW);
      delay(1000);
      digitalWrite(winbulb2,LOW);
    }
  }
  delay(500);
  pressed=0;
}
