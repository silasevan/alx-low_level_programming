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

	/*int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar(10);*/

	char*str;
	int len;
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);

	return (0);

	for (len = 0; s[len] != '\0'; len++)
	{
		for (len = len - 1; len >= 0; len--)
		{
			_putchar(s[len]);
		}

		_putchar(10);
	}
}
