#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @g: g is an integer
 *
 * Return: 1 (if positive), 0 (if zero), -1 (if negative)
 */

int print_sign(int g)
{
	if (g > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (g < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
