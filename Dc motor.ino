//Code for motor to run from min to max speed and vice versa on a dc motor
void setup()
{
  pinMode(9,OUTPUT);
} 
void loop()
{
  for (int i=0;i<=255;i++)
  {
    analogWrite(9,i);
    delay(50);
  }
  delay(1000);
  for (int i=255;i>=0;i--)
  {
    analogWrite(9,i);
    delay(50);
  }
  delay(1000);
}