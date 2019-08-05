int incomingByte = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    if (incomingByte == 49){
      digitalWrite(LED_BUILTIN, HIGH);
    } else if (incomingByte == 48){
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}
