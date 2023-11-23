#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int now = 0;

	while (xor)
	{
		now += xor & 1;
		xor >>= 1;
	}
	return (now);
}
