/*
 * file -1-alphabet.c
 */

#include "main.h"

/**
 * main: print alphabet in lower case
 * follow by a new line
 */

void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
