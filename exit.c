#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 1024
#define MAX_ARGUMENTS 256
#define MAX_PATH_LENGTH 1024

int main() {
    char command[MAX_COMMAND_LENGTH], *arguments[MAX_ARGUMENTS],path[MAX_PATH_LENGTH],*path_token,*command_path; int i;
    while (1) {
        printf("$ ");
        fflush(stdout);
        fgets(command, MAX_COMMAND_LENGTH, stdin);
        command[strcspn(command, "\n")] = '\0';
        arguments[0] = strtok(command, " ");
        for (i = 1; i < MAX_ARGUMENTS; i++) {
            arguments[i] = strtok(NULL, " ");
            if (arguments[i] == NULL) {
                break;
            }
        }
        if (strcmp(arguments[0], "exit") == 0) {
            exit(0);
        }
        path_token = strtok(getenv("PATH"), ":");
        while (path_token != NULL) {
            snprintf(path, MAX_PATH_LENGTH, "%s/%s", path_token, arguments[0]);
            if (access(path, X_OK) == 0) {
                command_path = path;
                break;
            }
            path_token = strtok(NULL, ":");
        
	

	if (command_path != NULL)

			
	{

		fork() == 0)
		{
		execv(command_path, arguments);
		perror("execv");
		exit(1);
		}
		wait(NULL);
	}
	else
	{
		printf("invalid output %s\n", arguments[0]);
	}
	}

	return 0;
}
