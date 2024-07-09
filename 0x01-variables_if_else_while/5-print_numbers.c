#include <stdio.h>

/**
 * main - Print all single digits of base 10 followed by new line
 *
 * Return: Always 0
 *
 * FUNCTIONALITY:
 * 1. Declare a variable 'digit' of type int.
 * 2. Initialize 'digit' to the character '0'.
 * 3. While 'digit' is less than or equal to the character '9':
 *    a. Print the value of 'digit'.
 *    b. Increment 'digit' by 1.
 * 4. Print a newline character.
 * 5. Return 0 to indicate successful execution.
 *
 * Time Complexity: O(1)
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
