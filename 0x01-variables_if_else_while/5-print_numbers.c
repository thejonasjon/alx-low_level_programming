#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to  print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int _single_digit = 0;

	while (_single_digit <= 9)
	{
		printf("%i", _single_digit);
		++_single_digit;
	}
	printf("\n");

	return (0);
}
