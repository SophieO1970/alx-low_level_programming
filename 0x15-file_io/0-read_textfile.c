#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t f;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(fd, buf, letters);
	f = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(fd);
	return (f);
}
