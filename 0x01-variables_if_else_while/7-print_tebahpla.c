#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
