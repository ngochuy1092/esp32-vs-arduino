#include <Keypad.h>
#define RXp2 4
#define TXp2 2

void setup() {
  Serial.begin(9600);
  Serial2.begin(9600, SERIAL_8N1, RXp2, TXp2);
  pinMode(14, OUTPUT);
}

void loop() {
  if (Serial2.available()) {
    String receivedMessage = Serial2.readString();

    if (receivedMessage == "Hello Boss") {
       Serial2.print ("Hello Bi"); 
       delay (500);   
  }
}
}
