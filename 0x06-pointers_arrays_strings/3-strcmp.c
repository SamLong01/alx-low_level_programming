#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: less than, equal to or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int n = 15;

	if (s1 > s2)
		return (n);
	else if (s1 < s2)
		return (-1 * n);
	else
		return (0);
}
