/*
Created by: PIX515E
Last Edited: 5/31/2013 12:18 PM CST
This file is was created for testing buttons/input and for later use in other projects.
*/

const int btns1 = A0;
const int btns2 = A1;

int val1 = 0;
int val2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(btns1, INPUT);
  pinMode(btns2, INPUT);
}

void loop() {
  val1 = analogRead(btns1);
  val2 = analogRead(btns2);
  Serial.print("Value of btns1: ");
  Serial.println(val1);
  Serial.print("Value of btns2: ");
  Serial.println(val2);
  delay(2000);
}
