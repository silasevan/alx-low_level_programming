/*
 * file - 1-isdigit.c
 */

#include "main.h"

/**
 * _isdigit - check for a digit (0-9)
 * @c:The number to be checked
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
