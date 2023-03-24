#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - prints numbers 0 to 9
 *
 * Return: 0 (always 0)
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
	if (n != '2' && n != '4')
	{
		_putchar (n);
	}

	}
	_putchar ('\n');
}
