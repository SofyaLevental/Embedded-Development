int xAxisPin = 0; 
int yAxisPin = 1;       
int buttonPin = 9;  
int xVal, yVal, button;      

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("UNO is ready!");
}

boolean commandsFromValue(char commandMin, char commandMax, int value){
  if(value>100){
      Serial.println(commandMax);
    } else if(value<-100){
      Serial.println(commandMin);
    }
}

void loop() {
  xVal = analogRead(yAxisPin) - 511;
  Serial.println(xVal);
  yVal = analogRead(xAxisPin) - 511;
  Serial.println(yVal);
  button = digitalRead(buttonPin);
  Serial.println(button);

  if(button == 1){
    Serial.println('Q');
  } else if(abs(xVal)>abs(yVal)){
    commandsFromValue('L','R',xVal);
  } else{
    commandsFromValue('D','U',yVal);
  }

  delay(100);
}
