const int BUTTON = 2;
const int LED = 3;
int BUTTONstate = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  BUTTONstate = digitalRead(BUTTON);
  Serial.print(BUTTONstate);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
    delay(1000);

  }
}
