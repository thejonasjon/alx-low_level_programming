#include<unistd.h>
#include<stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: program that print a quot
 *
 * Return: Always 0 (Success)
*/

int main(void)
{	
// 	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
