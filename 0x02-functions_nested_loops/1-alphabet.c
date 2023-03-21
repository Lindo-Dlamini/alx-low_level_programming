#include "main.h"
#include <stdio.h>

/**
 *print_alphabet - prints all alphabets
 *
 *Return: 0 (success code)
 */

void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z';)
	{
		_putchar(lett);
		lett++;
	}
	_putchar('\n');

}
