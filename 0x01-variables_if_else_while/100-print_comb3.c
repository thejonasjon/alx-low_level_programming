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
	int first_digit, second_digit;

	for (second_digit = 48; first_digit <= 56; first_digit++)
	{
		for (second_digit = 49; second_digit <= 57; second_digit++)
		{
			if (second_digit > first_digit)
			{
				putchar(first_digit);
				putchar(second_digit);
				if (first_digit != 56 || second_digit != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
