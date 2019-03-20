#include <Arduino.h>

int motorPin=A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin,OUTPUT);
}
//controling a DC motor with an analog pin using a transistor to change the current going to the pin
void loop() {

for (int i=0;i<=255;i++){
  analogWrite(motorPin,i);
  delay(10);
  }
delay(500);
for (int i=255;i>=0;i--){
  analogWrite(motorPin,i);
  delay(10);
  }
delay(500);

}
