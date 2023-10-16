// C++ code
//
int Sensor = 0;

void setup()
{
  pinMode(12, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  Sensor = digitalRead(12);
  if (Sensor == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10); // Wait for 10 millisecond(s)
}