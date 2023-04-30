#include <Servo.h>
  Servo Serv;

  int pinIR=2;
  int pinServo=9;
  int val=0;

  void setup(){
    Serv.attach(pinServo);
  }
 
  void loop(){
    val = digitalRead(pinIR);
 
    if (val ==0){
     
      Serv.write(-90);
      delay(100);
    }
    else
    {
      Serv.write(108);
      delay(100);
    }
  }
