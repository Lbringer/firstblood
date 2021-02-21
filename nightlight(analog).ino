//This code chnages the brightness of led as the ambient light changes
int sensorpin=0;
void setup()
{
 pinMode(8,OUTPUT);
}
void loop()
{
 int val analogRead(sensorpin);
 constrain (val,750,900)//As even though we have 1024 values only this much resolution is used.
 int ledlevel=map(val,750,900,225,0);
 analogWrite(8,ledlevel);
}