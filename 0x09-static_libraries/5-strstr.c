#include"main.h"

/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: first argument
 * @needle: second argument
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}