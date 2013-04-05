#include <ctype.h>
#include <stdio.h>

#define MAX_DEPTH_OF_STACK 100
#define BUFFER_SIZE 100

int stack_position = 0;
double value[MAX_DEPTH_OF_STACK];

char buffer[BUFFER_SIZE];
int buffer_position = 0;

int get_character( void );
void unget_character( int );

/* push onto stack */
void push( double number ) {
	if( stack_position < MAX_DEPTH_OF_STACK ) 
		value[stack_position++] = number;
	else
		printf("error: stack full can't push %g\n", number);

}

double pop( void ) {
	if( stack_position > 0 )
		return value[--stack_position];
	else {
		printf("error: stack empty\n");
		return EOF;
	}
}


int get_character( void ) {
	return ( buffer_position > 0 ) ? buffer[--buffer_position] : getchar();
}

void unget_character( int character ) {
	if( buffer_position >= BUFFER_SIZE )
		printf(" unget_character: too many characters\n" );
	else
		buffer[buffer_position++] = character;
}


