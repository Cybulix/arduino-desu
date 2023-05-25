// Led pins
const int ledPinArray[] = {13, 12, 11, 10, 9, 8, 7, 6};

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  // pin 13 = first 6 = last
  for (int pin = 7; pin >= 0; pin--){
    pinMode(ledPinArray[pin], OUTPUT);
  }
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
  // sizeof return lenght x2, that's why I use / 2, to get correct length.
  // -2 takes care that end lamp isn't turned twice in a row for extra smooth effect.
  for(int i= 0; i <= sizeof(ledPinArray) / 2 - 2; i++){
    blink(100, ledPinArray[i]);
    Serial.println(i);
  }
}

void rightToLeft(){
  for(int i= sizeof(ledPinArray) / 2 - 1; i >= 1; i--){
    blink(100, ledPinArray[i]);
    Serial.println(i);
  }
}

// Used source
// https://www.arduino.cc