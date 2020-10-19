/*
 Open Source Seed Coating Machine Controller
 by Lot Amoros - Powerful Seeds
*/

// constants used here to set pin numbers:
const int buttonPin1 = 2;     // the number of the pushbutton pin
const int buttonPin2 = 3;     // the number of the pushbutton pin
const int buttonPin3 = 4;     // the number of the pushbutton pin

const int RelayPin1 =  7;      // enchufe
const int RelayPin2 =  8;      // the number of the LED pin
const int RelayPin3 =  9;      // the number of the LED pin
const int RelayPin4 =  10;      // the number of the LED pin
const int RelayPin5 =  11;      // the number of the LED pin
const int RelayPin6 =  12;      // the number of the LED pin

// state of the buttons:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;         // variable for reading the pushbutton status
int buttonState3 = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(RelayPin1, OUTPUT);
  pinMode(RelayPin2, OUTPUT);
  pinMode(RelayPin3, OUTPUT);
  pinMode(RelayPin4, OUTPUT);
  pinMode(RelayPin5, OUTPUT);
  pinMode(RelayPin6, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == LOW) {
    // turn LED on:
    digitalWrite(RelayPin1, HIGH);
    digitalWrite(RelayPin2, HIGH);
  } else {
    // turn LED off:
    digitalWrite(RelayPin1, LOW);
    digitalWrite(RelayPin2, LOW);
  }

  if (buttonState2 == LOW) {
    // turn LED on:
    digitalWrite(RelayPin3, HIGH);
    digitalWrite(RelayPin4, HIGH);
  } else {
    // turn LED off:
    digitalWrite(RelayPin3, LOW);
    digitalWrite(RelayPin4, LOW);
  }

  if (buttonState3 == LOW) {
    // turn LED on:
    digitalWrite(RelayPin5, HIGH);
    digitalWrite(RelayPin6, HIGH);
  } else {
    // turn LED off:
    digitalWrite(RelayPin5, LOW);
    digitalWrite(RelayPin6, LOW);
  }
}
