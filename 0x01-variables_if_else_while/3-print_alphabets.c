#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase and then upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		putchar(e);
	}

	for (e = 'A'; e <= 'Z'; e++)
	{
		putchar(e);
	}

	putchar('\n');

	return (0);
}
