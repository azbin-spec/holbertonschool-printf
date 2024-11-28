#include "main.h"

/**
 * print_str - Fonction that print a string
 * @str: a string
 */

void print_str(const char *str)
{
	int x;
<<<<<<< HEAD
=======
	const char *n = NULL;
>>>>>>> e1e8ace4d32ec1077535dcc57387499b9ca0e2b0

	if (str != NULL)
	{
		for (x = 0; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
	}
<<<<<<< HEAD
}
=======
	else if (str == NULL)
	{
		_putchar(*n);
	}
}

>>>>>>> e1e8ace4d32ec1077535dcc57387499b9ca0e2b0
