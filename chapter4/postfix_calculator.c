#include <stdio.h>
#include <stdlib.h>

#define MAX_OPERAND_SIZE 100
#define NUMBER_FOUND '0'

int get_op_character( char [] );
void push( double );
double pop( void );

/* post-fix calculator */

main() {
	int type;
	double op2;
	char source[MAX_OPERAND_SIZE];

	while( (type = get_op_character(source)) != EOF ) {
			switch( type ) {
			case NUMBER_FOUND:
				push( atof(source) );
				break;
			case '+':
				push( pop() + pop() );
				break;
			case '*':
				push( pop() * pop() );
				break;
			case '-':
				op2 = pop();
				push( pop() - op2 );
				break;
			case '/':
				op2 = pop();
				if( op2 != 0.0 )
					push( pop() / op2 );
				else
					printf("error: zero divisor");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				return 0;
				break;
			default:
				printf("error: unkown command %s\n", source );
				return -1;
				break;
			}
	}
	return 0;
}


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

