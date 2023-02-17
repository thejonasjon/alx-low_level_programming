#include<unistd.h>

/* C program that print a quote */

int main(void)
{
	char quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

	write(1, quote, strlen(quote));

	return 1;
}
