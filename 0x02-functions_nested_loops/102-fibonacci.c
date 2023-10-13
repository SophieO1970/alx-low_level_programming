#include <stdio.h>

/**
  * main - Prints the first 52 fibonacci numbers
  *
  * Return: void
  */
int main(void)
{
	int f = 0;
	long i = 1, b = 2;

	do {
		if (f == 0)
			printf("%ld", i);
		else if (f == 1)
			printf(", %ld", b);
		else
		{
			b += i;
			i = b - i;
			printf(", %ld", b);
		}

		++f;
	} while (f < 50);

	printf("\n");
	return (0);
}
