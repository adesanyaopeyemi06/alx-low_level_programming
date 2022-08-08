#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars
 *@size: size of array.
 *@c: char to initialize array with.
 *
 *Return: NULL if it fails or Pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);

	/*If malloc returns success*/
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		ar[a] = c;
	}

	return (ar);
}
