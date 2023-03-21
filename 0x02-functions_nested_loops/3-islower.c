#include <stdio.h>
#include <ctype.h>

/**
 * _islower - determines if lowercase or not
 *
 * Return: 1 or 0 (depending if lowercase or not)
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
