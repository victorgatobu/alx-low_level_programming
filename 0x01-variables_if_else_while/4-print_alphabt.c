#include <stdio.h>
/**
 * the main function for the program
 * program to print lowercase letter apart from q and e
 * the main function returns 0
 */
int main(void)
{

	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
