#include "main.h"

/**
 *_memcpy - copies some bytes from one source to another
 *@dest: the new destination.
 *@src: the old information source
 *@n: The number of bytes to be copied
 *Return: The new copied bytes.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
