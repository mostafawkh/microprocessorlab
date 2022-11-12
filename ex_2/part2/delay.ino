int port=0;
void setup() {
  pinMode(port,OUTPUT);

}

void loop() {
  digitalWrite(port,LOW);
  delay(5000);
  digitalWrite(port,HIGH);
}
