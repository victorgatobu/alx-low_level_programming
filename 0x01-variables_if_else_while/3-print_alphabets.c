#include <stdio.h>
/**
 * first we have main function for the program
 * program to print alphabet in lowercase then uppercase
 * the main function returns 0
 */
int main(void)
{

	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return(0);
}
