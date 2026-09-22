# LED Direction Input

Using *MAX7219* 8X8 LED Matrix Controller, 4 buttons with direction imbedded to input scrolling arrows on the LED.


## Building
<img width="756" height="542" alt="image" src="https://github.com/user-attachments/assets/2f88ae12-ce9c-433f-aac9-9aa922abcd3b" />

https://github.com/user-attachments/assets/1ebae6c5-c769-4606-b207-f9640494e5be

## Main course
*Download LED Control Library by Eberhard Fahle on Arduino IDE*


### MAX7219 8X8 Matrix Controller
<img width="506" height="754" alt="image" src="https://github.com/user-attachments/assets/ff7023cc-63c8-4718-b4b5-affacd6b1e8e" />


### Pins:

VCC(Power Input) - 5V/3V power pin

GND - any GND on board

DIN(Digital Signal Input) - 11

CS(Load) - 10

CLK(Clock) - 13

### Core Library Mechanics

*LedControl (String)name = LedControl(DIN pin,CS pin,CLK pin,number of LED boards connected)*
- Initialize an object of controller for further function callout.

*(String)name.shutdown(int address(index of board),boolean)*
- Temporarily turn off the display but remembers the displayed bulb

*(String)name.setIntensity(int adress(index of board),int number(0-7))*
- Set LED light strength, 0 doesn't mean off

*(String)name.clearDisplay(int adress(index of board))*
- Wipes all the displayed LED bulb

*(String)name.setLED(int adress(index of board),int row(index),int col(index),boolean statement)*
- Set a specific LED on or off

*(String)name.setRow(int adress(index of board),int row(index),byte)*
- Set input byte value of all bulbs of the row

*(String)name.setColumn(int adress(index of board),int col(index),byte)*
- Set input byte value of all bulbs of the column

**byte:B00000000, B + 7 numbers, 1 represents on, 0 represents off**
