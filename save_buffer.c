#include "shell.h"
/**
 * save_buffer - function that saves buffer
 * Return: a double pointer with the buffer
 */
char ** save_buffer(void)
{
  char *buffer = NULL;
  char **pbuffer = &buffer;
  size_t size;
  int n;
  buffer = malloc(sizeof(char) * BUFFSIZE);
  if (!buffer)
    return (NULL);
  n = getline(&buffer, &size, stdin);
  if (n == EOF)
  {
      free(buffer);
      exit(0);
  }
  if (n == 1)
  {
    free(buffer);
    return (NULL);
  }
  buffer[n - 1] = 0;
  return (pbuffer);
}