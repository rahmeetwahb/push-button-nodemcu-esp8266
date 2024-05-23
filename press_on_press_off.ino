const int button = 5;
const int led = 2;
int status;
int count;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  status = digitalRead(button);
  if(status == 1){
    count++;
    delay(100);
    if(count == 1){
      digitalWrite(led, LOW);
    }
    if(count == 2){
      digitalWrite(led, HIGH);
      count = 0;
    }
  }

}
