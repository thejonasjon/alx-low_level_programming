#include"main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * @c: The character to check
 *
 * Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	/*function islower to check for char*/
	if (islower(c))
		return (1);
	return (0);
}
