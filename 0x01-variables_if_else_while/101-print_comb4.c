#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Numbers must be separated by ',' and followed by a space
 * The combinations of digits must be separated by a coma followed by a space
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 *
 * Return: 0
 */
int main(void)
{
	int hundreds, tens, ones;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hundreds != 7 || tens != 8 || ones != 9)
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
