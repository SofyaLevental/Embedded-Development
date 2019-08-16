#include <EEPROM.h>

String incomingCommand;
int memoryAddress;
int incomingData;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    incomingCommand = Serial.readStringUntil(' ');
    memoryAddress = Serial.readStringUntil(' ').toInt();
    if (incomingCommand == "read"){
      Serial.println(EEPROM.read(memoryAddress), DEC);
    } else if(incomingCommand == "write"){
      incomingData = Serial.readString().toInt();
      EEPROM.write(memoryAddress, incomingData);
    } else{
      Serial.println("Wrong input!");
    }
  }
}
