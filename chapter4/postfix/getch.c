#include <stdio.h>

#define BUFFER_SIZE 100

char buffer[BUFFER_SIZE];
int buffer_position = 0;

int get_character( void ) {
	return ( buffer_position > 0 ) ? buffer[--buffer_position] : getchar();
}

void unget_character( int character ) {
	if( buffer_position >= BUFFER_SIZE )
		printf(" unget_character: too many characters\n" );
	else
		buffer[buffer_position++] = character;
}

