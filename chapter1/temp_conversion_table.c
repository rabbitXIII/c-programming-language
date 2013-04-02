#include <stdio.h>

/* print the Fahrenheit-Celsius table for fahr=0, 20, ..., 300 */

main() {
	int fahr, celsius;
	int lower_limit, upper_limit, step_size;

	lower_limit = 0;
	upper_limit = 300;
	step_size = 20;

	fahr = lower_limit;

	while (fahr <= upper_limit) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step_size;
	}
}
