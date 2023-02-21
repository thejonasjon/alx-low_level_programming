#include<unistd.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program that print a quot
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	write(1, quote, strlen(quote));

	return (1);
}
