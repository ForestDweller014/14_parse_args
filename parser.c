#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *result[6];

char **parse_args(char *line) {
	int count = 0;
	while (count < 6) {
		result[count] = strsep(&line, " ");
		count++;
	}
	return result;
}