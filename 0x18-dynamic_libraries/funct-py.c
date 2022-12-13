#include <stdio.h>
#include "clib.h"

/**
 * add - Add two integers
 * @a: First integer
 * @b: second interger
 *
 * Return: The addition
 */
signed int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtract second integer from the first integer
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
signed int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
signed int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides first integer by the second integer
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
signed int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - find the modulus
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
signed int mod(int a, int b)
{
	return (a % b);
}
