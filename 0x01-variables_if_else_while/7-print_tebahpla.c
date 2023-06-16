#include <stdio.h>
/**
 * main function - program starts here
 * program to print lowercase alphabet in reverse
 * main function returns 0
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);
}
