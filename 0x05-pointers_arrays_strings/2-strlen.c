/*
 * file - 2-strlen.c
 */

#include "main.h"

/**
 * int_strlen -Return the length of a string.
 * @s: The string.
 */

 int _strlen(char *s)
{

	int len = 0;

	while (*s++)
		len++;

	return (len);
}


