#ifndef SERIALPRO_H
#define SERIALPRO_H

#include <Arduino.h>


class SerialPro {
 public:
  // Инициализирует Serial с заданными параметрами
  static void ON(unsigned long baudRate = 115200, uint8_t config = SERIAL_8N1);

  // Отправляет строку с новой строкой
  static void writeln(const String& str);

  // Отправляет строку
  static void write(const String& str);

  static void timer(unsigned long Time);

  // ... остальные функции (print(), println() для различных типов данных) ...

  // Проверяет наличие данных в буфере Serial
  static bool avail();

  // Возвращает символ из буфера Serial
  static char read();

  // Очищает буфер Serial
  static void Clear();

  // Возвращает строку из буфера Serial
  static String readString();

  // Возвращает строку из буфера Serial до заданного символа
  static String readStringUntil(char terminator);
};

#endif
