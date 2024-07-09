#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: + if n is positive, 0 if n is zero, - if n is negative
 *
 * Description:
 *   Checks the sign of the integer n and
 *   prints the corresponding sign character.
 *   Returns + if n is
 *   greater than 0, 0 if n is 0, and - if n is less than 0.
 *
 * Time Complexity: O(1)
 *
 * DOCSTRING:
 *   If n is greater than 0, print a plus sign (+) and return 1.
 *   If n is less than 0, print a minus sign (-) and return -1.
 *   If n is 0, print a zero (0) and return 0.
 *
 * Args:
 *   n: The number to be checked
 * Returns:
 *   +1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
