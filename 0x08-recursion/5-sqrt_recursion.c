#include "main.h"

/**
 * _sqrt - find the sqrt of @a
 *
 * @n: the number
 *
 * Return: The square root
 */

int _sqrt_recursion(int  n)
{

	if (n < 1)
		return (-1);

	if ((n * n) % n != n)
		return (-1);

	return (n*(_sqrt_recursion(n + 1) % n));
}

