#include "main.h"

/**
 * factorial - factorial of a given number.
 * @n: the integer number
 * Return: -1 if n < 0 and 1 if n = 0.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
