#include <Keypad.h>

char keys[4][4] = { {'1', '2', '3', 'A'}, {'4', '5', '6', 'B'}, {'7', '8', '9', 'C'}, {'*', '0', '#', 'D'} };

byte rowPins[4] = {D7, D6, D5, D4}; 
byte colPins[4] = {D3, D2, D1, D0}; 

Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  char keyPressed = myKeypad.getKey();
  
  if(keyPressed){
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);
   // switch(keyPressed){
   //  case '2':
   //   Serial.println('U');
   //   break;
   //  case '4':
   //   Serial.println('L');
   //   break;
   //  case '6':
   //   Serial.println('R');
   //   break;
   //  case '8':
   //   Serial.println('D');
   //   break;
   // }
  }
}
