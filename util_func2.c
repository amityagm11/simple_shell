#include "shell.h"

/**
 * _strcpy - Copy a string from one pointer to another
 * @dest: The destination pointer
 * @src: The string being copy
 * Return: Returns a string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - concatinate to string together
 * @dest: The string to be added to
 * @src: The string we are adding
 * Return: a char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = strlen(dest);
	int src_len = strlen(src);

	for (i = 0; i < src_len && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';
	return (dest);
}

/**
 * _strdup
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len = 0;

	len = strlen(str);
	dup = malloc(sizeof(*dup) * (len + 1));
	_strcpy(dup, str);

	return (dup);
}

void _pstr(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str += 1;
	}
}
