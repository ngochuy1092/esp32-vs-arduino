void setup() {
  pinMode (8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Hello Boss");
  delay(1500);
  if (Serial.available()) {
    String a= Serial.readString();
    if (a== "Hello Bi1")
    {
      Serial.print ("ok");
      digitalWrite (8, HIGH);
      delay (400);
      digitalWrite (8, LOW);
      delay(400);
    }
   }
}
