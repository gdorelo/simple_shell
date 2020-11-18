#include "shell.h"
/**
 * split_buffer - function separate the string in tokens
 * @pbuffer: string
 * @num: number
 * Return: a double pointer with tokens
 */
char **split_buffer(char *pbuffer, int *num)
{
	char *token = NULL;
	unsigned int i = 0;
	char **tokens = malloc(sizeof(char *) * BUFFSIZE);

	if (!tokens)
		return (NULL);
token = strtok(pbuffer, " ");
	while (token != NULL)
		{
			tokens[i] = token;
			i++;
			*(num) = i;
			token = strtok(NULL, " ");
		}
	tokens[i] = NULL;
	free(token);
	return (tokens);
}
