#include "main.h"
#include <string.h>

/**
 * _strncpy - two words to copy
 * @dest : parameter1
 * @src : parar=meter2
 * @n : parameter3
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
