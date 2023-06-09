#include <stdio.h>

/**
 * main - returns the number of arguments
 * @argc: the number of arguments
 * @argv: the array of the argument
 * Return: Number of arguments
 * except for the null byte.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
