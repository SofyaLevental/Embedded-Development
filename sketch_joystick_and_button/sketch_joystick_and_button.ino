int xAxisPin = 0; 
int yAxisPin = 1;       
int buttonPin = 9;  
int xVal, yVal, button;      

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("UNO is ready!");
}

void loop() {
  xVal = analogRead(xAxisPin);
  yVal = analogRead(yAxisPin);
  button = digitalRead(buttonPin);
  
  Serial.print("X: ");
  Serial.print(xVal);
  Serial.print(" ");
  Serial.print("Y: ");
  Serial.print(yVal);
  Serial.print(" ");
  Serial.print("B: ");
  Serial.println(button);

  delay(100);
}
