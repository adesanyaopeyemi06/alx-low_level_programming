#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1 : parameter1
 * @s2 : parameter2
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int Y;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	Y = s1[x] - s2[x];
	return (Y);
}
