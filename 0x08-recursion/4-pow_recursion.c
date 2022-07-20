#include "main.h"

/**
 * _pow_recursion - returns the value of x index y
 * @x: base.
 * @y: index
 * Return: result of the index
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
