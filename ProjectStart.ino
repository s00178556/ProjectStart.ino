
const int  buttonPin = 5;    // the pin that the pushbutton is attached to
const int ledPin = 2;       // the pin that the LED is attached to

// Variables will change:
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {

  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);


}

/*led section of code*/
void loop() {

  int sensorValue = analogRead(A1);

  Serial.println(sensorValue);

  if (sensorValue < 150) {
    digitalWrite(3, HIGH);

  }
  else {
    digitalWrite(3, LOW);

  }

  Serial.println(sensorValue);

  if (sensorValue < 100) {
    digitalWrite(2, HIGH);

  }
  else {
    digitalWrite(2, LOW);

  }

  


  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      digitalWrite(ledPin, HIGH);
    } else {
      // if the current state is LOW then the button went from on to off:
      digitalWrite(ledPin, LOW); 
      Serial.println("off");
    }
    delay(50);
  }
  lastButtonState = buttonState;


  // turns on the LED every four button pushes by checking the modulo of the
  // button push counter. the modulo function gives you the remainder of the
  // division of two numbers:
//  if (buttonPushCounter % 2 == 0) {
//    digitalWrite(ledPin, LOW);                                                        // the high and low were reversed from the example code
//  } else {
//    digitalWrite(ledPin, HIGH);
//  }

  delay (1000);

}



