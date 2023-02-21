#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int _digit = 48;

	while (_digit <= 102)
	{
		putchar(_digit);

		/*jump after 9 to 96*/
		if (_digit == 57)
			_digit += 39;
		++_digit;
	}
	putchar('\n');

	return (0);
}
