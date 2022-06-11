<<<<<<< HEAD
#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: the size of the square, remember, length = breadth;
 *
 * Return: void;
 */
void print_square(int size)
{
	int l, b;

	if (size <= 0)
		_putchar(10);

	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		_putchar(10);
	}
}

=======
#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: the size of the square, remember, length = breadth;
 *
 * Return: void;
 */
void print_square(int size)
{
	int l, b;

	if (size <= 0)
		_putchar(10);

	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
			_putchar('#');
		_putchar(10);
	}
}

>>>>>>> c3a6d79709b9048e88186a6d787b4dd00eca76c2
