#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -To print lower alphabet
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}


