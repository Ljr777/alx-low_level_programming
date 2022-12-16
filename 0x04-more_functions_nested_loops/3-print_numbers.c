#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9, then new line
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
