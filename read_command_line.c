#include "shell.h"
/**
 * read_command_line - Function that reads the command line.
 * @status: Exit with status at EOF
 * Return: string passed to the command line 
 */
char *read_command_line(int status)
{
	char *line = NULL;
	char *buffer = NULL;
	size_t size = 0;
	int i = 0, n = 0;

	n = getline(&line, &size, stdin);
	if (n == EOF)
	{
		free(line);
		exit(status);
	}
	if (n == 1)
	{
		free(line);
		return (NULL);
	}
	buffer = malloc(_strlen(line));
	for ( ; i < (_strlen(line) - 1); i++)
		buffer[i] = line[i];
	buffer[i] = '\0';
	free(line);
	return (buffer);
}
