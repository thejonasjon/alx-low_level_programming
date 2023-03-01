#include"main.h"
#include <string.h>

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: first argument
 * @src: second argument
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char cp = strcpy(dest, src);
	printf("%s", src);
	printf("%s", cp);
	return (0);
}
