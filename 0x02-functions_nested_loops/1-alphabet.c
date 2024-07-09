#include "main.h"

/**
 * print_alphabet - Prints alphabets 'a - z'
 *
 * FUNCTIONALITY *
 *
 * 1. Use a for loop starting with 'a' and ending with 'z'.
 * 2. Within the loop, call _putchar to print each character.
 * 3. After the loop, call _putchar to print a new line.
 *
 * Time Complexity - O(1)
 */
void print_alphabet(void)
{
	for (int c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
