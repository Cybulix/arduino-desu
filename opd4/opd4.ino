// LED pinnen:
const int ledPinArray[] = {13, 12, 11, 10, 9, 8, 7};

// Potentiometer
const int potMeterPin = A5;
int potMeterValue = 0; // Startwaarde

void setup() {
  Serial.begin(9600);

  for (int pin = 6; pin >= 0; pin--) {
    pinMode(ledPinArray[pin], OUTPUT);
  }
}

void loop() {
  potMeterValue = analogRead(potMeterPin);

  int mapValue = map(potMeterValue, 0, 930, ledPinArray[0] + 1, ledPinArray[6]);

  manageLights(mapValue);
  Serial.println(potMeterValue);
}

void manageLights(int mapVal) {
  for(int pin = ledPinArray[0]; pin >= ledPinArray[6]; pin--){
    if(pin >= mapVal){
    digitalWrite(pin, HIGH);
    }
    else{
      digitalWrite(pin, LOW);
    }
  }
}