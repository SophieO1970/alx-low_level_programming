#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: Always (0)
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while ((*h == *n) && (*n != '\0'))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}
