#include "shell.h"

char *prompt(void)
{
	char *buf = NULL;
	size_t len = 0;
	int read;

	_pstr("$ ");
	read = getline(&buf, &len, stdin);
	if (read == -1)
		exit(-1);
	if(buf == NULL)
		exit(-1);
	buf[read - 1] = '\0';
	return _strdup(buf);
}
