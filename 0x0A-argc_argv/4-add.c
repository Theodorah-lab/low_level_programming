#include <stdio.h>
#include <stdlib.h>
/**
*main - it adds positive numbers
*@argc: input number of arguments
*@argv: input array of arguments
*Return: returns 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int x, j, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (j = 0; argv[x][j] != '\0'; j++)
		{
			if (argv[x][j] < '0' || argv[x][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);

	return (0);
}
