#include"main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Noting
*/

void puts2(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; ++l)
	{
		if (l % 2 == 0)
			_putchar(str[l]);
	}
	_putchar('\n');
}
