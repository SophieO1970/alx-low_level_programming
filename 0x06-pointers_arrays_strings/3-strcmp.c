#include "main.h"

/**
 * _strcmp - it compares the two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: null byte difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
