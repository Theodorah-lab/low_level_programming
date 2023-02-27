#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, d, m, len, f, number;

	k = 0;
	d = 0;
	m = 0;
	len = 0;
	f = 0;
	number = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && f == 0)
	{
		if (s[k] == '-')
			++d;

		if (s[k] >= '0' && s[k] <= '9')
		{
			number = s[k] - '0';
			if (d % 2)
				number = -number;
			m = m * 10 + number;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
	}

	if (f == 0)
		return (0);

	return (m);
}
