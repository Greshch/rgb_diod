#include <NanitLib.h>

const byte rLed = P4_2;
const byte gLed = P4_3;  
const byte bLed = P4_4;

void setup() {
  // put your setup code here, to run once:
  Nanit_Base_Start();
  pinMode(rLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(bLed, OUTPUT);
}

void loop() {
  ledOn(rLed, gLed, bLed, 10, 25, 50);
  ledOff(rLed, gLed, bLed, 10, 50, 25);
}

void ledOn(byte r, byte g, byte b, byte from, byte to, byte ms) {
  for (int i = from; i < to; ++i) {
    analogWrite(r, i);
    analogWrite(g, i);
    analogWrite(b, i);
    delay(ms);
  }
}

void ledOff(byte r, byte g, byte b, byte from, byte to, byte ms) {
  for (int i = from; i > to; --i) {
    analogWrite(r, i);
    analogWrite(g, i);
    analogWrite(b, i);
    delay(ms);
  }
}