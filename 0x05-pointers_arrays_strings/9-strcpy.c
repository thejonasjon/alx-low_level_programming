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
	strcpy(dest, src);
	printf("%s\n", src);
	printf("%s\n", dest);
}
