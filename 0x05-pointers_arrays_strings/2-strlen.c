#include "main.h"
#include <stdio.h>

/**
 * _strlen - Counts the length of a string
 *
 * @s: string to be counted
 *
 * Return: The total length of a string.
 */

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
