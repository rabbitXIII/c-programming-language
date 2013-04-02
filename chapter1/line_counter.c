#include <stdio.h>
/* counts the number of lines in the input */
/* edited to also count spaces and tabs  from Exercise 1-9*/
main() {
	int character, number_of_lines,number_of_tabs, number_of_spaces;

	number_of_lines = 0;
	number_of_spaces = 0;
	number_of_tabs = 0;
	/*it's also possible to use ASCII instead of '<char>', but that's silly*/
	while(( character = getchar() ) != EOF )  {
		if ( character == '\n' ) // checks equality as every other language
			++number_of_lines;
		else if ( character == ' ')
			++number_of_spaces;
		else if ( character == '\t' )
			++number_of_tabs;
	}
	printf( "Lines: %d\n", number_of_lines );
	printf( "Spaces: %d\n", number_of_spaces);
	printf( "Tabs: %d\n", number_of_tabs);

}
