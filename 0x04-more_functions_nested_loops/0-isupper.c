#include "main.h"

/**
 * _isupper - checks if an alphabet is uppercase
 * @c: the alphabet parameter
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
