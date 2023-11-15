#include "simple_shell.h"

/*
 * command_exec - Executes a command
 * @execute: The command to be executed
 */

void command_exec(const char *execute)
{
	pid_t child_pid;

	if ((child_pid = fork() == -1)
		{
		perror("fork failed");
		exit(EXIT_FAILURE);
		}
		else if ((child_pid == 0))
		{
		execlp(execute, execute, (char *)NULL;
				perror("execution error");
				exit(EXIT_FAILURE);
		}
		else
		{
		waitpid(child_pid, NULL, 0);
		}
}
