#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line
 * @size: input
 * Return: To print trianle using #
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = i; j <= size; j++)
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
