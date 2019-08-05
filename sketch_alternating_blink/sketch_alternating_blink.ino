void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void buildInLedOn(int duraion){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duraion); 
}

void buildInLedOff(int duraion){
  digitalWrite(LED_BUILTIN, LOW);
  delay(duraion); 
}

void blinkWithPeriod(int period){
  int duration = period/2;
  buildInLedOn(duration);
  buildInLedOff(duration);
}

void blinkTimesWithPeriod(int times, int period){
  int i = 0;
  while(i<times){
    blinkWithPeriod(period);
    i++;
  }
}

void loop() {
  blinkTimesWithPeriod(5, 1000);
  blinkTimesWithPeriod(5, 4000);
}
