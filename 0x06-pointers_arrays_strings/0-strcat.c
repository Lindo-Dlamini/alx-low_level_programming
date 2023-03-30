#include "main.h"

/**
 **_strcat - appends two strings
 *
 *@dest: First string
 *@src: second string
 *
 *Return: A new sentence
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < countsrc ; i++)
	{
		dest[countdest + i] = src[i];
	}
	return (dest);
}
