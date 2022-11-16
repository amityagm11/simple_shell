#include "main.h"

int main(int argc, char **argv, char **envp)
{
	char cmd[100], command[100], *parameters[100];
	//char *envp[] = { (char *)"PATH=/bin", 0 };

	while(1)
	{
		printf("$ ");
		get_input(command, parameters);

		if(_strcmp(command , "EOF") == 0)
			break;
		if(array_len(parameters) == 0)
		{
			parameters[0] = command;
			printf("IN");
		}

		if(fork() == 0)
		{
			_strcpy(cmd , "/bin/");
			_strcat(cmd, command);
			if(execve(cmd, parameters, envp) == -1)
				perror("./shell");
			exit(0);
		}
		else
			wait(NULL);
	}
}
