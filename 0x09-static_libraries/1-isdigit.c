#include"main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 *
 * @c: argument for check
 *
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
