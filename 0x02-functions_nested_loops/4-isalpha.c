#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet letter
 * @c: The character to check (as an integer)
 *
 * Return: 1 if c is an alphabet letter, 0 otherwise
 *
 * Description:
 *   Checks if the character c falls within the ASCII ranges:
 *   - Between 97 ('a') and 122 ('z') inclusive (lowercase letters).
 *   - Between 65 ('A') and 90 ('Z') inclusive (uppercase letters).
 *   Returns 1 if c is a letter, and 0 otherwise.
 *
 * Time Complexity: O(1)
 *
 * DOCSTRING:
 *   If the character c is between 97 and 122
 *   (inclusive) or between 65 and 90 (inclusive),
 *   return 1. Otherwise, return 0.
 *
 * Args:
 *   c: The character to be checked.
 * Returns:
 *   1 if the character is a letter, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

