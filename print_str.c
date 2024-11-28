#include "main.h"

/**
 * print_str - Fonction that print a string
 * @str: a string
 */

void print_str(const char *str)
{
	int x;

	if (str != NULL)
	{
		for (x = 0; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
}
