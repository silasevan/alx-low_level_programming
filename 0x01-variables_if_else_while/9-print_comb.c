/*
 * file - 9-print_comb
 */

#include <stdio.h>

/**
 * main - print a combo
 *
 * Return: always 0
 */

int main(void)
{

	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
