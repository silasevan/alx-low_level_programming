/*
 * file - 0-strcat.c
 */

#include "main.h"

/**
 * strcat - Contenate a string ponter to by @src, including the terminating 
 *          null byte, to the end of a string pointed to by @dest
 * strcat - contenate the string pointed to by @src, including the terminating null byte, to the end of the string
 * @dest: A pointer to the string to be contenated upon.
 * @src: The source string to be appended to @dest.

 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{

	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return start;
}


			
