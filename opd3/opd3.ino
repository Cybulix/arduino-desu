const int buttonPin = 8;  // the number of the pushbutton pin
const int ledPin = 11;    // the number of the LED pin

// variable will be changed:
int buttonState = 0;  // var for reading pushbutton status
int previousButtonState = 0;  // var for storing previous button state
int ledState = 0; // var for reading led status

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  ledState = digitalRead(ledPin);

  if(buttonState != previousButtonState){
    if(buttonState == LOW){
	delay(50);
    switchLight();
    }
    previousButtonState = buttonState;
  }
}

void switchLight(){
  switch(ledState){
      case HIGH:
      digitalWrite(ledPin, LOW);
      Serial.println("Switch is OFF");
      break;
      case LOW:
      digitalWrite(ledPin, HIGH);
      Serial.println("Switch is ON");
      break;
      default:
      Serial.println("Invalid switch state");
      break;
    }
}