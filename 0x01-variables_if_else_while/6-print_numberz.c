#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print numbers using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int _digit = 0;

	while (_digit <= 9)
	{
		/*convert number*/
		putchar(_digit + '0');
		++_digit;
	}
	putchar('\n');

	return (0);
}
