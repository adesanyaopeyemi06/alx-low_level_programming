#include <stdio.h>

/**
 * main - print first 50 fibonacci
 *
 * starting with 1 and 2
 *
 * Return: 0 always
 */
int main(void)
{
	long int a, x = 1, y = 2, sum = 0, tSum = 0;

	for (a = 0; a < 49; a++)

	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tSum = tSum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", tSum);
	return (0);
}
