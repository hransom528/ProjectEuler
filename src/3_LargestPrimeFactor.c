// Harris Ransom
// Project Euler Q3: Largest Prime Factor

// Includes
#include <stdio.h>

// Main
int main() {
	long long n = 600851475143;
	
	long i = 2;
	while (i * i < n) {
		while (n % i == 0) {
        	n /= i;
		}
		i++;
	}
    printf("Largest prime factor: %lld", n);
	return 0;
}