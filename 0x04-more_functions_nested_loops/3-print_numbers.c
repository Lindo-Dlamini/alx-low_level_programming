#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: 0 (always 0)
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
}
