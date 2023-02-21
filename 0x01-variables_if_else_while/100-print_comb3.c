#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print all possible different
 *              combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int first_digit = 0, second_digit = 1;

	while (first_digit < 9)
	{
		while (second_digit < 10)
		{
			if (first_digit != second_digit)
			{
				putchar(first_digit);
				putchar(second_digit);

				if (first_digit + second_digit != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++second_digit;
		}
		++first_digit;
	}
	putchar('\n');

	return (0);
}
