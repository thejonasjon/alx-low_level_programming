#include"main.h"
#include<stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first argument
 * @b: second argument
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
