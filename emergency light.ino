//Emergency light:If room is dark and movement is detected led,switches on
//pins
int sensorpin=0;
int motionpin=1;
//distance variables
int last=0;
int current=0;
//thresh
int thresh=200;
void setup()
{
  pinMode(9,OUTPUT);
}
void loop()
{
  int val= analogRead(sensorpin);
  current=analogRead(motionpin);
    if ((current-last>thresh || last-current>thresh)&& val<800)
       {
         digitalWrite(8,HIGH);
         delay(1000);
       }
       else
       {
         digitalWrite(8,LOW);
       }
  last=current;
}