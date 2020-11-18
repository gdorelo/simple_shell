#include "shell.h"
/**
 * find_path - function to get the PATH env
 * @args: command to be matched with the path
 * @environ: environ double pointer
 * Return:  the PATH in a string.
 */
char *find_path(char **environ, char **args)
{
	int n = 0, i = 0, j = 0;
	char *strPath, *path, *folder;

	folder = malloc(sizeof(char) * BUFFSIZE);

	if (!folder)
		return (NULL);
	while (environ[i])
	{
		if (_strcmp("PATH=", environ[i]) == 0 && environ[i][4])
		{
			n = _strlen(environ[i]);
			strPath = malloc(sizeof(char) * n - 1);
			if (!strPath)
				return (NULL);
			strPath = environ[i];
			path = malloc(sizeof(char) * n - 4);
			if (!path)
				return (NULL);
			for (i = 5, j = 0; strPath[i] != '\0'; i++, j++)
				path[j] = strPath[i];
			path[j] = '\0';
		}
		i++;
	}
	folder = split_path(path, args);
	return (folder);
}
