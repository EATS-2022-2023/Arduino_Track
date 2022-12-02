#define D2 2
#define D3 3
#define D4 4
#define D5 5

void setup() {
  // put your setup code here, to run once:
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  //Forward
digitalWrite(D2, HIGH);
digitalWrite(D3, LOW);
digitalWrite(D4, HIGH);
digitalWrite(D5, Low);
delay(5000);

//Backward
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);
digitalWrite(D5, HIGH);
delay(5000);

//Left with One wheel
digitalWrite(D2, LOW);
digitalWrite(D3, LOW);
digitalWrite(D4, HIGH);
digitalWrite(D5, LOW);
delay(5000);

//Right with one wheel
digitalWrite(D2, HIGH);
digitalWrite(D3, LOW);
digitalWrite(D4, LOW);
digitalWrite(D5, LOW);
delay(5000);

//Left with two wheels
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
digitalWrite(D5, LOW);
delay(5000);

//Right with two wheels
digitalWrite(D2, HIGH);
digitalWrite(D3, LOW);
digitalWrite(D4, LOW);
digitalWrite(D5, HIGH);
delay(5000);
}