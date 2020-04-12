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

int main(int __attribute__((unused)) ac, char *av[], char __attribute__((unused)) **env)
{
	char *string = NULL, *token;
	pid_t child;
	int exec_err, status;

	signal(SIGINT, handle_sigint);
	while (1)
	{
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
			exec_err = execve(token, av, NULL);
			if (exec_err < 0)
				free(string);
			perror("$");
		}
		else if (child > 0)
		{
			wait(&status);
			free(string);
		}
	}
	return (0);
}
