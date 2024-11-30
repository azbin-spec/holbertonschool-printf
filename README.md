




![429641439_792522079563968_5846022648137048441_n](https://github.com/user-attachments/assets/7dd3c029-0fd5-4651-98fc-9fd3c7285fb8)






# Project Printf 🎉

This repository contains a custom implementation of the _printf() function in C, created as part of the Low-level Programming and Algorithm curriculum at Holberton School 🏫. The function mimics the behavior of the standard printf(), enabling formatted output with various specifiers.

# Overview 📋

The _printf() function processes a format string and arguments to produce formatted output. It supports several specifiers, such as %c, %s, %d, %i, and %%, among others. The implementation is modular and extensible, allowing additional specifiers to be added as needed. 🔧

#Compilation & Style ⚙️

[gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c]()

All your files will be compiled on Ubuntu 20.04 LTS 🖥️ using gcc, with the options:

 `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c `
Your code should use the Betty style ✍️. It will be checked using betty-style.pl and betty-doc.pl.


# Requirements 
## General

• Allowed editors: vi, vim, emacs 📝

• All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options: 🖥️

• You are not allowed to use global variables 🚫

• Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl 📚

• In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples 🔧

• The prototypes of all your functions should be included in your header file called main.h 📑

• No more than 5 functions per file 📂

# Authorized Functions 🆗
## Authorized functions and macros:

• write (man 2 write) ✉️

• malloc (man 3 malloc) 🏗️

• free (man 3 free) 💸

• va_start (man 3 va_start) 🏁

• va_end (man 3 va_end) 🏁

• va_copy (man 3 va_copy) 🔄

• va_arg (man 3 va_arg) 🧳

• Function Prototypes 🛠️

# Function Prototypes 🛠️

• int _putchar(char c);

• int _printf(const char *format, ...);

• int specifier(char c, va_list args);

• int (*get_op_function(char specifier))(va_list);

• int print_char(va_list args);

• int print_string(va_list args);

• int print_percent(va_list args);

• int print_percent(va_list args);

• int print_integer(va_list args);

# File Descriptions 📁

• _printf - Produces formatted output 🎯.

• _putchar - Writes the character c to stdout 🖋️.

• get_op_function - Returns a function corresponding to a specifier 🔍.

• op_functions.c - Contains the functions print_char, print_str, and print_pct for printing character, string, and % respectively 💬.

• struct op(main.h) - Structure to map a specifier to its function 🔄.

# Flowchart 

![Capture_decran_2024-11-30_203139](https://github.com/user-attachments/assets/353757e9-25ce-4c82-9f4f-b9a9f0929fbf)

