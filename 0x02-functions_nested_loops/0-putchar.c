/*
 * file - 0-putchar.c
 */

#include <stdio.h>
#include <unistd.h>
#include <main.h>

/**
 * main -To print putchar
 *
 * Return: always 0
 */

int main()
{

	putchar(_putchar());

	putchar('\n');

	return (0);
}

int _putchar(char c)
{

	return (write(1, &c, 1));
}


