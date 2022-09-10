#include <stdio.h>

/**
 * main - assign a random number to the variable and each time it is executed
 * prints the last digit of the number 
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
