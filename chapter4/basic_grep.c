#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int get_line_length( char line[], int max);
int string_index( char source[], char search_string[] );

char pattern[] = "ould"; /* pattern to search for */

/* finds all matching lines - just like grep */



main() {
	char line[MAX_LINE_LENGTH];
	int found_string = 0;

	while( get_line_length( line, MAX_LINE_LENGTH ) > 0 )
		if( string_index( line, pattern ) >= 0) {
			printf( "%s", line );
			found_string++;
		}
	return found_string;
}

int get_line_length( char source[], int limit ) {
	int character, index;
	
	index = 0;
	while( --limit > 0 && (character = getchar()) != EOF && character != '\n' ) 
		source[index++] = character;
	if( character == '\n' )
		source[index++] = character;
	source[index] = '\0';
	return index;
}

int string_index( char source[], char search_field[] ) {
	int index1, index2, index3;
	
	for( index1 = 0; source[index1] != '\0'; index1++ ) {
		for( index2 = index1, index3 = 0; search_field[index3] != '\0' && source[index2] == search_field[index3]; index2++, index3++ )
			;
		if( index3 > 0 && search_field[index3] == '\0' )
			return index1;
	}
	// if the search field was never found, we return -1
	return -1;
}
