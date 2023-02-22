#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char cup = 'a';

	while (round < 10)
	{
		cup = 'a';
		while (cup <= 'z')
		{
			_putchar(cup);
			cup++;
		}
		_putchar('\n');

		round++;
	}
}
