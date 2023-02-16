#include <stdio.h>
/**
 * main - Program that prints the size of various on a computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("Size of long long int:%lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
