#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include "shell.h"

/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int c;
	char *filename = NULL;

	while ((c = getopt(argc, argv, "f:")) != -1)
	{
	switch (c)
	{
	case 'f':
		filename = optarg;
	break;
		case '?':
		if (optopt == 'f')
			fprintf(stderr, "Option -%c requires an argument.\n", optopt);
		else if (isprint(optopt))
			fprintf(stderr, "invalid option `-%c'.\n", optopt);
		else
			fprintf(stderr, "invalid option character `\\x%x'.\n", optopt);
		return (1);
	default:
		abort();
	}
	}

	printf("Processing file: %s\n", filename);

	return (0);
}
