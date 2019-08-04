int ledPin = 9;
int voltageFromProtoresistor;
int convertedVoltage;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  voltageFromProtoresistor = analogRead(A0);
  convertedVoltage = map(voltageFromProtoresistor, 0, 1023, 0, 255);
  analogWrite(ledPin, convertedVoltage);
}
