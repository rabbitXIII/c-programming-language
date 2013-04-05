#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAX_OPERAND_SIZE 100

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

