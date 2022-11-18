#include "shell.h"

/*void sigint_handler(int sig)
{
	(void) sig;

	signal(SIGINT, sigint_handler);
}
*/
int execute(char *cmd, char **args)
{
	pid_t child;
	int out = 0;

	child = fork();
	if(child == -1)
	{
		perror("fork error");
		out = -1;
	}
	if(child == 0)
	{
		if(execve(cmd, args, NULL) == -1)
		{
			perror("./shell");
			exit(-1);
		}
	}
	else
		wait(NULL);

	return (out);
}
