#include"main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 * Description: function that prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int _times, ch;

	for (_times = 0; _times < 10; ++_times)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
