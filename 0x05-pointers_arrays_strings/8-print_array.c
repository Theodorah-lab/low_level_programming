#include"main.h"

/**
 * print_array - prints n elements of an array of integers.
 *
 * @n: elements parameter input
 * @a: string parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; ++k)
	{
		if (k != (n - 1))
			printf("%d, ", a[k]);
		else
			printf("%d", a[k]);
	}
	printf("\n");
}
