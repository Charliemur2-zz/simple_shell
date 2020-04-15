#include "sh_header.h"

/**
 * main - Entry point / run the shell!
 * @ac: - Number of arguments passed to the program.
 * @av: - One-dimensional array of strings - "arguments".
 * @env: - Null terminated array of strings - "environment".
 *
 * Return: 0 on success.
 */

int main(int ac, char *av[], char **env)
{
	char *string = NULL, **token;
	pid_t child;
	int flagsc = 0;
	(void)ac;

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
		flagsc = built_in(string, env);
		if (flagsc == 1)
			continue;
		token = toktok(string);
		child = fork();
		if (child < 0)
		{
			perror("fork");
			exit(1);
		}
		else if (child == 0)
		{
			if (execve(token[0], token, env) < 0)
			{
				freezer(token, string);
				perror(av[0]);
				exit(127);
			}
		}
		wait(NULL);
		freezer(token, string);
	}
	return (0);
}

/**
 * freezer - Function that frees the memory allocated by the program.
 * @token: Array of pointers that stores the tokens.
 * @string: Pointer that stores the input from the keyboard.
 *
 * Return: Nothing.
 */

void freezer(char **token, char *string)
{
	free(string);
	free(token);
}
