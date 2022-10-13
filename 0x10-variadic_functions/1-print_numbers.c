#include "variadic_functions.h"
#include "stdio.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	if (separator != NULL)
	{
		while (i < (n - 1))
		{
			printf("%d%s", va_arg(ap, int), separator);
			i++;
		}
		printf("%d\n", va_arg(ap, int));
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
