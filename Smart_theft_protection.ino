const int buzzer = 8;

int echopin = 6;
int trigpin = 7;

int mesafe;
int sure;


void setup()
{
  Serial.begin(9600); 
 
  pinMode(buzzer, OUTPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
}

void loop()
{
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 sure = pulseIn(echopin,HIGH);
 mesafe = (sure/2)/29.0;
  
 if(mesafe <= 15)
 {
  digitalWrite(buzzer,HIGH);
  delay(250);
  digitalWrite(buzzer,LOW);
  delay(125);
 }
 else if(mesafe <= 20)
 {
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  delay(250);
 }
 else if(mesafe <= 30)
 {
  digitalWrite(buzzer,HIGH);
  delay(1000); 
  digitalWrite(buzzer,LOW);
  delay(1000);  
 }
 else
 {
  digitalWrite(buzzer,LOW);
 }
  Serial.print("Distance = ");
  Serial.print(mesafe);
  Serial.println("cm");
  delay(500);
}
