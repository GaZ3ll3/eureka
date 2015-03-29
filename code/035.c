#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define N 1000000

bool isprime[N];

void sieve(){
	for (int k = 2; k < sqrt(N); k++){
		if (isprime[k]){
			for (int j = k * k; j <= N; j += k){
				isprime[j] = false;
			}
		}
	}
}

bool is_circular_prime(int n){
	int m = n, k = 0, l = 1;

	while (m != 0){
		m /= 10;
		l *= 10;
		k++;
	}
	l/= 10;
	for (int ii = 0; ii < k; ii++){
		n = (n - n % 10)/10 + l * (n % 10);
		if (!isprime[n]) {
			return false;
		}
	}
	return true;
}

void main(){
	for (int i = 0; i < N; i++) {
		isprime[i] = true;
	}
	sieve();
	int l = 0;
	for (int j = 2; j < N; j++){
		if (is_circular_prime(j)) {
			l++;
		}
	}

	printf("%d\n", l);
}
