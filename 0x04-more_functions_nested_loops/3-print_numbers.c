#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int f;

	for (f = 0; f < 10; f++)
	{
		_putchar(f + '0');
	}

	_putchar('\n');
}
