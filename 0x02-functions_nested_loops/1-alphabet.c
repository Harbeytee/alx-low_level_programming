#include "main.h"

/**
  * print_alphabet - printers the alphabet in smal casing
  *
  * Return: void
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
