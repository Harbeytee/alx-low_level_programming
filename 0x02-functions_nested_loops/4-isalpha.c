#include <stdio.h>

/**
  * _isalpha - Checks for alphabet letter
  * @val: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int val)
{
	if ((val >= 65 && val <= 90) || (val >= 97 && val <= 122))
	{
		return (1);
	}

	return (0);
}
