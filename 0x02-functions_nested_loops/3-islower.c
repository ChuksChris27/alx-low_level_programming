#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 * Description:
 *   Checks if the character c falls
 *   between ASCII values 97 ('a') and 122 ('z'),
 *   inclusive, which correspond to
 *   lowercase letters in the ASCII table.
 *   Returns 1 if c is lowercase, and 0 otherwise.
 *
 * Time Complexity: O(1)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
