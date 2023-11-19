#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the block memory to fill
 * @b: value to be set
 * @n: number of bytes
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int f;

	for (f = 0; n > 0; f++)
	{
		s[f] = b;
		n--;
	}
	return (s);
}
