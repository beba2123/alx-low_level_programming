<<<<<<< HEAD
#include "holberton.h"

/**
 * print_triangle - It prints a triangle, followed by a new line.
 * @size: This is the size of the triangle to be printed.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int c, d;

	if (size <= 0)
		_putchar(10);

	for (c = 0; c < size; c++)
	{
		for (d = (size - 1); d >= 0; d--)
		{
			if (d <= c)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
=======
#include "holberton.h"

/**
 * print_triangle - It prints a triangle, followed by a new line.
 * @size: This is the size of the triangle to be printed.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int c, d;

	if (size <= 0)
		_putchar(10);

	for (c = 0; c < size; c++)
	{
		for (d = (size - 1); d >= 0; d--)
		{
			if (d <= c)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}
>>>>>>> c3a6d79709b9048e88186a6d787b4dd00eca76c2
