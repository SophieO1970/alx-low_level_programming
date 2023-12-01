#include <stdio.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: a pointrer
 * where filename is the name of the file to create
 * @text_content: a pointer to a string
 * text_content is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, f, red = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[red])
			red++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	f = write(fd, text_content, red);
	if (f == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
