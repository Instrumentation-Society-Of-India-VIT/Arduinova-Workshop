const int buzzer = 8;

int echopin = 7;
int trigpin = 6;

int distance;
int data;
int redLed=2;
int greenLed=4;
int yellowLed=3;

void setup()
{
  Serial.begin(9600); 
 
  pinMode(buzzer, OUTPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop()
{
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);
 data = pulseIn(echopin,HIGH);
 distance = (data/2)/29.0;
  
 if(distance <= 30)
 {
  digitalWrite(buzzer,HIGH);
  delay(250);
  digitalWrite(buzzer,LOW);
  delay(125);
  digitalWrite(redLed,HIGH);
   digitalWrite(greenLed,LOW);
   digitalWrite(yellowLed,LOW);
  
 }
 else if(distance >= 30 && distance <= 60)
 {
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  delay(250);
  digitalWrite(redLed,LOW);
   digitalWrite(greenLed,LOW);
   digitalWrite(yellowLed,HIGH);

 }
 else if(distance >= 60 && distance <= 120)
 {
  digitalWrite(buzzer,HIGH);
  delay(1000); 
  digitalWrite(buzzer,LOW);
  delay(1000);
 digitalWrite(redLed,LOW);
   digitalWrite(greenLed,HIGH);
   digitalWrite(yellowLed,LOW);
 }
 else
 {
  digitalWrite(buzzer,LOW);
 }
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
