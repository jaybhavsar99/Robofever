#include<robofever.h>

robofever robofever ;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
robofever.pinsetup();

}

void loop() {
  // put your main code here, to run repeatedly:
float distance=robofever.operation();
Serial.println(distance);
