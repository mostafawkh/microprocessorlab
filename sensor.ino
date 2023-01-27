int LED = 13;
int sensor = A0;

void setup(){
  pinMode(LED, OUTPUT);
    pinMode(sensor, INPUT);
}

void loop(){
  int status = 255 - analogRead(sensor);
  if (status < 128)
  {
    digitalWrite(LED, HIGH);
  }
  else  {
    digitalWrite(LED, LOW);
  }
}