#include "main.h"

/**
 * print_integer - Function that prints integer
 * @num: The variable integer
 * Return: 0
 */

int print_integer(long int num)
{
	int power = 1;

	if (num != '\0')
	{
		if (num < 0)
		{
			_putchar(45);
			num *= -1;
		}
		while (num / power > 9)
		{
			power *= 10;
		}
		while (power >= 1)
		{
			_putchar(((num / power) % 10) + '0');
			power /= 10;
		}
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
	return (0);
}
