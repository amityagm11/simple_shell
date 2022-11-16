#include "main.h"
#define BUFFER 1024
void get_input(char cmd[], char *parameter[])
{
	char *buf = malloc(sizeof(char) * BUFFER);
	size_t n = BUFFER, i = 0, j;
	char *arr[100];
	char *str;

	getline(&buf, &n, stdin);
	buf[strlen(buf) - 1] = '\0';
	str = strtok(buf, " ");
	while(str != NULL)
	{
		arr[i] = str;
		i++;
		str = strtok(NULL, " ");
	}
	_strcpy(cmd, arr[0]);
	for(j = 0; j < i; j++)
		parameter[j] = arr[j];
	parameter[i] = '\0';
}

int array_len(char *parameters[])
{
	int i = 0;

	while(parameters[i] != NULL)
		i++;

	return (i);
}
