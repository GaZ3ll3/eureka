#include <stdio.h>
#include <stdbool.h>

bool isprime(int n){
	if (n == 2) return true;
	for (int i = 3; i * i < n; i += 2){
		if (n % i == 0) return false;
	}
	return true;
}

void main(){

	int primes[1000];
	int max = 0, res = 0, curr = 0;

	for (int i = 2; i < 1000; i++) {
		if (isprime(i)) primes[i] = 1;
		else primes[i] = 0;
	}

	for (int a = - 999; a < 1000; a += 2){
		for (int b = 3; b < 1000; b += 2){
			if (isprime(b)){
				for (int n = 0; n < b; n++) {
					curr = n * n + n * a + b;
					if (isprime(curr) && curr > 0) {
						continue;
					}
					else {
						if (max < n) {max = n;res= a * b;}
						break;
					}
				}
			}
		}
	}

	printf("%d\n", res);

}