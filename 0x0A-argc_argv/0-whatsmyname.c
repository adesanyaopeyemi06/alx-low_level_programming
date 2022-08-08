#include <stdio.h>

/**
 * main - this is a function that prints its name
 * @argc: argc parameter
 * @argv: an array of a listed command
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
