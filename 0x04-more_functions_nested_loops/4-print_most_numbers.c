#include "main.h"

/**
 * print_most_numbers - print numbers 0-9, except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 52)
			continue;
		_putchar(num + 48);
	}
	putchar('\n');
}
