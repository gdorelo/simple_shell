#include "shell.h"
/**
 * checkspaces - function to check a string of spaces
 * @line: Pointer to string.
 * Return: null or a string without spaces.
 */
char *checkspaces(char *line)
{
	int i = 0;
	char *new;

	while (line[i] != '\0')
	{
		if (line[i] != ' ')
		{
		new = _strdup(line + i);
		free(line);
		return (new);
		}
		i++;
	}
	free(line);
	return (NULL);
}
/**
 * simplexit - function to check a string
 * @arg: Pointer to string.
 * @status: status to exit
 * Return: 0 if the match is NOT success else exit.
 */
int simplexit(char *arg, int status)
{
	int len;

	if (!arg)
		return (0);
	len = _strlen(arg);
	if (len == 4)
		if (arg)
		if (!_strncmp("exit", arg, 4))
		{
			free(arg);
			exit(status);
		}
	return (0);
}
/**
 * checkenv - function check env built
 * @arg: Pointer to string.
 * @args: double pointer to be free
 * Return: 1 if the match is success else 0.
 */
int checkenv(char *arg, char **args)
{
	int len;

	len = _strlen(arg);
	if (len == 3)
		if ((_strncmp("env", arg, 3)) == 0)
		{
		_printenv();
		free(arg);
		free(args);
		return (1);
		}
	return (0);
}
/**
 * errorsys - puts in command line the error
 * @argv: pointer to pointer
 * @count: the history
 * @error: exit error.
 * @name: name of the program.
 * Return: Nothing.
 */
void errorsys(char *argv, int count, char *error, char *name)
{
	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	print_number(count);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, argv, _strlen(argv));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, error, _strlen(error));
	write(STDERR_FILENO, "\n", 1);
}
