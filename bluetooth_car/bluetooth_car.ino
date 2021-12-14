const int mot11=7;
const int mot12=6;
const int mot21=5;
const int mot22=4;
char getdata;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0)
    {
      
      char getdata = Serial.read();
      Serial.println("bluetooth:");
      Serial.println(getdata);
      if(getdata=='F')
      {
        digitalWrite(mot11,HIGH);
        digitalWrite(mot12,LOW);
        digitalWrite(mot21,HIGH);
        digitalWrite(mot22,LOW);
  
      }
      else if(getdata=='B')
      {
        digitalWrite(mot11,LOW);
        digitalWrite(mot12,HIGH);
        digitalWrite(mot21,LOW);
        digitalWrite(mot22,HIGH);
        
        
        }
        else if(getdata=='L')
      {
        digitalWrite(mot11,LOW);
        digitalWrite(mot12,HIGH);
        digitalWrite(mot21,HIGH);
        digitalWrite(mot22,LOW);
        
        
        }
        else if(getdata=='R')
      {
        digitalWrite(mot11,HIGH);
        digitalWrite(mot12,LOW);
        digitalWrite(mot21,LOW);
        digitalWrite(mot22,HIGH);
        
        
        }
        else if(getdata=='S')
      {
        digitalWrite(mot11,LOW);
        digitalWrite(mot12,LOW);
        digitalWrite(mot21,LOW);
        digitalWrite(mot22,LOW);
        
        
        }
        
      
      
    }

}
