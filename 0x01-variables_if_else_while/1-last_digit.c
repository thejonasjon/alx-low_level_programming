#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to assign a random number to n.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, _last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	_last_digit = n % 10; /*get last digit*/

	if (_last_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, _last_digit);
	else if (_last_digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, _last_digit);
	else if (_last_digit < 6 && _last_digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, _last_digit);

	return (0);
}
