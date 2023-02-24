#include "main.h"
#include "stdio.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: 0
 */

void print_number(int n)

{

	unsigned int g = n;

	if (n < 0)
	{
	n *= -1;
	g = n;
	_putchar(" ");
	}
	g /= 10;
	if (g != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}

