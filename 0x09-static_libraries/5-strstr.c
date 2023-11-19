#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr -  function that locates a substring
 * @haystack: 1st pointer
 * @needle: 2nd pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
		for (; *haystack != '\0'; haystack++)
	{
		char *four = haystack;
		char *five = needle;

		while (*four == *five && *five != '\0')
		{
			four++;
			five++;
		}
	if (*five == '\0')
		return (haystack);
	}
	return (NULL);
}
