#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @f: starting integer
 *
 * Description: prints all natural number from f - 98
 *
 * Return: void
 */

void print_to_98(int f)
{
	if (f < 98)
	{
		while (f < 98)
		{
			printf("%d, ", f);
			f++;
		}
	}
	else if (f > 98)
	{
		while (f > 98)
		{
			printf("%d, ", f);
			f--;
		}
	}
	printf("98\f");
}
