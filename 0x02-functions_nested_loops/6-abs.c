#include "main.h"
#include <stdio.h>

/**
 * _abs - Determine the absolute value
 *
 * @a: parameter to be checked
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
		return (a);
	}
	else if (a >= 0)
	{
		a = a;
	return (a);
	}
	return (a);
}
