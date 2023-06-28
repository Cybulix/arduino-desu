// LED pinnen:
const int ledPinR = 11;
const int ledPinG = 10;
const int ledPinB = 9;

void setup() {
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  // Zet de disco aan en laat het lusvormig doorlopen
  discoLED();
}

void discoLED(){
  // Het is zoals het is
  for (int r = 0; r <= 255; r++) {
    for (int g = 0; g <= 255; g++) {
      for (int b = 0; b <= 255; b++) {
        analogWrite(ledPinR, r);
        analogWrite(ledPinG, g);
        analogWrite(ledPinB, b);
        delay(10); // Vertraging tussen elke kleurverandering
      }
    }
  }
}

// Gebruikte bron
// https://arduinogetstarted.com/tutorials/arduino-rgb-led