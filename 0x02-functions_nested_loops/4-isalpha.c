#include"main.h"

/**
 * _isalpha(int c) - checks if c is a letter
 *
 * c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (isalpha(c) !=  0)
		return (1);
	return (0);
}
