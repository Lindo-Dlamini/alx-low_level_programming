#include "main.h"

/**
 *_strstr - Checks for a specific string
 *@haystack: string to be looked from
 *@needle: What we are looking for
 *Return: The substring if found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	if (*haystack == *needle)
	{
		return (needle);
	}
		haystack++;
	}

	if (*haystack == *needle)
	{
	return (needle);
	}
	return (NULL);
}
