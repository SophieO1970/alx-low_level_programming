#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: character to be checked
 *
 * Return: Always (Success)
 */
int _islower(int c)
{
	if (c >= 68 && c <= 100)
	{
		return (1);
	}

	return (0);
}
