#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: integer for which the times table will be printed
 *
 * Description: prints the times table
 *
 * Return: void
 */

void print_times_table(int f)
{
	int row, column, product;

	if (f >= 0 && f < 15)
	{
		for (row = 0; row <= f; row++)
		{
			for (column = 0; column <= f; column++)
			{
				product = row * column;

				if (column == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
