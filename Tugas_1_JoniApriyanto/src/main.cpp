#include <Arduino.h>

#define Led_1Board 2
#define Led_2Hijau 4
#define Led_3Putih 18
#define Led_4Merah 21



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (Led_1Board, OUTPUT);
pinMode (Led_2Hijau, OUTPUT);
pinMode (Led_3Putih, OUTPUT);
pinMode (Led_4Merah, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available()) {
char data=Serial.read();

if (data=='1') {
  digitalWrite(Led_1Board, HIGH);
  delay(2000);
  digitalWrite(Led_1Board, LOW);
  }

if (data=='2') {
  digitalWrite(Led_2Hijau, HIGH);
  delay(2000);
  digitalWrite(Led_2Hijau, LOW); 
  }
  
if (data=='3') {
  digitalWrite(Led_3Putih, HIGH);
  delay(2000);
  digitalWrite(Led_3Putih, LOW);
  }

if (data=='4') {
  digitalWrite(Led_4Merah, HIGH);
  delay(2000);
  digitalWrite(Led_4Merah, LOW);
  }
}

}