#include <stdio.h>
#include "calc.h"

#define MAX_DEPTH_OF_STACK 100

int stack_position = 0;
double value[MAX_DEPTH_OF_STACK];

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

