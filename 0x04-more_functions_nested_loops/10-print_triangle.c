#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: parameters
 * Return: 0 always
 */

void print_triangle(int size)
{
	int i = o;
	int j;
	int n = size -1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
