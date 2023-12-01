#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_buffer - Allocates 1024 bytes
 * @file: The name of the file
 * Return: A pointer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file
 * @fd: The file descriptor
 */
void close_file(int fd)
{
	int z;

	z = close(fd);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the content of a file
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Description: If the argument count is incorrect - exit code 97
 * Return: 0 on success, or an exit status on failure
 */
int main(int argc, char *argv[])
{
	int part, pot, g, f;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	part = open(argv[1], O_RDONLY);
	g = read(part, buffer, 1024);
	pot = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (part == -1 || g == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		f = write(pot, buffer, g);
		if (pot == -1 || f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		g = read(part, buffer, 1024);
		pot = open(argv[2], O_WRONLY | O_APPEND);
	} while (g > 0);
	free(buffer);
	close_file(part);
	close_file(pot);

	return (0);
}
