int clock_wise = 12;
int counter_clock_wise = 13;

void setup() {
  pinMode(clock_wise, OUTPUT);
  pinMode(counter_clock_wise, OUTPUT);
}

void loop() {
  for(int i = 0; i <= 255; i++) {
    analogWrite(clock_wise,i);
    delay(3);
  }  
  for(int i = 255; i >= 0; i--) {
    analogWrite(clock_wise,i);
    delay(3);
  } 
  for(int i = 0; i <= 255; i++) {
    analogWrite(counter_clock_wise, i);
    delay(3);
  } 
  for(int i = 255; i >= 0; i--) {
    analogWrite(counter_clock_wise, i);
    delay(3);
  } 
  delay(50);
}