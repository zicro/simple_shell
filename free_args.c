#include "main.h"
/**
 * free_args - memory free for command args
 * @args: the command args
 *
 * Return: void
 */
void free_args(char **args)
{
	int i;

	for (i = 0; args[i] != NULL; i++)
	{
		free(args[i]);
	}
	free(args);
}
