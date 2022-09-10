#include <stdio.h>

/**
 * main -  print alphabet in lower case, excluding q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char latter;

	for (letter = 'a'; letter <= z; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
