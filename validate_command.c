#include "main.h"
/**
 * validate_command - Checks the command if its a builtin or exists
 * @args: the args commands
 * @userInput_buf: the buffer inputs
 * @exit_num: exit with number
 *
 * Return: 1 if is valid, 0 if none
 */
int validate_command(char **args, char *userInput_buf, int exit_num)
{
	if (handle_builtins(args, userInput_buf, exit_num))
	{
		return (0);
	}
	if (!command_exists(args))
	{
		fprintf(stderr, "Command not found: %s\n", args[0]);
		free_args(args);
		return (0);
	}

	return (1);
}
