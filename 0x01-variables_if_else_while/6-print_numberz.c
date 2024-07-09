#include <stdio.h>

/**
 * main - Prints all single digits of base 10 using putchar
 *
 * Return: Always 0
 *
 * FUNCTIONALITY:
 * 1. Declare an integer variable 'digit' and initialize it to 48,
 *    which corresponds to the ASCII value of '0'.
 * 2. While 'digit' is less than or equal to 57:
 *    a. Use putchar to print the current value of 'digit'.
 *    b. Increment 'digit'.
 * 3. Print a newline character at the end.
 * 4. Return 0 to indicate successful execution.
 *
 * Time Complexity: O(1)
 */
int main(void)
{
	int digit = 48;  /* ASCII value of '0' */

	while (digit <= 57)  /* ASCII value of '9' */
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
