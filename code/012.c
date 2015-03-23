#include <stdio.h>
#include <limits.h>
#define LIMIT 500

typedef long long int64;

int num_of_factor(int64 n){
	int64 k;
	int count = 2;
	for (int64 k = 2; k < n ; k++){
		if (n % k == 0){
			count++;
		}
	}
	return count;
}

void main(){
	int64 n = 0;
	int count = 0;

	for (int64 i = 1; i < LLONG_MAX - 1; i++){
		n += i;
		if (i & 1) {
			count = num_of_factor(i) * num_of_factor((i + 1)/2);
		}
		else{
			count = num_of_factor(i/2) * num_of_factor(i + 1);
		}

		if (count > LIMIT) {
			printf("%lld\n", n);
			return;
		}
	}
}
