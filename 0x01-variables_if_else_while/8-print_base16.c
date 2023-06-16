#include <stdio.h>
/**
 * main - program start
 * program prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
