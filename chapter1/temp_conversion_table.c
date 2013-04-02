#include <stdio.h>

/* print the Fahrenheit-Celsius table for fahr=0, 20, ..., 300 */

main() {
	float fahr, celsius;
	float lower_limit, upper_limit, step_size;

	lower_limit = 0;
	upper_limit = 300;
	step_size = 20;

	fahr = lower_limit;

	while (fahr <= upper_limit) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f%6.1f\n", fahr, celsius);
		fahr = fahr + step_size;
	}
}
