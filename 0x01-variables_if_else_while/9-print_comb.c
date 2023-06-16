#include <stdio.h>
/**
 * main function - starting point
 * program to print all possible combinations of single digit numbers
 * main function returns 0
 */
int main(void)
{
	int n = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
