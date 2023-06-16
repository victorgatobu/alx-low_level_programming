#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers can be placed here */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* put my code here */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
