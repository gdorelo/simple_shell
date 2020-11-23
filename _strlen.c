#include "shell.h"
/**
 * _strlen - function to know the length of the string
 * @s: string
 * Return:  length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
