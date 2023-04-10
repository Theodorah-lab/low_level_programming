#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int lon;

	if (b == NULL)
		return (0);

	for (lon = 0; b[lon]; lon++)
	{
		if (b[lon] != '0' && b[lon] != '1')
			return (0);
	}

	for (power = 1, total = 0, lon--; lon >= 0; lon--, power *= 2)
	{
		if (b[lon] == '1')
			total += power;
	}

	return (total);
}
