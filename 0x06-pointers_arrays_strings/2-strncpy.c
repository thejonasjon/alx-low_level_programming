#include"main.h"
#include<string.h>

/**
 * _strncpy - function that copies a string.
 *
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	memset(dest, '\0', sizeof(dest));
	strncpy(dest, src, n);
	return (dest);
}
