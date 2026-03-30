
#include <Servo.h>

const int TRIG = 9; //Ultrasonic 1
const int ECHO = 8;
const int TRIG2 = 5; //Ultrasonic 2
const int ECHO2 = 7;
const int Pitch = 6; //shooter pitch
const int balldrop1 = 11; //servo1 for balldrop
const int balldrop2 = 10; //servo 2 for balldrop
const int Left = 4; //pin to go left (movement)
const int Right = 2; //pin to go Right (movement)
const int Fly = 3;  //Flywheel (can adjust speed)
//Servo setup
Servo bd1;
Servo bd2;
Servo p;

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO,INPUT);
  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2,INPUT);
  p.attach(Pitch);
  bd1.attach(balldrop1); 
  bd2.attach(balldrop2); 
  pinMode(Left, OUTPUT);
  pinMode(Right, OUTPUT);
  pinMode(Fly, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //reading
  Serial.read();




}
