#include "telegraph.h"
const int BAUD_RATE = 9600;
const int OUTPUT_PIN = 12;
const int DIT_LENGTH = 100;
const int DELAY = 2000;
const char* MESSAGE = "Hello, world!";

Telegraph telegraph(OUTPUT_PIN, DIT_LENGTH);

void setup() {
  Serial.begin(BAUD_RATE);
}

void loop() {
  telegraph.send_message(MESSAGE);
  delay(DELAY);
}

