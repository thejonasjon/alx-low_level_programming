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

	for (_digit = 48; _digit < 58;  ++_digit)
	{
		putchar(_digit);

		if (_digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
