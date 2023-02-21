#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to  print a to z in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		--alph;
	}
	putchar('\n');

	return (0);
}
