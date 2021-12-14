const int trigPin = 11;
const int echoPin = 12;
const int mot11=7;
const int mot12=6;
const int mot21=5;
const int mot22=4;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
if(distance<20)
{
  digitalWrite(mot11,HIGH);
  digitalWrite(mot12,LOW);
  digitalWrite(mot21,LOW);
  digitalWrite(mot22,HIGH);
  
  }
else
{
  digitalWrite(mot11,HIGH);
  digitalWrite(mot12,LOW);
  digitalWrite(mot21,HIGH);
  digitalWrite(mot22,LOW);
  
  }
}
