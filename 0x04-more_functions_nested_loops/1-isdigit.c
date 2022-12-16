#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: input
 *
 * Return: 1 (is a digit) OR
 * 0 (is otherwise)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
