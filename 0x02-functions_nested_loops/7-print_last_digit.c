#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 *
 * @n: number to be evaluated
 * Return: last
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -(last);
	}
		return (last);
}


