/*
 * file - 1-isdigit.c
 */

#include "main.h"

/**
 * check for a digit 0 through 9
 *
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
