#include <stdio.h>

/*copy input to output file*/
main() {
	int character;
	character = getchar();
	/* precedence of != is greater than = operator */
	while((character = getchar()) != EOF)
		putchar(character);
	printf("%d",character); //prints value of EOF
}
