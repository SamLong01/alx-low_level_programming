#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 * @c: integer being checked by function
 * Return: 0 always
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
