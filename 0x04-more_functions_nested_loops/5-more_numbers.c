#include "main.h"

/**
 *  more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 *  Return: void
 */

void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int c;

		for (c = 0; c < 14; c++)
		{
			if (c > 9)
				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}
