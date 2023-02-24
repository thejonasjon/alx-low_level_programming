#include"main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 *		from 0 to 14
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	int n, i;

	for (n = 0; n <= 9; ++n)
	{
		for (i = 0; i <= 14; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
