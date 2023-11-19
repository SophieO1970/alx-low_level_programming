#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int f, sum;

	sum = 0;

	va_start(ap, n);

	for (f = 0; f < n; f++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
