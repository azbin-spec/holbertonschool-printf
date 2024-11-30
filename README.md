Project Printf

This repository contains a custom implementation of the _printf() function in C, created as part of the Low-level Programming and Algorithm curriculum at Holberton School. The function mimics the behavior of the standard printf(), enabling formatted output with various specifiers.

Overview

The _printf() function processes a format string and arguments to produce formatted output. It supports several specifiers, such as %c, %s, %d, %i, and %%, among others. The implementation is modular and extensible, allowing additional specifiers to be added as needed.

Compilation & Style

Compiled on Ubuntu 20.04 LTS using:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
Adheres to the Betty coding style, verified with betty-style.pl and betty-doc.pl.

Function prototypes
All function prototypes used to compile _printf() are included in the header file main.h:

int _putchar(char c);
int _printf(const char *format, ...);
int specifier(char c, va_list args);
int (*get_op_function(char specifier))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

File Descriptions

_printf: Handles formatted output by processing the format string and calling the appropriate functions for each specifier.
_putchar: Writes a single character to standard output using the write system call.
get_op_function: Retrieves the function pointer associated with a specific format specifier.
op_functions.c: Contains the implementation of handler functions such as print_char, print_string, and print_percent, which handle characters, strings, and literal % output, respectively.
struct op (in main.h): Defines a structure that maps format specifiers to their corresponding handler functions.

![Screenshot_2024-11-27_132240](https://github.com/user-attachments/assets/f25d17c7-5d6a-4211-ba4e-29ae822c6e93)
