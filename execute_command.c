#include "shell.h"
/**
 * execute - function that execute all arguments in command line.
 * @args: Arguments typed into the line command.
 * @env_var: env variable
 * @path: path of the program.
 * @av: command
 * Return: No return.
 */
int execute(char *args[], char *av, char **env_var, char *path)
{
	pid_t pid;
	int status;
	pid = fork();
	if (pid < 0)
		perror(av);
	if (pid == 0)
	{
	if (execve (args[0], args, env_var) == -1)
	if (execve (path, args, env_var) == -1)
		perror(av);
	else
		exit(errno);
	}
	else
		wait(&status);
	return (pid);
	}