#include "main.h"

/**
 * _memcpy - memory copy
 * @dest: is destination memory
 * @src: is the source memory
 * @n: number of bytes to be copied
 * Return: string copird from source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
		dest[q] = src[q];
	return (dest);
}
