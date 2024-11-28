#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

char _putchar(char character);
int _printf(const char *format, ...);
void print_char(char character);
void print_str(const char *str);
void print_modulo(void);
int print_integer(int num);
int print_negative(int num);

#endif
