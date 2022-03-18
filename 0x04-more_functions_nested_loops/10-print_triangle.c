/*
 * file -10-print_triangle.c
 */

#include "main.h"

/**
 * print_tiangle - print a triangle using the character #.
 * @size- The size of triangle.
 */

void print_triangle(int size)
{

	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');
			
			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
