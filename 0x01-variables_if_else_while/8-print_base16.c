#include <stdio.h>

/**
 * main - entry point, hexadecimal
 *
 * Return: 0 (Still returning 0 as success code)
 */

int main(void)
{
	int num;
	char lett;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (lett = 'a'; lett <= 'f'; lett++)
		putchar(lett);
	putchar('\n');
	return (0);
}

