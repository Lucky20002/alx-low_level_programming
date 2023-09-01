#include "main.h"

/**
 * get_endianness - looks if a machine is big endian or small
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
