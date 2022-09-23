  
/******************************************************
 * Blink - modified by Evan Nguyen for                *
 * Embedded Applications Technologies Society (EATS)  *
 * at California State University, Long Beach         *
 * - 9/21 : first revision                            *
 ******************************************************/


// Declare a 8-bit UNSIGNED INTEGER assigned to one of our DIGITAL PORT VALUE.
// An 8-bit unsigned integer type can hold a max value of 255.
// There definitely isn't 255 pins on the Nano, so we can "optimize"
// and save some memory.
uint8_t PIN = 13;

// put your setup code here, to run ONCE
void setup() {
  // pinMode(pin, mode) - configures the specified pin to behave as an input or
  pinMode(PIN, OUTPUT);
}

// put your main code here, to run repeatedly:
void loop() {
  digitalWrite(PIN, HIGH);         // turn the LED on, HIGH indicates the voltage level
  delay(1000);                     // wait for 1 second
  digitalWrite(PIN, LOW);          // turn the LED off, LOW indicates the voltage level
  delay(1000)                      // wait for 1 second
}
