#include "main.h"
/**
 * main - Entry level
 * Description: a function that prints the alphabet, in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c ='a'; c <='z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
