// Define pins
const int redPin = 2;
const int yellowPin = 3;
const int greenPin = 4;

void setup() {
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

//Loop Function
void loop() {
digitalWrite(redPin, HIGH);
digitalWrite(yellowPin, LOW);
digitalWrite(greenPin, LOW);
delay(5000); // Red light for 5 seconds
digitalWrite(redPin, LOW);
digitalWrite(yellowPin, HIGH);
delay(2000); // Yellow light for 2 seconds
digitalWrite(yellowPin, LOW);
digitalWrite(greenPin, HIGH);
delay(5000); // Green light for 5 seconds
}