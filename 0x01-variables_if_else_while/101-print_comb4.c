#include <stdio.h>

/**
 * main - Entry point of a program for three digits
 *
 * Return: 0 (success)
 */
int main(void)
{
	int firstdigit;
	int seconddigit;
	int thirddigit;

	for (firstdigit = 0; firstdigit <= 7; firstdigit++)
	{
		for (seconddigit = firstdigit + 1; seconddigit <= 8; seconddigit++)
		{
			for (thirddigit = seconddigit + 1; thirddigit <=  9; thirddigit++)
			{
				putchar(firstdigit + '0');
				putchar(seconddigit + '0');
				putchar(thirddigit + '0');

				if (firstdigit != 7 || seconddigit != 8 || thirddigit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
