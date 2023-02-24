#include"main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int n;
	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n);
	}
	_putchar('\n');
}
