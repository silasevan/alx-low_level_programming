/*
 * file - 4-print_alphabt.c
 */

#include <stdio.h>
/**
 * main - print all letter except q and e
 *
 * Return: Always 0
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
