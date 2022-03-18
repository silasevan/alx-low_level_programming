/*
 * file - 6-print_line.c
 */

#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{

	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}

	
#include "main.h"



/**

 * print_line - check for a digit

 * @n : number of _ to be printed

 * Return:void

 */



void print_line(int n)

{



	int i = 0;



	while (i < n && n > 0)

	{

		_putchar('_');

		i++;

	}

	_putchar('\n');

