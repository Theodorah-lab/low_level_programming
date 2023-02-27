#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int k, n;

	for (k = 0; str[k] != '\0'; ++k)
		;

	if (k % 2 == 0)
	{
		for (n = k / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((k - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
