#include <stdio.h>
/**
 * the main block of the code
 * print the alphabet in lowercase
 * the program should return 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
