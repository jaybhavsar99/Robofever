#ifndef robofever_h
#define robofever_h
#include "Arduino.h"




class robofever{ 



private:


int trigPin;
int echoPin ;
int ir1;
int ir2;
int mot11;
int mot12;
int mot21;
int mot22;
int irv1;
int irv2;
int distance;  
int duration;
char getdata;


public:
robofever();
void pinsetup();

void forward();
void backward();
void left();
void right();
float operation();
int ir1operation();
int ir2operation();
char bluetoothoperation();
};
#endif