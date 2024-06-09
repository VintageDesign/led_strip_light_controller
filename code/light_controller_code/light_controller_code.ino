const int GREEN_PIN = 9;
const int RED_PIN = 10;
const int BLUE_PIN = 11;

const int RED_BUTTON = 2;
const int WHITE_BUTTON = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  pinMode(RED_BUTTON, INPUT);
  pinMode(WHITE_BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int whiteState = digitalRead(WHITE_BUTTON);
  int redState = digitalRead(RED_BUTTON);

  if (whiteState) {
    digitalWrite(GREEN_PIN, HIGH);
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(BLUE_PIN, HIGH);
  } 
  else if (redState) {
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(BLUE_PIN, LOW);
  } 
  else {
    digitalWrite(GREEN_PIN, LOW);
    digitalWrite(RED_PIN, LOW);
    digitalWrite(BLUE_PIN, LOW);
  }
}
