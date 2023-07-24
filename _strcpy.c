/**
  * _strcpy - copy str code
  * @dest: the string destination
  * @src: the source string
  * Return: the pointer to the destination
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
