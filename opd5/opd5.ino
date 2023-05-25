// Temp Meter
const int tempMeterPin = A5;
float temp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temp = analogRead(tempMeterPin);
  // Get curr temp with use of map
  temp = map(temp, 0, 1023, 0, 500);
  Serial.print("Temperatuur in Celsius = ");
  Serial.print(temp);
  Serial.println();
  delay(1000); // Get temp each second
}

// used resource 
// https://www.tutorialspoint.com/arduino/arduino_temperature_sensor.htm
