#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: a pointer
 * @text_content: a string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, f, red = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (red = 0; text_content[red];)
			red++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	f = write(p, text_content, red);

	if (p == -1 || f == -1)
		return (-1);
	close(p);

	return (1);
}
