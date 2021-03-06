/*
 * file - 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - print string in reverse.
 * @s: string to be printed.
 *
 * Return Always 0.
 */

void print_rev(char *s)
{

	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar(10);
}
