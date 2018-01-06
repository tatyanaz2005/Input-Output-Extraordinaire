//Button connected to D4
//LED connected to D7
//Speaker/Buzzer connected to D2
//Touch sensor connected to  D3

const int pinTouch = 3;   // pin of touch sensor defined here
const int pinLed  = 7;    // pin of led defined here
const int pinButton = 4;  // pin of the button defined here
const int speakerPin = 2; // pin of the speaker/buzzer defined here
void setup()
{
    pinMode(pinTouch, INPUT);  // set touch sensor INPUT
    pinMode(pinLed, OUTPUT);   // set led OUTPUT
    pinMode(pinButton, INPUT); // set button OUTPUT
    pinMode(speakerPin, OUTPUT);  // set speaker INPUT
}

void loop()
{
    if(digitalRead(pinTouch))  
    {
        digitalWrite(pinLed, HIGH); 
    }
    else
    {
        digitalWrite(pinLed, LOW);
    }

  if(digitalRead(pinButton))
  {
      digitalWrite(speakerPin, HIGH);
      }
   else {
  digitalWrite(speakerPin, LOW);
   }
   }
 
