#include "main.h"

/**
 * _pow_recursion - calculates the power of a number to a
 * different number
 *
 * @x: base
 * @y: exponent
 *
 * Return: the exponential calculation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	return (x * (_pow_recursion(x, y - 1)));
}
