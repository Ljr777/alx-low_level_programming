#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: print alphaet in lower case and then in uppercase
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	char c;
	char ch;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (ch = 'A'; ch <= 'Z'; ch++)
	       putchar(ch);
	putchar("\n");
	return (0);
}
