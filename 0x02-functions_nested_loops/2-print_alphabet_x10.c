#include "main.h"

/**
  * print_alphabet_x10 - Print the alphabet 10 times
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');

		j++;
	}

}
