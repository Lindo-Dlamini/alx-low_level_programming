#include "main.h"

/**
 * factorial - calculates the factorial of any given number
 *
 * @n: The value which factorial must be calculated
 *
 * Return: the factorial of a number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
