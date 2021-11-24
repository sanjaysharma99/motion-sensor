int buzzer=13;
int sensor=4;
int value;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(sensor,INPUT);
}

void loop()
{
  value=digitalRead(sensor);
  if(value==HIGH)
  {
    digitalWrite(buzzer, HIGH);
  }
  else;
  {
    digitalWrite(buzzer, LOW);
  }
}