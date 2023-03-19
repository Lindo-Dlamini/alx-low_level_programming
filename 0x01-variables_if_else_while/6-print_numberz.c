#include <stdio.h>

/**
 * main - we are displaying numbers
 *
 * Return: 0 (We are asked to return 0)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9';)
	{
	putchar(num);
	num++;
	}
	putchar('\n');
	return (0);
}
