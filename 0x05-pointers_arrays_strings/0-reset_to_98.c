#include "main.h"

/**
 * reset_to_98 - updates the value of the pointer to an int to 98
 * @n: parameter
 */

void reset_to_98(int *n)
{
	int a;

	n = &a;
	*n = 98;
	_putchar(a);
}
