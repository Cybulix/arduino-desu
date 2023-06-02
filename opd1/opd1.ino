void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
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
