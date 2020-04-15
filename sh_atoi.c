#include "header.h"

/**
 * _atoi - convert a string to an integer.
 * @s: Given string
 *
 * Return: int or 0
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}

	if (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 - (s[i] - '0');
			i++;
		}
	}
	sign = sign * -1;
	return (sign * result);
}
