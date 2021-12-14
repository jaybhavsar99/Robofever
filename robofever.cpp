#include "Arduino.h"
#include "robofever.h"


robofever::robofever(){

  
 trigPin=11;
 echoPin =12;
 mot11=7;
 mot12=6;
 mot21=5;
 mot22=4;
 ir1 = A0;
 ir2 = A1;
 }

 void robofever::pinsetup()
 {

pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(mot11,OUTPUT);
pinMode(mot12,OUTPUT);
pinMode(mot21,OUTPUT);
pinMode(mot22,OUTPUT);
pinMode(ir1, INPUT);
pinMode(ir2, INPUT);

  
  
  
  }
float robofever::operation()
{
 

digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
int distance= duration*0.034/2;
return distance;

}

void robofever::forward()
{

	digitalWrite(mot11, HIGH);
	digitalWrite(mot12, LOW);
	digitalWrite(mot21, HIGH);
	digitalWrite(mot22, LOW);
	

}

void robofever::backward()
{
	digitalWrite(mot11, LOW);
	digitalWrite(mot12, HIGH);
	digitalWrite(mot21, LOW);
	digitalWrite(mot22, HIGH);




}

void robofever::left()
{
	digitalWrite(mot11, LOW);
	digitalWrite(mot12, HIGH);
	digitalWrite(mot21, HIGH);
	digitalWrite(mot22, LOW);




}
void robofever::right()
{
	digitalWrite(mot11, HIGH);
	digitalWrite(mot12, LOW);
	digitalWrite(mot21, LOW);
	digitalWrite(mot22, HIGH);




}






int robofever::ir1operation()
{


	irv1 = digitalRead(ir1);
	return irv1;

}
int robofever::ir2operation()
{


	
	irv2 = digitalRead(ir2);

	return  irv2;

}


char robofever::bluetoothoperation()
{


	while (Serial.available() > 0)
	{

		 getdata = Serial.read();
	}

	return  getdata;

}
