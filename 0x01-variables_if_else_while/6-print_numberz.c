/*
 * file - 6-print_numberz
 */

#include <stdio.h>

/**
 * main - print all base 10 number
 *
 * Return: always 0
 */

int main(void)
{

	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
