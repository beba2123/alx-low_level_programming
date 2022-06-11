<<<<<<< HEAD
#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal;
 * @n: the length of the diagonal;
 *
 * Return: void;
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');

	for (c = 0; c < n; c++)
		for (d = 0; d <= c; d++)
		{
			if (c == d)
			{
				_putchar(92);
				_putchar(10);
			}
			else
				_putchar(32);
		}
}

=======
#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal;
 * @n: the length of the diagonal;
 *
 * Return: void;
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');

	for (c = 0; c < n; c++)
		for (d = 0; d <= c; d++)
		{
			if (c == d)
			{
				_putchar(92);
				_putchar(10);
			}
			else
				_putchar(32);
		}
}

>>>>>>> c3a6d79709b9048e88186a6d787b4dd00eca76c2
