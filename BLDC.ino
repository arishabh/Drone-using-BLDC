#include<Servo.h>

Servo esc;
int val;

void setup() {
  pinMode(A0, INPUT);
  esc.attach(8);
  esc.write(30);
  delay(500);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(A0);
  Serial.print("Pot Value: ");
  Serial.println(val);
  val=map(val, 0, 1023, 40, 130);
  Serial.print("Drone Speed Value: ");
  Serial.println(val);
  esc.write(val);
}
