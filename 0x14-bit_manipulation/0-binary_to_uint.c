#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: pointer containing the binary number
 * Return: the unsigned int
 * Description: converts binary number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
