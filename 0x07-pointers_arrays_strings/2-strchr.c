#include "main.h"
#include <stdio.h>

/**
 * _strchr - string character
 * @s: given string
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
