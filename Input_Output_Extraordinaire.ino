//Button connected to D4
//LED connected to D7
//Speaker/Buzzer connected to D2
//Touch sensor connected to  D3
// LCD screen cnnected to 12C

#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;

const int pinTouch = 3;   // pin of touch sensor defined here
const int pinLed  = 7;    // pin of led defined here
const int pinButton = 4;  // pin of the button defined here
const int speakerPin = 2; // pin of the speaker/buzzer defined here
const int colorR = 255;  // the red value of the lcd screen defined here
const int colorG =20;   // the green value of the lcd screen defined here
const int colorB =147;  // the blue value of the lcd screen defined here
void setup()
{
    pinMode(pinTouch, INPUT);  // set touch sensor INPUT
    pinMode(pinLed, OUTPUT);   // set led OUTPUT
    pinMode(pinButton, INPUT); // set button OUTPUT
    pinMode(speakerPin, OUTPUT);  // set speaker INPUT
    lcd.begin(16,2); // the number of rows and columns of the lcd defined here
    lcd.setRGB(colorR,colorG,colorB); // the colour of the lcd screen defined here
    lcd.setCursor(0,0); //where to start writting my first definition/message  
    lcd.print("touch sensor=led"); //my first definition/message
    lcd.setCursor(0,1);//where to start writting my second definition/message
    lcd.print("button = buzzer"); //my second definiion/message
    
}

void loop()
{
    if(digitalRead(pinTouch))  //If the touch sensor is being pressed
    {
        digitalWrite(pinLed, HIGH); //turn the LED on 
    }
    else //If the touch sensor is not being pressed
    {
        digitalWrite(pinLed, LOW); //turn the LED off
    }

  if(digitalRead(pinButton)) //If the button is being pressed 
  {
      digitalWrite(speakerPin, HIGH); //turn the speaker/buzzer on
      }
   else { // If the button is not being pressed 
  digitalWrite(speakerPin, LOW); //turn the speaker/buzzer off
   }
   }
 

