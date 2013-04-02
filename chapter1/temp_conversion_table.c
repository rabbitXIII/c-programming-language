#include <stdio.h>

/* print the Fahrenheit-Celsius table for fahr=0, 20, ..., 300 */

#define LOWER_LIMIT 	0
#define UPPER_LIMIT 	300
#define STEP_SIZE 	20

main() {
	int fahr;
	for (fahr = LOWER_LIMIT; fahr <= UPPER_LIMIT; fahr = fahr + STEP_SIZE)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
