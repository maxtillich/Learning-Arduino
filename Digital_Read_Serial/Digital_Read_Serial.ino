void setup() {
  Serial.begin(9600); // bits/sec
  pinMode(2,INPUT); // Pin 2 als input definieren
}

void loop() {
  int inputValue = digitalRead(2);
  Serial.println(inputValue);
}
