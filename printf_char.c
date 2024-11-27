#include "main.h"

/**
 * printf_char - line to print a character.
 * *@vam arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
