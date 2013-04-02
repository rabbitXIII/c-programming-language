#include <stdio.h>

/* count digits, white spaces, other characters */
/* added an approximate histogram */

main() {
	int character, index, index2, number_of_whitespace, number_of_other,max_number_of_digits; 
	int number_of_digits[10];

	number_of_whitespace = number_of_other = max_number_of_digits = 0;
	for ( index = 0; index < 10; ++index )
		number_of_digits[index] = 0;

	while ( (character = getchar()) != EOF ) {
		if ( character >= '0' && character <= '9' ) {
			++number_of_digits[character-'0'];
			if ( number_of_digits[character-'0'] > max_number_of_digits )
				max_number_of_digits = number_of_digits[character-'0'];
		}
		else if ( character == ' ' || character == '\n' || character == '\t' )
			++number_of_whitespace;
		else 
			++number_of_other;
	}
	printf( "digits = ");
	for ( index = 0; index < 10; ++index )
		printf( " %d", number_of_digits[index] );
	printf(", white space = %d, other = %d\n", 
			number_of_whitespace, number_of_other);


	// adding an approximate horizontal histogram to the end from exercise 1-13
	for ( index = 0; index < 10; ++index ) {
		printf("%d: ", index);
		for ( index2 = 100 * number_of_digits[index] / max_number_of_digits; index2 >= 0; --index2 )
		       printf( "=" );
		printf("\n");
	}	
}


		
