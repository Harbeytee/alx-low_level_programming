#include <stdio.h>

/* main function - prints the alphabet in reverse*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');
	
    return (0);
}