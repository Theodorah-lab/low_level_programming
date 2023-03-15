#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 *                it with a specific char.
 *
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: array @a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		a[k] = c;

	return (a);
}
