#include "main.h"

/**
 * swap_int - swaps two numbers
 *
 * @a: first number to be considered
 * @b: second number to be considered
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
