int  led=0;
boolean button=LOW;
boolean currentButton=LOW;
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(8,INPUT);
}
boolean debounce(boolean last)
{
  boolean current=digitalRead(8);
  if(last!=current)
  {
    delay(5);
    current=digitalRead(8);
  }
  return(current);
}
void loop()
{  
  currentButton=debounce(button);
  if(currentButton==HIGH && button==LOW)
  {
    led=led+51;
  }
  if(led>255)
  {
    led=0;
  }
    button=currentButton;
 analogWrite(11,led);
}
