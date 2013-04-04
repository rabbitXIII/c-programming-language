#include <stdio.h>

#define MAX_LINE_LENGTH 100

/* rudimentary calculator */
main() {
	double sum, atof(char []);
	char line[MAX_LINE_LENGTH];
	int get_line_length( char line[], int max);

	sum = 0;
	while( get_line_length(line, MAX_LINE_LENGTH) > 0)
		printf("\t%g\n", sum += atof( line) );
	return 0;
}
