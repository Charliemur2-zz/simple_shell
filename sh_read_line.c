#include "sh_header.h"

/**
 * read_line - Function that reads the standard input and stores the info
 * in a string.
 *
 * Return: A pointer to the string.
 */

char *read_line(void)
{
	int bytes_read;
	char *buffer = NULL;
	size_t size = 1024;

	bytes_read = getline(&buffer, &size, stdin);
	if (bytes_read < 0)
	{
		write(STDOUT_FILENO, "\n", 1);
		free(buffer);
		exit(1);
		}
	return (buffer);
}
