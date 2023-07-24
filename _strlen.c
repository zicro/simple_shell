/**
 * _strlen - get string lenght
 * @s: the string pointer
 * Return: the string lenght
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
