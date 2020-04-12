#include "sh_header.h"
#include <errno.h>

/**
 * main - Entry point / run the shell!
 * @ac: - Number of arguments passed to the program.
 * @av: - One-dimensional array of strings - "arguments".
 * @env: - Null terminated array of strings - "environment".
 *
 * Return: 0 on success.
 */

int main(int __attribute__((unused)) ac, char *av[], char **env)
{
	char *string = NULL, *token;
	pid_t child;
	int status, count = 0;
	(void)env;

	signal(SIGINT, handle_sigint);
	while (1)
	{
		count++;
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);
		string = read_line();
		if (*string == '\n')
		{
			free(string);
			continue;
		}
		token = strtok(string, " \n\t");
		_strcmp(string);
		child = fork();
		if (child < 0)
			perror("$");
		else if (child == 0)
		{
			if (execve(token, av, NULL) < 0)
				free(string);
			perror(av[0]);
		}
		else if (child > 0)
		{
			wait(&status);
			free(string);
		}
	}
	return (0);
}
