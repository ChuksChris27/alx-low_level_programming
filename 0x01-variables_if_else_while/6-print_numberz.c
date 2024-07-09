#include <stdio.h>

/**
 * main - Prints all single digits of base 10 using putchar
 *
 * Return: Always 0
 *
 * FUNCTIONALITY:
 * 1. Declare a variable 'digit' of type char.
 * 2. Initialize 'digit' to '0'.
 * 3. While 'digit' is less than or equal to '9':
 *    a. Use putchar to print the current value of 'digit'.
 *    b. Increment 'digit'.
 * 4. Print a newline character at the end.
 * 5. Return 0 to indicate successful execution.
 *
 * Time Complexity: O(1)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
