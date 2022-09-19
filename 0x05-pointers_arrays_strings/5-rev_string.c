#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;

	char tmp;

	while (i > j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
}
