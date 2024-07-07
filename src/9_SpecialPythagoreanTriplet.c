// Harris Ransom
// Project Euler Q9: Special Pythagorean Triplet

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// Generates a Fibonacci sequence up to num
int *genFibonnaci(int num) {
	int *fib = (int *) calloc(num, sizeof(int));
	fib[0] = 0;
	fib[1] = 0;
	fib[2] = 1;

	for (int i = 3; i < num; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	return fib;
}

// Generate Pythagorean triplets
int genTriplets(int *fib) {
	const int RANGE = 1000;
	long *a = (long *) calloc(RANGE, sizeof(long));
	long *b = (long *) calloc(RANGE, sizeof(long));
	long *c = (long *) calloc(RANGE, sizeof(long));
	long long sum = 0;
	long long product = 0;
	a[3] = 4;
	b[3] = 3; 
	c[3] = 5;


	// Generate triplets
	for (int n = 4; n < RANGE; n++) {
		a[n] = a[n - 1] + b[n - 1] + c[n - 1];
		b[n] = fib[2*n - 1] - b[n-1];
		c[n] = fib[2*n];

		// Check if triplet is special
		sum = a[n] + b[n] + c[n];
		printf("Pythagorean Triplet: %ld, %ld, %ld\n", a[n], b[n], c[n]);

		if (sum == 1000) {
			product = a[n] * b[n] * c[n];
			printf("Special Pythagorean Triplet: %ld, %ld, %ld\n", a[n], b[n], c[n]);
			break;
		}
	}

	free(a);
	free(b);
	free(c);
	return product;
}

// Find the Pythagorean triplet that sums to sum
int searchTriples(int sum) {
	int minA = 1;
	int maxA = sum / 3;

	for (int a = minA; a < maxA; a++) {
		int minB = a + 1;
		int maxB = (sum - a) / 2;

		for (int b = minB; b < maxB; b++) {
			int c = sum - a - b;

			if (a > b || b > c) {
				continue;
			}

			if (a*a + b*b == c*c) {
				printf("Pythagorean Triplet: %d, %d, %d\n", a, b, c);
				return a * b * c;
			}
		}
	}

	return 0;
}

// Main
int main() {
	const int SUM = 1000;
	
	int product = searchTriples(SUM);
	printf("Product of special Pythagorean triplet: %d\n", product);

	// Return
	return 0;
}