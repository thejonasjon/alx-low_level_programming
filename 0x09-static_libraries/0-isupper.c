#include"main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character
 *
 * @c: argument for check
 *
 * Return: 1 if its uppercase, else 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
