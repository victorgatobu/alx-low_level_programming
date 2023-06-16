#include <stdio.h>
/**
 * main - entry of the program
 * program to print all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int m, n, o, p;

	for (m = 0; m < 1000; m++)
	{
		n = m / 100;
		o = (m / 10) % 10;
		p = m % 10;

		if (n < o && o < 1)
		{
			putchar(n + '0');
			putchar(o + '0');
			putchar(p + '0');

			if (m < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
