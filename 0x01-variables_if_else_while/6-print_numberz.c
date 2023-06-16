#include <stdio.h>
/**
 * the main function - program start
 * program to print all single digit numbers using putchar
 * main returns 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}

	return (0);
}
