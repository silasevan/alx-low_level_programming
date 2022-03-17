/*
 * file - 8-print_square.c
 */

#include "main.h"

/**
 * print_square -  print a square using a character #
 * @size:The size of a square
 */

void print_square(int size)
{

	int hgt, widt;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (widt = 0; widt < size; widt++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
