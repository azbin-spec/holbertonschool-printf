# Project Printf

This repository contains a custom implementation of the _printf() function in C, created as part of the Low-level Programming and Algorithm curriculum at Holberton School. The function mimics the behavior of the standard printf(), enabling formatted output with various specifiers.

# Overview

The _printf() function processes a format string and arguments to produce formatted output. It supports several specifiers, such as %c, %s, %d, %i, and %%, among others. The implementation is modular and extensible, allowing additional specifiers to be added as needed.

# Compilation & Style

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
Compiled on Ubuntu 20.04 LTS using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
You're code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

## authorized functions 
Authorized functions and macros:

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

# Function prototypes
All function prototypes used to compile _printf() are included in the header file main.h:

int _putchar(char c);
int _printf(const char *format, ...);
int specifier(char c, va_list args);
int (*get_op_function(char specifier))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);

# File Descriptions

•_printf - Produces formatted output.
•_putchar - writes the character c to stdout
•get_op_function - Returns a function corresponding to a specifier
•op_functions.c: - contains the functions print_char, print_str and print_pct for the case of printing character, string and '%'
•struct op(main.h) - structure to map a specifier to its function

![Screenshot_2024-11-27_132240](https://github.com/user-attachments/assets/f25d17c7-5d6a-4211-ba4e-29ae822c6e93)
