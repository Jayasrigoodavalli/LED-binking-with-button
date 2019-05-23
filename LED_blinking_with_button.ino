void setup()
{
  // put your setup code here, to run once:
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(digitalRead(4)==LOW)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
  }

}
