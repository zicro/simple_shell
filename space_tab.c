#include "main.h"
/**
 * space_tab - verify if the string is only space and tab
 * @str: the input to check
 *
 * Return: 0 or 1
*/
int space_tab(char *str)
{
	while (*str)
	{
		if (*str != ' ' && *str != '\t')
			return (0);
		str++;
	}
	return (1);
}
