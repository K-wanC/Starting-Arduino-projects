# Morse_Code_Translator

Detects and seperates long & short presses of a button, than translates it in to characters based on morse code.

**Modifiable

-Able to control wait time for each character

-Able to control wait time for the system to print space

# Used Parts
**This project is major in coding than electronic parts.
``
  button
  wires
``

# Code
```
const int codePin = 8;
const int charPin = 10;
const int wordPin = 12;

bool lastStabledState = HIGH;   // INPUT_PULLUP: not pressed = HIGH
bool currentStabledState = HIGH;

long lastDebouncedTime = 0;
long debounceDelay = 30;
long pressStartTime = 0;
long detachTime = 0;
long characterTime = 500;
long wordTime = charactertime + 1000;

class interaction {
  private:
  long hold_time;
  int storedInner[4] = {0, 0, 0, 0};
  int count = 0;
  String word = "";
  bool waitConf = false;

  public:
  void press() {
    bool reading = digitalRead(codePin);

    if (count > 0 && currentStabledState == HIGH && millis() - detachTime >= characterTime) {
      digitalWrite(charPin, HIGH);
      interpretation();
      waitConf = true;
      digitalWrite(charPin, LOW);
    }

    if (waitConf == true && currentStabledState == HIGH && millis() - detachTime >= wordTime) {
      digitalWrite(wordPin, HIGH);
      Serial.print(" ");
      waitConf = false;
      digitalWrite(wordPin, LOW);
    }

    if (reading != lastStabledState) {
      lastDebouncedTime = millis();
    }

    if ((millis() - lastDebouncedTime) > debounceDelay) {
      if (reading != currentStabledState) {
        currentStabledState = reading;

        if (currentStabledState == LOW) {
          pressStartTime = millis();
        } 

        else if (currentStabledState == HIGH) {
          hold_time = millis() - pressStartTime;

          storedInner[count] = hold_time;
          count++;

          detachTime = millis();
          waitConf = false;

          if (count >= 4) {
            interpretation();
            waitConf = true;
          }
        }
      }
    }

    lastStabledState = reading;
  }

  void interpretation() {
    word = "";

    int i = 0;

    while (i < 4 && storedInner[i] != 0) {
      if (storedInner[i] <= 170) {
        word += "."; 
      }
      else {
        word += "-";
      }

      i++;
    }
    
    Serial.print(decodeMorse());

    for (int i = 0; i < 4; i++) {
      storedInner[i] = 0;
    }

    count = 0;
  }

  char decodeMorse() {
    if (word == ".-") return 'A';
    if (word == "-...") return 'B';
    if (word == "-.-.") return 'C';
    if (word == "-..") return 'D';
    if (word == ".") return 'E';
    if (word == "..-.") return 'F';
    if (word == "--.") return 'G';
    if (word == "....") return 'H';
    if (word == "..") return 'I';
    if (word == ".---") return 'J';
    if (word == "-.-") return 'K';
    if (word == ".-..") return 'L';
    if (word == "--") return 'M';
    if (word == "-.") return 'N';
    if (word == "---") return 'O';
    if (word == ".--.") return 'P';
    if (word == "--.-") return 'Q';
    if (word == ".-.") return 'R';
    if (word == "...") return 'S';
    if (word == "-") return 'T';
    if (word == "..-") return 'U';
    if (word == "...-") return 'V';
    if (word == ".--") return 'W';
    if (word == "-..-") return 'X';
    if (word == "-.--") return 'Y';
    if (word == "--..") return 'Z';

    return '?';
  }
};

interaction morse;

void setup() {
  pinMode(codePin, INPUT_PULLUP);
  pinMode(charPin, OUTPUT);
  pinMode(wordPin, OUTPUT);

  digitalWrite(charPin, LOW);
  digitalWrite(wordPin, LOW);

  Serial.begin(9600);
}

void loop() {
  morse.press();
}
```
