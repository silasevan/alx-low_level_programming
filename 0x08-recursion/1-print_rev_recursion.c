#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the string to reverse
 *
 * Return:nothing
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}
	_print_rev_recursion(s--);
	_putchar(*s);
}
