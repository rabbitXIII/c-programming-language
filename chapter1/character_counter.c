#include <stdio.h>

/* count characters in input */

main() {
	long character_count;
	character_count = 0;
	while( getchar() != EOF ) 
		++character_count;
	printf("%ld\n", character_count);
}
