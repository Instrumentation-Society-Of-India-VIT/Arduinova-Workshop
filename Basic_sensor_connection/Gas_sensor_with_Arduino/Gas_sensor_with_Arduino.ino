# define Gas_SENSOR A0

void setup()
{
  
  Serial.begin(9600);
  
}

void loop()
{
 
  int sensor_In = analogRead(A0);
  Serial.println(sensor_In);
  
}
