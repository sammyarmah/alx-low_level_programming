#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers
 * @a: the matrix
 * @size: the size
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
