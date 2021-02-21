/*This code uses photosensor as voltage dividor and an led so that when ambient light decreases led will switch on */
int sensorpin=0;
void setup()
{
  analogReference(DEFAULT);//not needed 
  pinMode(8,OUTPUT);
}
void loop()
{
  int val=analogRead(sensorpin);
  if (val<800) digitalWrite(8,HIGH)
  else digitalWrite(8,LOW);
}