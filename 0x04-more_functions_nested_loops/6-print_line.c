<<<<<<< HEAD
#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: use this integer to determine the number of lines to be printed.
 *
 * Return: print n number of lines and new line if n is not less than
 * or equal to 0 else new line.
 */
void print_line(int n)
{
	int c = 0;

	while ((c <  n) && (n > 0))
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}

=======
#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: use this integer to determine the number of lines to be printed.
 *
 * Return: print n number of lines and new line if n is not less than
 * or equal to 0 else new line.
 */
void print_line(int n)
{
	int c = 0;

	while ((c <  n) && (n > 0))
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}

>>>>>>> c3a6d79709b9048e88186a6d787b4dd00eca76c2
