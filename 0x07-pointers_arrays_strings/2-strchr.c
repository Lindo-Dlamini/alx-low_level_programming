#include "main.h"

/**
 *_strchr - Checks for a specific character
 *@c: character to be searched
 *@s: source to be searched
 *Return: The location of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
		s++;
	}

	if (*s == c)
	{
	return (s);
	}
	return (NULL);
}
