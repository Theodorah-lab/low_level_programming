#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return:int
 */
int factorial(int k)
{
	int y;

	if (k == 0)
	{
		return (1);
	}
	else if (k < 0)
	{
		return (-1);
	}
	else
	{
		y = k * factorial(k - 1);
	}
			return (y);

}
