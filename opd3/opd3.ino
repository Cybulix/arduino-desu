const int buttonPin = 8;  // het nummer van de pin van de drukknop
const int ledPin = 11;    // het nummer van de pin van de LED

// variabele zal worden gewijzigd:
int buttonState = 0;  // variabele voor het lezen van de status van de drukknop
int previousButtonState = 0;  // variabele voor het opslaan van de vorige knopstatus
int ledState = 0; // variabele voor het lezen van de status van de LED

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