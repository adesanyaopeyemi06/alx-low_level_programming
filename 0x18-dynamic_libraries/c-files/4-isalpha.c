#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 * @c: A character to be checked
 * Return: returns 1 if true or 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
