#include <stdio.h>

/* count words lines characters etc */

#define INSIDE_WORD 	1
#define OUTSIDE_WORD 	0

main() {
	int character, number_of_lines, number_of_words, number_of_characters, 
	    current_state;
	current_state = OUTSIDE_WORD;
	number_of_lines = number_of_words = number_of_characters = 0;
	while ( (character = getchar()) != EOF ) {
		++number_of_characters;
		if ( character == '\n' ) 
			++number_of_lines;
		if ( character == ' ' || character == '\n' || character == '\t' )
			current_state = OUTSIDE_WORD;
		else if ( current_state == OUTSIDE_WORD ) {
			current_state = INSIDE_WORD;
			++number_of_words;
		}
	}
	printf("Lines: %d\tWords: %d\tCharacters: %d\n", number_of_lines, number_of_words, number_of_characters);
}
