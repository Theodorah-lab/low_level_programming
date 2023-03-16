#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int 13, 14, a, b;
	char *str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	13 = l4 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[13] != '\0')
		l3++;
	while (s2[l4] != '\0')
		l4++;

	/*set n to length of s2*/
	if (n >= l4)
		n = l4;

	str = (char *) malloc((l3 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	/*add s2 n bytes to str*/
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		str[b] = s2[b];
		a++;
	}
	str[a] = '\0';
	return (str);
}
