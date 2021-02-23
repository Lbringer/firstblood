//Code to test out servo motor
#include <Servo.h>
Servo adi;
int servopin=9;
int potpin=0;

void setup()
{
  adi.attach(servopin);
}
void loop()
{
  int val=analogRead(potpin);
  int final= map(val,0,1023,180,0);
  adi.write(final);
}