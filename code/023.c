#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define LIMIT 28123

int abundant[LIMIT];

int is_abundant(int n){
	int d, s;
	if (abundant[n] > -1) {
		return abundant[n];
	}
	else {
		s = 1;
		for (d = 2; d * d < n ; d++) {
			if (n % d == 0) {
				s += d + n/ d;
			}
		}
		if (d * d == n) s += d;
	}
	abundant[n] = (s > n) ? 1:0;
	return abundant[n];
}

bool is_a_sum(int n) {
	for (int m = 12; m <= n/2; m++){

		if (is_abundant(m) && is_abundant(n - m)) return true;
	}
	return false;
}

void main(){
	int res = 0;
	for (int n = 0; n < LIMIT; n++) {
		abundant[n] = -1;
	}

	for (int n = 1; n < LIMIT; n++) {
		if (!is_a_sum(n)) res += n;
	}
	printf("%d\n", res);
}





