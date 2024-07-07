// Harris Ransom
// Project Euler Q7: 10001st Prime

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

	// Generate Sieve of Eratosthenes
	bool *sieve = genPrimes(RANGE);

	// Sum all prime numbers below RANGE
	long prime = 2;
	int counter = 0;
	while (true) {
		if (isPrime(prime, sieve)) {
			counter++;
		}
		if (counter == 10001)
			break;
		prime++;
	}
	printf("10001st Prime: %ld\n", prime);
	
	// Return
	free(sieve);
	return 0;
}