#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - determines if lowercase or not
 *@c: digit to be tested
 * Return: 1 if digit
 * and 0 if not digit
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
