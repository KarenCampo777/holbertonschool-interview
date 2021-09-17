#include "palindrome.h"

/**
 * is_palindrome - Validates palindrome
 *
 * @n: Number
 *
 * Return: 1 if is palindrome 0: FAILURE
 */

int is_palindrome(unsigned long n)
{
	unsigned long t = n, x = 0;
	int palim;

	palim = recursion(n, t, x);
	return (palim);
}
/**
 * recursion - recursion validate
 *
 * @n: Number
 * @t: quantity
 * @x: Number
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int recursion(unsigned long n, unsigned long t, unsigned long x)
{
	if (t != 0)
	{
		x = (x * 10) + (t % 10);
	    t /= 10;
		if (recursion(n, t, x))
			return (1);
		return (0);
	}

	if (n == x)
		return (1);
	return (0);
}