//Claw-Arm Program - Jeevan Sanchez and Rababb Pannu
//Function - Controls a robtoic arm powered by servo motors and operated by a potentiometer and thumbstick.

#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

//Creates variables for movement devices
int YAxis = 1;
int XAxis = 2;
int potpin = 0;
int val;

void setup() {
 Serial.begin(9600);
 pinMode(XAxis, INPUT);
 myservo1.attach(8);
 pinMode(YAxis, INPUT); 
 myservo2.attach(9);
 myservo3.attach(10);
}
void loop() {
  
//Claw movement
  val = analogRead(potpin);
  val = map(val, 0, 1023, 0, 180);
  myservo3.write(val);
  delay(15); 
  
//X-Axis movement (left/right)
 int X=analogRead(XAxis);
 X=X*0.1756;
 X=180-X;
 myservo1.write(X);
 
//Y-Axis movement (up/down)
 int Y=analogRead(YAxis);
 Y=Y*0.1466;
 myservo2.write(Y);
}
