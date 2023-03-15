#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 *
 * @tab: The array to print
 *
 * Return: nothing
*/

void print_tab(char **tab)
{
	int k;

	for (k = 0; tab[k] != NULL; ++k)
	{
		printf("%s\n", tab[k]);
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
*/

int main(void)
{
	char **tab;

	tab = strtow("      Holberton School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
