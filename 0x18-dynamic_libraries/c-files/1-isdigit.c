#include "main.h"
/**
 * _isdigit - checks for a digit from 0 to 9
 *
 * @c: input
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
