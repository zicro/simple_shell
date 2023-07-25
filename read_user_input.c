#include "main.h"
/**
 * read_user_input - a fct Reads the input from user
 * @userInput_buf: hold input from user
 * @buf_size: the buffer size
 *
 * Return: number of chars read when success, -1 if failure
 */
ssize_t read_user_input(char **userInput_buf, size_t *buf_size)
{
	ssize_t readNO;

	readNO = getline(userInput_buf, buf_size, stdin);
	if (readNO == -1)
	{
		if (!isatty(STDIN_FILENO))
			return (-1);
		free(userInput_buf);
		perror("getline()");
		exit(EXIT_FAILURE);
	}
	if ((*userInput_buf)[readNO - 1] == '\n')
		(*userInput_buf)[readNO - 1] = '\0';

	return (readNO);
}
