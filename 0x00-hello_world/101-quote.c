/*
 * file - 101--quote.c
 */

#include <unistd.h>

/**
 * main - print "and that piece of art is useful" -Dora Korper, 2015-10-19",
 * 		follow by a new line, to stardard error.
 *
 * Return: Always 1.
 */

int main(void)
{

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}
