#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of the argument
 * Return: 0 as default
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
