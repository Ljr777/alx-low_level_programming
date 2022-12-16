#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to check
 *
 * Return: 1 (is uppercase) OR
 * 0 (is otherwise)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
