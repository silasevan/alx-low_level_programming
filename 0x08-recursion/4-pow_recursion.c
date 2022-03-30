#include "main.h"

/**
 * _pow_recursion - return the value of @x raise to the power of @y
 *
 * @x:number
 * @y: power to raise @y to
 *
 * Return: the value of @x to power of @y
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
