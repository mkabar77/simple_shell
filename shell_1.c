#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <sys/wait.h>
#include "shell.h"

#define MAX_COMMAND_LENGTH 100

/**
 * main - point of entry
 * @environ_main - main environment
 *
 * Return: 0
 */

int environ_main()
{
	char command[MAX_COMMAND_LENGTH], *args[2];
	int status;
	char **environ;

	while (1)
	{
		printf("> ");
		if (fgets(command, MAX_COMMAND_LENGTH, stdin) == NULL)
		{
			printf("\n");
			exit(0);
		}

	command[strcspn(command, "\n")] = '\0';
	args[0] = command;
	args[1] = NULL;
	if (fork() == 0)
	{
		if (execve(command, args, environ) == -1)
		{
		printf("invalid command\n");
		}
		exit(0);
	}
	else
	{
		wait(&status);
	}
	}

	return (0);
}
