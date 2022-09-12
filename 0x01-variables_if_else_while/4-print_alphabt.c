#include <stdio.h>

/**
 * main -  print alphabet in lower case, excluding q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char latter;

	for (latter = 'a'; latter <= z; latter++)
	{
		if (latter != 'e' && latter != 'q')
			putchar(latter);
	}

	putchar('\n');

	return (0);
}
