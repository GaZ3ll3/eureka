#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define N 200000L

typedef long long int64;

bool isprime[N];

void sieve(){
	for (int64 k = 2; k < sqrt(N); k++){
		if (isprime[k]){
			for (int64 j = k * k; j <= N; j += k){
				isprime[j] = false;
			}
		}
	}
}

void main(){
	for (int64 i = 0; i < N; i++) {
		isprime[i] = true;
	}
	sieve();
	int l = 0;
	for (int64 j = 2; j < N; j++){
		if (isprime[j]) l = l + 1;
		if (l == 10001) {
			printf("%lld\n", j);
			return;
		}
	}
}
