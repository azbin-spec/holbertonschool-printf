#include "main.h"

/**
 * get_specifier - Function that checks for the right specifier
 * @format: the string
 * @args: a list
 * Return: the lengh, the function
 */

int get_specifier(const char format, va_list args)
{
	int x;
	specifier_t spe[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_modulo},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL},
	};
		x = 0;
		while (spe[x].specifier)
		{
			if (format == spe[x].specifier)
			{
				return (spe[x].f(args));
			}
			x++;
		}
		_putchar('%');
		_putchar(format);
		return (2);
}
