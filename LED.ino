#include <Arduino.h>
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop()
{
  if (Serial.available() > 0)
  {
    char command = Serial.read();

    if (command == '1')
    {
      digitalWrite(2, !digitalRead(2));
      if (digitalRead(2))
      {
        Serial.println("LED1亮");
      }
      else
      {
        Serial.println("LED1灭");
      }
    }
    else if (command == '2')
    {
      digitalWrite(3, !digitalRead(3));
      if (digitalRead(3))
      {
        Serial.println("LED2亮");
      }
      else
      {
        Serial.println("LED2灭");
      }
    }
    else if (command == '3')
    {
      digitalWrite(4, !digitalRead(4));
      if (digitalRead(4))
      {
        Serial.println("LED3亮");
      }
      else
      {
        Serial.println("LED3灭");
      }
    }
  }
}