#include<robofever.h>

robofever robofever ;

void setup() {
// put your setup code here, to run once:


Serial.begin(9600);
robofever.pinsetup();



}

void loop() {
  // put your main code here, to run repeatedly:

  
      
      
      
int iv1=robofever.ir1operation();
int iv2=robofever.ir2operation();
if (iv1==1 && iv2==1)
  {
   robofever.forward();
  }
 else if(iv1==1 && iv2==0)
 {
 robofever.right();
  }
  else if(iv1==0 && iv2==1)
 {
  robofever.right();
  }

  else if(iv1==0 && iv2==0)
 {
  robofever.hold();
  }
  
  }
