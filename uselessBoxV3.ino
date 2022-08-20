#include "deneyap.h"
#include "ServoESP32.h"
#define servopin D9
#define DET D0

int i;
long randNumber;
Servo servo1;

void setup() {
  servo1.attach(servopin);
  Serial.begin(115200);
  randomSeed(analogRead(0));
}

void loop() {
 int buttonState = digitalRead(DET);
 randNumber = random(1,7);
 Serial.print("Random Number: ");
 Serial.println(randNumber);

 if(buttonState == 1){
     if(randNumber == 1){
      act1();
      }else if(randNumber == 2){
      act2();
      }else if(randNumber == 3){
      act3();
      }else if(randNumber == 4){
      act4();
      }else if(randNumber == 5){
      act5();
      }else if(randNumber == 6){
      act6();
      }
    delay(500);
    }
}
void act1(){
  servo1.write(145);
  delay(1000);
  servo1.write(10);
  delay(1000);
  }
 void act2(){
 for(i=10; i<=60; i+=10){
    delay(1000);
    servo1.write(i);
    }
    servo1.write(150);
    delay(500);
    servo1.write(10);
    delay(1000);
  }
 void act3(){
  for(i=10; i<=150; i+=10){
    delay(90);
    servo1.write(i);
    }
    servo1.write(10);
    delay(1000);
  }
 void act4(){
  servo1.write(145);
  delay(1000);
  servo1.write(10);
  delay(300);
  servo1.write(145);
  delay(300);
  servo1.write(10);
  delay(300);
  servo1.write(145);
  delay(300);
  servo1.write(10);
  }
  void act5(){  
  delay(3000);
  servo1.write(145);
  delay(1000);
  servo1.write(10);
  }
  void act6(){
  delay(300);
  servo1.write(40);
  delay(2000);
  servo1.write(10);
  delay(2000);
  servo1.write(145);
  delay(1000);
  servo1.write(10);
  }

  
