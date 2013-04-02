#include <stdio.h>

/*copy input to output file*/
main() {
	int character;
	character = getchar();
	while((character = getchar()) != EOF)
		putchar(character);
}
