Project: _printf
This repository contains a custom implementation of the _printf() function in C, created as part of the Low-level Programming and Algorithm curriculum at Holberton School. The function mimics the behavior of the standard printf(), enabling formatted output with various specifiers.

Overview
The _printf() function processes a format string and arguments to produce formatted output. It supports several specifiers, such as %c, %s, %d, %i, and %%, among others. The implementation is modular and extensible, allowing additional specifiers to be added as needed.

Compilation & Style
Compiled on Ubuntu 20.04 LTS using:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
Adheres to the Betty coding style, verified with betty-style.pl and betty-doc.pl.
Authorized Functions
The project uses the following standard functions and macros:

write, malloc, free
va_start, va_end, va_copy, va_arg
File Structure
Core implementation in _printf.c.
Specifier handling functions for %c, %s, %d, %i, and %% in separate modular files.
A header file, main.h, defines function prototypes and structures.
Features
Handles formatted output for characters, strings, integers, and percentages.
Modular and maintainable design.
Extensible for new specifiers.
Notes
This implementation is a simplified version of printf() and follows strict project guidelines, including constraints on functions, global variables, and coding style.
