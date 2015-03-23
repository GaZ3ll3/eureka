#include <stdio.h>
#include <stdbool.h>

bool ispalindrome(int n){
	int m = n;
	int r = 0;
	int d = 0;
	while (m > 0) {
		d = m % 10;
		r = r * 10 + d;
		m = m / 10;
	}

	if (r == n) return true;
	return false;
}


void main(){
	int r = 0;
	int max = 0;
	for (int p = 999; p > 99; p--){
		for (int q = 990; q > 99; q -= 11){
			r = p * q;
			if (ispalindrome(r)) {
				if (r > max) {
					max  =r;
				}
			}
		}
	}
	printf("%d\n", max);
}
