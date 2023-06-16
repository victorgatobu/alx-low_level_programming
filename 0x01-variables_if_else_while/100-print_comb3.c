#include <stdio.h>
/**
 * main - starting point
 * Print all possible combinations of two digits
 * main - returns 0
 */
int main(void)
{
	int n, m, o;

	n = 0;

	while (n < 100)
	{
		m = n % 10;
		o = n / 10;

		if (o < m)
		{
			putchar(o + '0');
			putchar(m + '0');

			if (n < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
