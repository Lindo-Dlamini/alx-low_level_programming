#include <stdio.h>

/**
 * main - entry point, we are displaying combinations
 *
 * Return: 0 (Success code is 0)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
}
	putchar ('\n');
return (0);
}
