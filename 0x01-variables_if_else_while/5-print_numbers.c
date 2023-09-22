#include <stdio.h>

/**
 * main - A program that prints single digits numbers
 * Return: 0 (success)
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}

	printf("\n");

	return (0);
}
