#include <stdio.h>
#include <ctype.h>
#include "calc.h"

int get_op_character( char source[] ) {
	int index, character;
	while( (source[0] = character = get_character()) == ' ' || character == '\t' )
		;
	source[1] = '\0';
	if( !isdigit(character) && character != '.' )
			return character;
	index = 0;
	if( isdigit(character) )
		while( isdigit( source[++index] = character = getchar()) )
			;
	if( character == '.' )
		while( isdigit( source[++index] = character = getchar()) )
			;
	source[index] = '\0';
	if( character != EOF ) 
		unget_character(character);
	return NUMBER_FOUND;
}

