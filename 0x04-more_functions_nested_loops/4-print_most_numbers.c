<<<<<<< HEAD
#include "holberton.h"

/**
 * print_most_numbers - prints numbersd from 0 to 9, excluding 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (i != '2' && i != '4')
			_putchar(i);
	_putchar('\n');
}
=======
#include "holberton.h"

/**
 * print_most_numbers - prints numbersd from 0 to 9, excluding 2 and 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (i != '2' && i != '4')
			_putchar(i);
	_putchar('\n');
}
>>>>>>> c3a6d79709b9048e88186a6d787b4dd00eca76c2
