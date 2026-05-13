const int buttonPin = 4;
const int ledPin = 2;

int ledState = LOW;          
int lastButtonState = HIGH;  

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading == LOW && lastButtonState == HIGH) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(200); 
  }
  
  lastButtonState = reading;
}