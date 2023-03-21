#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 lines of the alphabets
 *
 * Return: Alphabets I guess
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar (j);
	}
	_putchar ('\n');
	i++;
}
}
