#include "main.h"
#include <stdio.h>


/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input value
 * @accept: input value
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				n++;
				break;
			}
			else if (accept[z + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
