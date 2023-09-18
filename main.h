#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int teste(int count);
int testChar(int count, va_list args);
int testeStr(int count, va_list args);
int _testFormat(const char *format);

#endif /* MAIN_H */
