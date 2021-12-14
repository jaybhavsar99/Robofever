#include<robofever.h>

robofever robofever ;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
float distance=robofever.operation();
if(distance<20)
{
robofever.right();
  
  }
else
{

  robofever.forward();
  }
}
