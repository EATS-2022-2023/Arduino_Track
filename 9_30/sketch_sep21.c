#define RED_LED 13
#define GREEN_LED 12 
#define BLUE_LED 11

#define RED_BUTTON 10
#define GREEN_BUTTON 9
#define BLUE_BUTTON 7

// Initialize the button states to off
int RED_BUTTON_STATE = LOW;
int GREEN_BUTTON_STATE = LOW;
int BLUE_BUTTON_STATE = LOW;

void setup() {
  Serial.begin(9600);

  //Set output LEDS
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  //Set input pins
  pinMode(RED_BUTTON, INPUT);
  pinMode(GREEN_BUTTON, INPUT);
  pinMode(BLUE_BUTTON, INPUT);

}

void loop() {
  Serial.print("RED: ");
  Serial.print(RED_BUTTON_STATE);
  Serial.print("    ");
  Serial.print("GREEN: ");
  Serial.print(GREEN_BUTTON_STATE);
  Serial.print("   ");
  Serial.print("BLUE: ");
  Serial.print(BLUE_BUTTON_STATE);
  Serial.println("");

  // Change the button state when pussing the button
  RED_BUTTON_STATE = digitalRead(RED_BUTTON);
  GREEN_BUTTON_STATE = digitalRead(GREEN_BUTTON);
  BLUE_BUTTON_STATE = digitalRead(BLUE_BUTTON);


  //Handle Red
  if(!RED_BUTTON_STATE) {
    digitalWrite(RED_LED, LOW);
  }
  else {
    digitalWrite(RED_LED, HIGH);
  }

  //Handle Green
  if(!GREEN_BUTTON_STATE) {
    digitalWrite(GREEN_LED, LOW);
  }
  else {
    digitalWrite(GREEN_LED, HIGH);
  }

  //Handle Blue
  if(!BLUE_BUTTON_STATE) {
    digitalWrite(BLUE_LED, LOW);
  }
  else {
    digitalWrite(BLUE_LED, HIGH);
  }
}

