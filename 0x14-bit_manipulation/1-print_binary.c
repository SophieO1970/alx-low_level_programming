#include <stdio.h>
#include "main.h"

/**
 * print_binary_helper - function to print binary digits
 * @n: unsigned long int
 * Return: void
 */
void print_binary_helper(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_helper(n >> 1);
	putchar((n & 1) + '0');
}
/**
 * print_binary - function that prints the binary representation of a number
 * You are not allowed to use arrays
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
	}
	else
	{
		print_binary_helper(n);
	}
}
