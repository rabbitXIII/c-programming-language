#include <stdio.h>

int power( int base, int n );

/* test power function */

main () {
	int index;

	for ( index = 0; index < 10; ++index )
		printf( "%d %d %d\n" , index, power(2, index), power (-3, index));
	return 0;
}

/* power: raise base to n-th power; n >= 0 */

int power( int base, int n ) {
	int index, power_value;
	power_value = 1;
	for ( index = 1; index <= n; ++index )
		power_value = power_value * base;
	return power_value;
}
