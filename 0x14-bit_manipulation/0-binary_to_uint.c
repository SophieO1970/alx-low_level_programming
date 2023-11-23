#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number
 * to an unsigned int
 * @b: pointer to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decvalue = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		decvalue = decvalue * 2 + (*b++ - '0');
	}
	return (decvalue);
}
