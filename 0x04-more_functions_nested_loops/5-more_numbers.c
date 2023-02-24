#include "main.h"

/**
 * more_numbers - function that prints 10
 * times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int n, i;

	for (n = 1; n <= 10; ++n)
	{
		for (i = 0; i <= 14; ++i)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
