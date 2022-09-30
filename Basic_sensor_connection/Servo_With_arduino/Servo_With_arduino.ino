// IInclude Library for servo motor
#include <Servo.h>

Servo servoBase;//Assigning servo variable

void setup() {
   servoBase.attach(4);//Pin for servo
   servoBase.write(0);  //Assign value in degree to servo
}

void loop() {

  for(int i=0; i<=180; i=i+10)
  {
   servoBase.write(i);
   delay(2000);
  }
 }
 
