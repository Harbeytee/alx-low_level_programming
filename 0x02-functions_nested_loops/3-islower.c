#include <stdio.h>

/**
  * _islower - Checks for lowercase character
  * @num: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int num)
{
	if (num >= 97 && num <= 122)
	{
		return (1);
	}

	return (0);
}
