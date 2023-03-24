#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - determines if uppercase or not
 *@c: alphabet
 * Return: 1 if uppercase
 * and 0 if uppercase
 */

int _isupper(int c)
{

	if (c >= 64 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
