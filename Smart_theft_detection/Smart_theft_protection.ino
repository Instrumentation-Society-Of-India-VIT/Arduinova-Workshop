const int buzzer = 8;

int echopin = 6;
int trigpin = 7;

int distance;
int data;


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
 data = pulseIn(echopin,HIGH);
 distance = (data/2)/29.0;
  
 if(distance >= 30)
 {
  digitalWrite(buzzer,HIGH);
 
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
