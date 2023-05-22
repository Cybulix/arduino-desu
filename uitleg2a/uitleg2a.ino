void setup() {
  // put your setup code here, to run once:
  // pin 13 = first 6 = last
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leftToRight();
  rightToLeft();
}

void blink(int time, int pin){
  digitalWrite(pin, HIGH);
  delay(time);
  digitalWrite(pin, LOW);
  delay(time);
}

void leftToRight(){
  blink(100, 13);
  blink(100, 12);
  blink(100, 11);
  blink(100, 10);
  blink(100, 9);
  blink(100, 8);
  blink(100, 7);
}

void rightToLeft(){
  blink(100, 6);
  blink(100, 7);
  blink(100, 8);
  blink(100, 9);
  blink(100, 10);
  blink(100, 11);
  blink(100, 12);
}
