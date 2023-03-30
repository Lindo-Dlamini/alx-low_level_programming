#include "main.h"

/**
 **_strncat - appends two strings
 *@n: the number of bytes to append
 *@dest: First string
 *@src: second string
 *
 *Return: A new sentence
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int countdest = 0;
	int countsrc = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		countdest++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		countsrc++;
	}
	for (i = 0; i < n ; i++)
	{
		dest[countdest + i] = src[i];
	}
	return (dest);
}
