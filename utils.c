#include "main.h"

int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (0);
}

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
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: The pointer to the dest string
 * @src: The pointer to string we are copying
 * @n: Number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

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
