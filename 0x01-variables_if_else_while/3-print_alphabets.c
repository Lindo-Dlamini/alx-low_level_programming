#include <stdio.h>

/**
 * main - We ared displaying alphabets in lower case then upper case
 *
 * Return: 0 (Success code is 0)
 */

int main(void)
{
	char alpha;
	char Alphs;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	}
	for (Alphs = 'A'; Alphs <= 'Z'; Alphs++)
	{
	putchar(Alphs);
	}
	putchar('\n');
	return (0);

}
