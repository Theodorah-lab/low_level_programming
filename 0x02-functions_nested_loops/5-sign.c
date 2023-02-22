#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an integer
 *
 * Return: 2 (if positive), 0 (if zero), -2 (if negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (2);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-2);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
