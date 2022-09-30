const int ldrPin = 9;

void setup() {
  

Serial.begin(9600);          



pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = digitalRead(ldrPin);




Serial.println("Ldr Data");
Serial.println(ldrStatus);

}
