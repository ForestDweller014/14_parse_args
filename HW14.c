#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "parser.h"

int main() {
	char line[] = "ls -l";
	char **args = parse_args(line);
	execvp(args[0], args);
	return 0;
}