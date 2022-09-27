// Programa del profesor, obtenido de: 
//https://github.com/daguzman35/Tutorial-LED-RGB-Arduino


void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  analogWrite(9, 255);
  analogWrite(10, 0);
  analogWrite(11, 0);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(9, 255);
  analogWrite(10, 153);
  analogWrite(11, 0);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(9, 255);
  analogWrite(10, 255);
  analogWrite(11, 0);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(9, 51);
  analogWrite(10, 204);
  analogWrite(3, 0);
}
