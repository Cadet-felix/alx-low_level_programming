/*
 * file: 101-quote.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - print "and that piece of art is useful" -Dora Korpar, 2015-10-19",
 * fellowed by new line, to standard error.
 *
 * Return: alway 1.
 */
int main(void)
{
	write(2,
			"and that piece of art is useful\" -Dora Korpar, 2015-9-19\n",
			59);
	return (1);
}
