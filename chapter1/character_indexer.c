#include <stdio.h>

/* count digits, white spaces, other characters */

main() {
	int character, index, number_of_whitespace, number_of_other;
	int number_of_digits[10];

	number_of_whitespace = number_of_other = 0;
	for ( index = 0; index < 10; ++index )
		number_of_digits[index] = 0;

	while ( (character = getchar()) != EOF )
		if ( character >= '0' && character <= '9' )
			++number_of_digits[character-'0'];
		else if ( character == ' ' || character == '\n' || character == '\t' )
			++number_of_whitespace;
		else 
			++number_of_other;
	printf( "digits = ");
	for ( index = 0; index < 10; ++index )
		printf( " %d", number_of_digits[index] );
	printf(", white space = %d, other = %d\n", 
			number_of_whitespace, number_of_other);
}


		
