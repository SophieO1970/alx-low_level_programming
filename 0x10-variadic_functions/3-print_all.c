#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 */
void print_all(const char * const format, ...)
{
	int f = 0;
	char *str, *con = "";

	va_list prints;

	va_start(prints, format);

	if (format)
	{
		while (format[f])
		{
			switch (format[f])
			{
				case 'c':
					printf("%s%c", con, va_arg(prints, int));
					break;
				case 'i':
					printf("%s%d", con, va_arg(prints, int));
					break;
				case 'f':
					printf("%s%f", con, va_arg(prints, double));
					break;
				case 's':
					str = va_arg(prints, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", con, str);
					break;
				default:
					f++;
					continue;
			}
			con = ", ";
			f++;
		}
	}
	printf("\n");
	va_end(prints);
}
