#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int l, m, n, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*find length of vector + '\0' which makes it a 2d array*/
	length = 0;
	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m] != '\0'; m++)
			length++;
		length++;
	}

	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	n = 0;
	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m] != '\0'; m++)
		{
			str[n] = av[l][m];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	str[n] = '\0';

	return (str);
}
