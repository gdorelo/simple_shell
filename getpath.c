#include "shell.h"
/**
 * getpath - function to get the PATH env
 * @command: command to be match with the path
 * Return:  the PATH in a string.
 */
char *getpath(char *command)
{
	struct stat fileStat;
	char *folder = NULL;
	char **folders = NULL;
	char *finalcommand = NULL;
	int i = 0;

	if (environ == NULL)
		return (NULL);
	if (*command == '.' || *command == '/')
		if (stat(command, &fileStat) == 0)
			return (command);
	folder = _getenv("PATH");
	folders = splitpath(folder);
	if (folders != NULL)
	{
		while (folders[i] != NULL)
		{
			finalcommand = _strcat(folders[i], command);
				if (stat(finalcommand, &fileStat) == 0)
				{
					free(folders[0]);
					free(folders);
					return (finalcommand);
				}
				free(finalcommand);
				i++;
		}
	}
	free(folders[0]);
	free(folders);
	return (NULL);
}
