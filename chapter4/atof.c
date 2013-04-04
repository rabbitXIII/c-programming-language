#include <ctype.h>
#include <stdio.h>

/* atof: convert string s to double */
double atof( char source[] ) {
	double value, power;
	int index, sign;

	// skips white-space
	for( index = 0; isspace(source[index]); index++ ) 
		;
	sign = ( source[index] == '-' ) ? -1 : 1;
	if( source[index] == '+' || source[index] == '-' )
		index++;
	for( value = 0.0; isdigit( source[index] ); index++ )
		value = 10.0 * value + (source[index] - '0' );
	if( source[index] == '.' )
		index++;
	for( power = 1.0; isdigit(source[index]); index++ ) {
		value = 10.0 * value + ( source[index] - '0' );
		power *= 10;
	}
	return sign * value / power;
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

double atoi( char source[] ) {
	double atof( char s[] );
	return (int) atof(source);
}
