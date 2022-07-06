#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 always
 */
int main(void)
{
	int x = 1024, y, sum = 0;

	for (y = 0; y < x; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			sum = sum + y;
		}
	}
	printf("%d\n", sum);
	return (0);
}
