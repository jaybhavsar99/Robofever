const int ir1=A0;
const int ir2=A1;
int iv1;
int iv2;
const int mot11=7;
const int mot12=6;
const int mot21=5;
const int mot22=4;


void setup() {
// put your setup code here, to run once:


Serial.begin(9600);
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(mot11,OUTPUT);
pinMode(mot12,OUTPUT);
pinMode(mot21,OUTPUT);
pinMode(mot22,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
iv1=digitalRead(ir1);
iv2=digitalRead(ir2);
if (iv1==1 && iv2==1)
  {
   digitalWrite(mot11,HIGH);
   digitalWrite(mot12,LOW);
   digitalWrite(mot21,HIGH);
   digitalWrite(mot22,LOW); 
  }
 else if(iv1==1 && iv2==0)
 {
  digitalWrite(mot11,HIGH);
   digitalWrite(mot12,LOW);
   digitalWrite(mot21,LOW);
   digitalWrite(mot22,LOW); 
  
  }
  else if(iv1==0 && iv2==1)
 {
  digitalWrite(mot11,LOW);
   digitalWrite(mot12,LOW);
   digitalWrite(mot21,HIGH);
   digitalWrite(mot22,LOW); 
  }
  }
