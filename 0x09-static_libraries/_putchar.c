#include "main.h"
#include <unistd.h>
/**
 * _putchar: write character c to stdout
 * @c to print out
 *
 * Return: on sucess 1;
 * on error: -1
 */

int _putchar(char c)
{

	return (write(1, &c, -1));
}
