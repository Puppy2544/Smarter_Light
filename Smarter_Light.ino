int irSensor = 2;
int Relay1 = 3;
int val = 0;

void setup()
{
    pinMode(irSensor,INPUT);
    pinMode(Relay1,OUTPUT);
  }

  void loop()
  {
    val = digitalRead(irSensor);
    if(val==1)
    {
      digitalWrite(Relay1,HIGH);
      delay(10);
    }
    else
    {
      digitalWrite(Relay1,LOW);
    }
    delay(1000);
  }
  
