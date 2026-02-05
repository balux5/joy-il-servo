int led1 = 7;
int led2 = 8;
int led3 = 9;
int pot = A0;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(pot);
  value = map(value, 0, 1023, 0, 35);
  if (value <= 10) {
    digitalWrite(led1, HIGH);

  }
  else if (value <= 25) {
    digitalWrite(led2,  HIGH);

  }
  else if (value <= 40) {
    digitalWrite(led3,  HIGH);
  }
  Serial.println(value);
  if (value == 0) {
    digitalWrite(led3, LOW);

  }
  

  
  else if (value >= 25) {
    digitalWrite(led3,  LOW);

  }
  else if (value > 0) {
    digitalWrite(led2,  LOW);
  }
}
