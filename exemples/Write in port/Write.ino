#include <SerialPro.h>

// Commands SerialPro::write = print in serial, SerialPro::ON = open serial port, Next commands in SerialPro.cpp
// By Sasiska Mine Arduino
// UpDate 27.09.2024

void setup() {
  SerialPro::ON(9600);
  SerialPro::write("Hello !");
}

void loop() {
  SerialPro::timer(1000);
  SerialPro::write("1");
  SerialPro::timer(1000);
  SerialPro::write("2");
  SerialPro::timer(1000);
}
