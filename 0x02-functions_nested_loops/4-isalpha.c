#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - determines if letter or not
 *@c: alphabet to be tested
 * Return: 1 if alphabet
 * and 0 if not
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 || c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
