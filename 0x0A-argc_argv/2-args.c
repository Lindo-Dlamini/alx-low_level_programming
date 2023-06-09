#include <stdio.h>

/**
 * main - prints every array of the argument
 * @argc: arguments counter
 * @argv: all arrays to print
 * Return: Zero
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
			return (0);
}
