#include <stdio.h>

/* count characters in input version 2 */

main() {
	double character_count;
	for(character_count = 0; getchar() != EOF; ++character_count) 
		; // null statement is valid in c. for loop needs to have a body
	printf("%.0f\n", character_count); //%f is for both float and double
}
