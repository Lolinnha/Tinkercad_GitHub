// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(200); //Esperar 200 milisegundos
  digitalWrite(12, LOW);
  delay(200); //Esperar 200 milisegundos
}