#include "main.h"

/**
 *leet - changes specific characters
 *
 *@src: provides source of string
 *Return: Changed alphabets
 */

char *leet(char *src)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (src[i] == a[j])
			src[i] = b[j];
		}
	}
	return (src);
}
