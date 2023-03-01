#include"main.h"
#include <stdio.h> 

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 *
 * @s: argument
 *
 * Return: return 0 (success)
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
