#include "main.h"

/**
 * _sprintf - the sprintf Function
 * @str: concatenate String
 * @delim: the delimiteur
 * @src: source of the string
 * Return: the new string pointer
 */

char *_sprintf(char *str, char *delim, char *src)
{
	char *new_str;
	int len_str, len_delim, len_src;

	len_str = strlen(str);
	len_delim = strlen(delim);
	len_src = strlen(src);

	new_str = malloc((len_str + len_delim + len_src + 1) * sizeof(char));
	if (new_str == NULL)
	{
		perror("Error: failed malloc");
		exit(EXIT_FAILURE);
	}

	strcpy(new_str, str);
	strcat(new_str, delim);
	strcat(new_str, src);

	return (new_str);
}
