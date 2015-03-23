#include <stdio.h>
#include <stdbool.h>

/*
 * verify prime number
 */
bool isprime(long long n){
	if (n == 2) {
		return true;
	}

	if (n > 3) {
		if (!(n % 2)) {
			return false;
		}
	}

	for (long long j = 3; j * j <= n; j += 2){
		if (!(n % j)) return false;
	}
	return true;
}

void main(){

	long long m = 600851475143;
	long long n = 0;
	long long k = 0;
	/* 
	 * after locating one prime factor p, we continue with n/p.
	 */
	for (long long j = 3; j * j <= m; j += 2){
		if (!(m % j)) {
			k = m / j;
			if (isprime(j) && n < j) {n = j; m /= j;}
			if (isprime(k) && n < k) {n = k; m /= k;} 
		}
	}
	printf("%lld\n", n);

}
