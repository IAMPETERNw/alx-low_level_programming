#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	putchar('\n');
	return (0);
}
