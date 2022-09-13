#include "main.h"

/**
 * _isalpa - checks if a character is alphabetic.
 *
 * Return: 1 if character is letter, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
