#include<robofever.h>

robofever robofever ;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  char getdata =robofever.bluetoothoperation();
      
     
      Serial.println(getdata);
      if(getdata=='F')
      {
        
  
      }
      else if(getdata=='B')
      {
       
        
        
        }
        else if(getdata=='L')
      {
        
        
        
        }
        else if(getdata=='R')
      {
        
        
        
        }
        else if(getdata=='S')
      {
      
        
        
        }
        
      
      
    

}
