// Led pin
const int ledPinR = 10;
const int ledPinG = 9;
const int ledPinB = 8;

void setup() {
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  // turn disco on & loop it
  discoLED();
}

void discoLED(){
  // it is what it is
  for (int r = 0; r <= 255; r++) {
    for (int g = 0; g <= 255; g++) {
      for (int b = 0; b <= 255; b++) {
        analogWrite(ledPinR, r);
        analogWrite(ledPinG, g);
        analogWrite(ledPinB, b);
        delay(10); // Delay between each color change
      }
    }
  }
}

// Used source
// https://arduinogetstarted.com/tutorials/arduino-rgb-led