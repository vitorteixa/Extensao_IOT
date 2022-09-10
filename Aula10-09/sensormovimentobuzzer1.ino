// C++ code
//
void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(7));
  if (digitalRead(7) == 1) {
    tone(5, 523, 1000); // play tone 60 (C5 = 523 Hz)
  }
  delay(1000); // Wait for 1000 millisecond(s)
}