#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: input value
 * @accept: input value
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int y, n;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
		if (s[y] == accept[n])
			return (s + y);
		}
	}
	return (NULL);
}
