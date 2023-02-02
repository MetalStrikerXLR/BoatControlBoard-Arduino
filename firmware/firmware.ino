const int numPins = 35;
int pins[numPins] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34};
bool pinStates[numPins];

void setup() {
  Serial.begin(9600);
  
  // initialize all digital IO as outputs and set their initial state to low (false)
  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], OUTPUT);
    pinStates[i] = false;
    digitalWrite(pins[i], pinStates[i]);
  }
}

void loop() {
  if (Serial.available() > 0) {
    int pinIndex = Serial.parseInt();
    if (pinIndex >= 0 && pinIndex < numPins) {
      pinStates[pinIndex] = !pinStates[pinIndex];
      digitalWrite(pins[pinIndex], pinStates[pinIndex]);
    }
  }
}
