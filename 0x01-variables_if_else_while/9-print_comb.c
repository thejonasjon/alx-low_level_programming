#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print 0, 2, 3, .... 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int _digit = 0;

	while (_digit <= 9)
	{
		putchar(_digit);

		if (_digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		++_digit;
	}
	putchar('\n');

	return (0);
}
