#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @g: g is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int g)
{
	if (g >= 'a' && g <= 'z')
	{
		return (1);
	}
	else if (g >= 'A' && g <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
