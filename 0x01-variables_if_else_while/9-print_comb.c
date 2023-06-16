#include <stdio.h>
/**
 * main - starting point
 * program to print all possible combinations of single digit numbers
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int i;

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
