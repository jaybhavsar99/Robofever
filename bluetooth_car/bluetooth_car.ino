#include<robofever.h>

robofever robofever ;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  robofever.pinsetup();

}

void loop() {
  // put your main code here, to run repeatedly:
  char getdata =robofever.bluetoothoperation();
      
     
      Serial.println(getdata);
      if(getdata=='F')
      {
        
      robofever.forward();
      }
      else if(getdata=='B')
      {
       
        robofever.backward();
        
        }
        else if(getdata=='L')
      {
        
        robofever.left();
        
        }
        else if(getdata=='R')
      {
        
        robofever.right();
        
        }
        else if(getdata=='S')
      {
      
        
        robofever.hold();
        }
        
      
      
    

}
