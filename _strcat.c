/**
 * *_strcat - string concatenator
 * @dest: the destination String
 * @src: the Source String
 * Return: reversed String \n.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len])
		dest_len++;

	while (src[i])
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
