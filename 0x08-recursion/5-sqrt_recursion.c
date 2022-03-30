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

	if ((n * 0.5) % 10 != 0)
		return (-1);

	return (_sqrt_recursion((n + 1) * 0.5));
}

