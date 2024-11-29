#include "main.h"

/**
 * print_char - Fonction that prints a character
 * @args: a list
 * Return: an integer
 */

int print_char(va_list args)
{
	char character = va_arg(args, int);

	return (_putchar(character));
}
