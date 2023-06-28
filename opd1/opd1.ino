void setup() {
  // plaats hier je installatiecode, om eenmaal uit te voeren:
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // plaats hier je hoofdcode, om herhaaldelijk uit te voeren:
  blink(1000, 11, 12);
}

void blink(int time, int pin1, int pin2){
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  delay(time);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin1, LOW);
  delay(time);
}
