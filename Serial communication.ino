//Code for understanding serial communication
int ledpin=13;
boolean led=LOW;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
 int val = Serial.read()-'0';
  if(val==1)
  {
    led = !led;
    Serial.println("Led is switched");
  }  
    digitalWrite(ledpin,led);
 
  
}