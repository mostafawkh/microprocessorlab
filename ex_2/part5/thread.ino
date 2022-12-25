#include <Thread.h>
#include <ThreadController.h>

int led=13;
ThreadController Controll=ThreadController();

Thread OnThread=Thread();
Thread OffThread=Thread();

void powerOn(){
  digitalWrite(led,HIGH);
}

void powerOff(){
  digitalWrite(led,LOW);
}


void setup() {
  OnThread.onRun(powerOn);
  OnThread.setInterval(500);
  OffThread.onRun(powerOff);
  OffThread.setInterval(250);

  Controll.add(&OnThread);
  Controll.add(&OffThread);
}

void loop() {
  Controll.run();
}
