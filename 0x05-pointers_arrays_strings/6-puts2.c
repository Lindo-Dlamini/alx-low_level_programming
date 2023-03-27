#include "main.h"
#include <stdio.h>

/**
 *puts2 - prints out characters
 *
 *@str: characters to be printed
 *Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
