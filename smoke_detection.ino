// C++ code
//
int Gas_sensor = 0;

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  Gas_sensor = analogRead(A1);
  Serial.println(Gas_sensor);
  if (Gas_sensor >= 200) {
    tone(6, 740, 2000); // play tone 66 (F#5 = 740 Hz)
    digitalWrite(3, HIGH);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
