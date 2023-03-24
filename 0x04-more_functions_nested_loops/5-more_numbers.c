#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * more_numbers - prints numbers 0 to 9
 *
 * Return: 0 (always 0)
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
	char n;

	for (n = '0' && n <= '14'; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');
	i++;
	}
}
