#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @f: f is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int f)
{
	int last = f % 10;

	if (f < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
