#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints alphabets in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char low;
	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
