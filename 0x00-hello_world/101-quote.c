#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - starting point of the program
 * Return: 1
 */
int main(void)
{
       	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(message);
	
	write(2, message, len);
	return 1;
}
