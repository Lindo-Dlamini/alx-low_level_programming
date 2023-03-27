#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the string provided
 *
 * @str: The string to be printed
 * Return: always 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
