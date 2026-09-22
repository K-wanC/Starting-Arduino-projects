#include "LedControl.h"
int DIN = 11;
int CS = 10;
int CLK = 13;
LedControl lc = LedControl(DIN,CLK,CS,1);
int left = 2;
int right = 5;
int up = 3;
int down = 4;
void leftScroll()
{
  for(int i = 21;i>=7;i--)
  {
  lc.setRow(0,i-14,B00000000);
  lc.setRow(0,i-13,B00011000);
  lc.setRow(0,i-12,B00111100);
  lc.setRow(0,i-11,B01111110);
  lc.setRow(0,i-10,B00011000);
  lc.setRow(0,i-9,B00011000);
  lc.setRow(0,i-8,B00011000);
  lc.setRow(0,i-7,B00000000);
  delay(100);
  }
}
void rightScroll()
{
  for(int i = 7;i<=21;i++)
  {
  lc.setRow(0,i-7,B00000000);
  lc.setRow(0,i-8,B00011000);
  lc.setRow(0,i-9,B00111100);
  lc.setRow(0,i-10,B01111110);
  lc.setRow(0,i-11,B00011000);
  lc.setRow(0,i-12,B00011000);
  lc.setRow(0,i-13,B00011000);
  lc.setRow(0,i-14,B00000000);
  delay(100);
  }
}
void downScroll()
{
  for(int i = 21;i>=7;i--)
  {
  lc.setColumn(0,i-14,B00000000);
  lc.setColumn(0,i-13,B00011000);
  lc.setColumn(0,i-12,B00111100);
  lc.setColumn(0,i-11,B01111110);
  lc.setColumn(0,i-10,B00011000);
  lc.setColumn(0,i-9,B00011000);
  lc.setColumn(0,i-8,B00011000);
  lc.setColumn(0,i-7,B00000000);
  delay(100);
  }
}
void upScroll()
{
  for(int i = 7;i<=21;i++)
  {
  lc.setColumn(0,i-7,B00000000);
  lc.setColumn(0,i-8,B00011000);
  lc.setColumn(0,i-9,B00111100);
  lc.setColumn(0,i-10,B01111110);
  lc.setColumn(0,i-11,B00011000);
  lc.setColumn(0,i-12,B00011000);
  lc.setColumn(0,i-13,B00011000);
  lc.setColumn(0,i-14,B00000000);
  delay(100);
  }
}
void setup() {
  // put your setup code here, to run once:
  lc.shutdown(0,false);
  lc.setIntensity(0,1);
  lc.clearDisplay(0);
  pinMode(left,INPUT_PULLUP);
  pinMode(right,INPUT_PULLUP);
  pinMode(up,INPUT_PULLUP);
  pinMode(down,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  lc.shutdown(0,true);
  if(digitalRead(left)==LOW||digitalRead(up)==LOW||digitalRead(down)==LOW||digitalRead(right)==LOW)
  {
    lc.shutdown(0,false);
    
    if(digitalRead(left)==LOW)
    {
      leftScroll();
    }
    else if(digitalRead(right)==LOW)
    {
      rightScroll();
    }
    else if(digitalRead(down)==LOW)
    {
      downScroll();
    }
    else if(digitalRead(up)==LOW)
    {
      upScroll();
    }
  }
}

