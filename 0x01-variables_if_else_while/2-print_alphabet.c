#include <stdio.h>

/**
 * main - we are displaying alphabets
 *
 * Return: 0 (We are asked to return 0)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z';)
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
