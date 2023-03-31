#include "main.h"

/**
 *string_toupper - coverts string to uppercase
 *
 *@src: the string to be converted
 *
 *Return: Uppercase leter
 */

char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	if (src[i] >= 97 && src[i] <= 122)
		{
		src[i] = src[i] - 32;
			}
	}
	return (src);
}
