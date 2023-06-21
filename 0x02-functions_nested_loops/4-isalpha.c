#include "main.h"
/**
 * _isalpha-determines whether a character is uppercase or lowercase
 * @c:character to determine if it is a lowercase
 * Return:1-if lowercase/uppercase,0-if not
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

