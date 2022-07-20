int led = 13;       //led
char bt = 0;       //BT

void setup()
{
  Serial.begin(9600); // set baud rate of 9600
  pinMode(led, OUTPUT);
  Serial.println("HI");
}
void loop()
{
  if (Serial.available() > 0)
  {
    bt = Serial.read();
    if (bt == 'F')
    {
      digitalWrite(led, HIGH);
      Serial.println("forward");
      delay(1500);
    }
    else
    {
      digitalWrite(led, LOW);
    }
  }
}
