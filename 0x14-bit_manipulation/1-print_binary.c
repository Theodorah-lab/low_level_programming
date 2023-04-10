#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int m)
{
	unsigned long int temp;
	int shifts;

	if (m == 0)
	{
		printf("0");
		return;
	}

	for (temp = m, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((m >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
