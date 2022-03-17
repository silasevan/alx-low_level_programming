/*
 * file - 5-more_numbers.c
 */

#include "main.h"

/**
 * more_numbers - prints the number 0-14 ten times
 */

void more_numbers(void)
{

	int count;
	int num;

	while (count <= 10)
	{
		for (num = 0; num <= 14; num++)
			_putchar((num % 10) + '0');

		_putchar('\n');
	}
	count++;
}
