int lastValue;
int counter;
int longThreshold = 3;
void setup() {
  Serial.begin(9600); // bits/sec
  pinMode(2,INPUT); // Pin 2 als input definieren
  counter = 0;
}

void loop() {
  int inputValue = digitalRead(2);
  if (inputValue != lastValue) {
    if (lastValue == 1) {
      if (counter > longThreshold)
        Serial.println('X');
      else
        Serial.println('O');
    }
    counter = 0;
  }
  counter ++;
  lastValue = inputValue;
  delay(50);
}
