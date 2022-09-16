#include "main.h"

/**
 * _isdigit - checks if parameter is a digit
 * @c: parameter to be checked
 * Return: 1 if a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
