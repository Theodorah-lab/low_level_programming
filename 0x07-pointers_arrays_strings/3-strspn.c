/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int m, n, f;

	m = 0;
	while (s[m] != '\0')
	{
		n = 0;
		f = 1; /*flag status*/
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
			{
				f = 0; /*success*/
				break;
			}
			n++;
		}
		if (f == 1)
			break;
		m++;
	}

	return (m);
}
