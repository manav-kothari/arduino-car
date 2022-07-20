int led = 13;       //led
int m1a = 3; //motor1
int m1b = 4; //motor1
int m2a = 5; //motor2
int m2b = 6; //motor2
char bt = 0;       //BT
void setup()
{
  Serial.begin(9600);
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
  pinMode(led, OUTPUT);
}
void loop()
{
  if (Serial.available() > 0)
  {
    bt = Serial.read();
    digitalWrite(led, HIGH);

    if (bt == 'F')       //forwards
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);
      Serial.println("forward");
    }
    else if (bt == 'B')       //backwards
    { digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH);
      Serial.println("back");
    }
    else if (bt == 'R')    //right
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);
      Serial.println("right");
    }
    else if (bt == 'L')     //left
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH);
      Serial.println("Left");
    }
    else if (bt == 'S')
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, LOW);
      Serial.println("stop");
    }
  }
}

