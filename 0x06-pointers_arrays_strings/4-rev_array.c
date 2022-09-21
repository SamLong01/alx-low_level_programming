#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer parameter
 * @n:  number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int h = n - 1;

	int i = 0, j;

	while (i < n)
	{
		j = a[h];
		a[h] = a[i];
		a[i] = j;
		h--;
		i++;
	}
}
