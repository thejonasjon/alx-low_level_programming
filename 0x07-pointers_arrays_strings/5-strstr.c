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
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
