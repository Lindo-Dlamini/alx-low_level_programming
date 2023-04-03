#include "main.h"

/**
 *_memset - Entry point
 *@s: source string
 *@b: value to be added
 *@n: The number of bytes to be added
 *Return: returns the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
