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
	char *buf = NULL;
	size_t size = 1024;

	bytes_read = getline(&buf, &size, stdin);
	if (bytes_read < 0)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		free(buf);
		exit(0);
	}
	return (buf);
}
