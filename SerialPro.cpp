#include "SerialPro.h"


void SerialPro::ON(unsigned long baudRate, uint8_t config) {
  Serial.begin(baudRate, config);
}

void SerialPro::writeln(const String& str) {
  Serial.println(str);
}

void SerialPro::write(const String& str) {
  Serial.print(str);
}

// ... остальные реализации функций ...

bool SerialPro::avail() {
  return Serial.available();
}
void SerialPro::timer(unsigned long Time) {
  delay(Time);
}

char SerialPro::read() {
  return Serial.read();
}

void SerialPro::Clear() {
  Serial.flush();
}

String SerialPro::readString() {
  return Serial.readString();
}

String SerialPro::readStringUntil(char terminator) {
  return Serial.readStringUntil(terminator);
}
