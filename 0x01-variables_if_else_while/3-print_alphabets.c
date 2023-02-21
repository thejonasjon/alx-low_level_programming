#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	/*prints alphabet a to z lowercase*/
	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}

	/*print alphabet A to Z uppercase*/
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		++ALPH;
	}
	putchar('\n');

	return (0);
}
