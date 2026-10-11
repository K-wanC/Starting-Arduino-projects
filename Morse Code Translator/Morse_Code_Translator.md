# Morse_Code_Translator

Detects and seperates long & short presses of a button, than translates it in to characters based on morse code.

**Modifiable

-Able to control wait time for each character

-Able to control wait time for the system to print space

# Building
<img width="1004" height="643" alt="image" src="https://github.com/user-attachments/assets/c784a4a3-789f-479f-9130-32bfcc7ed1a0" />

# Main Course
The whole project is around the *presstime detection mechanism*.

## Core Mechanism
There was no Original Arduino code for a timer(to start and end counting at any point)

*Mission*: Create a timer

**millis()**
- Return the milliseconds since the program has started

**Serial.begin(9600)**
- Starts the Serial Monitor, for digital(computer) input display

[***Full code inspection***](https://drive.google.com/file/d/17cv4wxSNQAVNY52xC4mr-PdTkMkZVuGJ/view?usp=sharing)
