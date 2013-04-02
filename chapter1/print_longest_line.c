#include <stdio.h>

#define MAX_LINE_LENGTH 1000
int get_line_length( char line[], int longest_line_length );
void copy( char to[], char from[] );

/* print out the longest line */
main() {
	int current_line_length, longest_line_length;
	char line[MAX_LINE_LENGTH], longest[MAX_LINE_LENGTH];

	longest_line_length = 0;
	while ( (current_line_length = get_line_length(line, MAX_LINE_LENGTH)) > 0 ) 
		if ( current_line_length > longest_line_length ) {
			longest_line_length = current_line_length;
			copy ( longest, line );
		}
	if ( longest_line_length > 0 )
		printf ( "%s", longest );
	return 0;
}

int get_line_length( char line[], int limit ) {
	int character, index;

	for ( index = 0; index < limit-1 && (character = getchar()) != EOF && character != '\n'; ++index )
		line[index] = character;
	if ( character == '\n' ) {
		line[index] = character;
		++index;
	}
	line[index] = '\0';
	return index;
}
	
/* copy from array to array - assumption that the destination array is large enough */
void copy( char to[], char from[] ) {
	int index;

	index = 0;
	while ( (to[index] = from[index]) != '\0' )
		++index;
}
