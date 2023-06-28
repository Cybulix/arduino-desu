// LED pinnen
const int ledPinArray[] = {13, 12, 11, 10, 9, 8, 7, 6};

void setup() {
  Serial.begin(9600);
  // plaats hier je installatiecode, om eenmaal uit te voeren:
  // pin 13 = eerste 6 = laatste
  for (int pin = 7; pin >= 0; pin--){
    pinMode(ledPinArray[pin], OUTPUT);
  }
}

void loop() {
  // plaats hier je hoofdcode, om herhaaldelijk uit te voeren:
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
  // sizeof retourneert lengte x2, daarom gebruik ik / 2 om de juiste lengte te krijgen.
  // -2 zorgt ervoor dat de eindlamp niet twee keer achter elkaar wordt ingeschakeld voor een extra vloeiend effect.
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

// Gebruikte bron
// https://www.arduino.cc