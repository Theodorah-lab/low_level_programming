#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int k;
	long int zec;
	long int l;

	k = 612852475143;
	max = -1;

	while (k % 2 == 0)
	{
		zec = 2;
		k /= 2;
	}

	for (l = 3; l <= sqrt(k); l = l + 2)
	{
		while (k % l == 0)
		{
			zec = l;
			k = k / l;
		}
	}

	if (k > 2)
		zec = k;

	printf("%ld\n", zec);

	return (0);
}
