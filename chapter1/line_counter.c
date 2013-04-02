#include <stdio.h>
/* counts the number of lines in the input */
main() {
	int character, number_of_lines;

	number_of_lines = 0;
	while(( character = getchar() ) != EOF ) 
		if ( character == '\n' )
			++number_of_lines;
	printf( "%d\n", number_of_lines );
}
