#include "shell.h"

/**
 * parse - This function splits the input into arrays
 * of words.
 * @input: The string to be splited.
 * Return: An array of words.
 */
char **parse(char *input)
{
	char **tokens;
	char *token, *dlim = " ";
	int space, i = 0;

	space = num_space(input);
	tokens = malloc(sizeof(char *) * (space + 1));
	token = strtok(input, dlim);
	while (token != NULL)
	{
		tokens[i] = _strdup(token);
		i++;
		token = strtok(NULL, dlim);
	}
	tokens[i] = NULL;

	return (tokens);
}

/**
 * num_space - This function calculate the
 * number of space in a string.
 * @str: The string to be checked.
 * Return: The number of spaces plus 1.
 */
int num_space(char *str)
{
	int num = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			num += 1;
	}
	if (num == 0)
		num += 1;

	return (num);
}
