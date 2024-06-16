const int GREEN_PIN = 9;
const int RED_PIN = 10;
const int BLUE_PIN = 11;

const int GREEN_BUTTON = 5;
const int BLUE_BUTTON = 4; 
const int RED_BUTTON = 3;
const int WHITE_BUTTON = 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  pinMode(RED_BUTTON, INPUT);
  pinMode(GREEN_BUTTON, INPUT);
  pinMode(BLUE_BUTTON, INPUT);
  pinMode(WHITE_BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int whiteState = digitalRead(WHITE_BUTTON);
  int redState = digitalRead(RED_BUTTON);
  int blueState = digitalRead(BLUE_BUTTON);
  int greenState= digitalRead(GREEN_BUTTON);

  if(whiteState)
  {

      digitalWrite(RED_PIN, !redState);

      digitalWrite(GREEN_PIN, !greenState);

      digitalWrite(BLUE_PIN, !blueState);
 
  }
  else
  {
    
      digitalWrite(RED_PIN, LOW);

      digitalWrite(GREEN_PIN, LOW);

      digitalWrite(BLUE_PIN, LOW);
  }
}
