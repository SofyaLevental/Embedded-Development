int ledPinR = 9;
int ledPinG = 10;
int ledPinB = 11;

void setup() {
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT); 
  pinMode(ledPinB, OUTPUT);
}

void analogReadAndWrite(int pinToRead, int pinToWrite){
  int adcValue = analogRead(pinToRead);
  int convertedValue = map(adcValue, 0, 1023, 0, 255);
  analogWrite(pinToWrite, convertedValue);
}

void loop() {
  analogReadAndWrite(A2, ledPinR);
  analogReadAndWrite(A1, ledPinG);
  analogReadAndWrite(A0, ledPinB);
}
