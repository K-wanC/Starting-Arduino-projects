# Reaction_Game
  This game will start by the countdown mechanism, and compete for 2 participator in reaction time. 

# Used Parts
  Basic Breadboard
  Jumpwires and wires
  LED bulbs 
  Buttons

# Codes
const int speaker = 11;
const int read = A0;
// Initializing ports for use, speaker will be digital 11 and analog read port will be A0
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(speaker,OUTPUT);
  for(int i = 8; i  <= 10; i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(speaker,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    digitalWrite(speaker,LOW);
    delay(1000);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
