const int button = 5;
const int led = 2;
int status;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  status = digitalRead(button);
  if(status == HIGH){
    digitalWrite(led, LOW);
  }
  if(status == LOW){
    digitalWrite(led, HIGH);
  }

}
