#include <Servo.h>

Servo serv;
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int pinservo = 5;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  serv.attach(5);
}

void loop() {
  serv.write(0);
  delay(1000);
  serv.write(180);
  delay(1000);
  
  digitalWrite(ledPin1, HIGH); 
  delay(100); 
  digitalWrite(ledPin1, LOW); 
  delay(100);
  digitalWrite(ledPin2, HIGH); 
  delay(100); 
  digitalWrite(ledPin2, LOW); 
  digitalWrite(ledPin3, HIGH); 
  delay(100);
  digitalWrite(ledPin3, LOW);  
}