// Harris Ransom
// Project Euler Q10: Summation of Primes

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// Sieve of Eratosthenes implementation
bool *genPrimes(unsigned int num) {
	bool *sieve = (bool *) calloc(num, sizeof(bool));

	for (int i = 2; i < (int) ceil(sqrt(num)); i++) {
		if (!sieve[i]) {
			for (int j = i * i; j < num; j += i) {
				sieve[j] = true;
			}
		}
	}
	return sieve;
}

// Checks if num is prime
bool isPrime(unsigned int num, bool *sieve) {
	bool isPrime = !sieve[num];
	return isPrime;
}

// Main
int main() {
	const int RANGE = 2000000;
	long long sum = 0;

	// Generate Sieve of Eratosthenes
	bool *sieve = genPrimes(RANGE);

	// Sum all prime numbers below RANGE
	for (int i = 2; i < RANGE; i++) {
		if (isPrime(i, sieve)) {
			printf("Prime Number: %d\n", i);
			sum += i;
		}
	}
	printf("Sum of prime nums below %d: %lld\n", RANGE, sum);
	
	// Return
	free(sieve);
	return 0;
}