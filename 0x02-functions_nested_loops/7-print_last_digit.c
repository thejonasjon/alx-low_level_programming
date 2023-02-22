#include"main.h"

/**
 * print_last_digit - Function to print last digit
 * 			of a number
 *@n: argument given to print last number
 *@last_digit: placeholder for last digit from n
 * 
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
