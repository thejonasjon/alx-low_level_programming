#include"main.h"
#include<string.h>

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: first argument
 * @src: second argument
 *
 * Return 0
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	if (src[j] != '\0')
	{
		strcat(dest, src);
	}
	return (dest);
}
