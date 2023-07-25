#include "main.h"
/**
 * handle_builtins - the built-in handles fonction
 * @args: the args
 * @userInput_buf: the user buffer inputs
 * @exit_num: status to exit
 *
 * Return: exit 1 or 0 for the env
 */

int handle_builtins(char **args, char *userInput_buf, int exit_num)
{
	char **env;
	int exit_status = EXIT_SUCCESS;
	int i;

	if (strcmp(args[0], "exit") == 0)
	{
		if (args[1])
			exit_status = atoi(args[1]);
		else if (exit_num != -1)
			exit_status = exit_num;
		for (i = 0; args[i] != NULL; i++)
		{
			free(args[i]);
			args[i] = NULL;
		}
		free(args);
		free(userInput_buf);
		exit(exit_status);
	}
	else if (strcmp(args[0], "env") == 0)
	{
		for (env = environ; *env; ++env)
			printf("%s\n", *env);
		free_args(args);
		return (1);
	}
	return (0);
}
