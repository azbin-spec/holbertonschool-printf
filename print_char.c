#include "main.h"

/**
 * print_char - Fonction that prints a character
 * @character: a character
 */

void print_char(char character)
{
	if (character != '\0')
	{
	_putchar(character);
	}
	else
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}
}
