#include <Servo.h>

Servo myservo1;
Servo myservo2;

int potpin = 0;
int val;
int potpin2= A1;
int val2;

void setup()
{
  myservo1.attach(9);
  myservo2.attach(10);
}

void loop()
{
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 179);
  myservo1.write(val);
  delay(15);

  val2=analogRead(potpin2);
  val2 = map(val2, 0, 1023, 0, 179);
  myservo2.write(val2);
  delay(15);
}  
