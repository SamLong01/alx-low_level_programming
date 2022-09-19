#include <string.h>
#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @s: pointer to the string variables
 */

void puts_half(char *str)
{
	int len = strlen(s), i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putschar(s[i]);
	}
	else
	{
		for (i = len / 2 + 1; i < len; i++)
			_putschar(s[i]);
	}
	_putschar('\n');
}
