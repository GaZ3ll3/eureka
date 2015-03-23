#include <stdio.h>

typedef long long int64;

int64 gcd(int64 a, int64 b){
	int64 r = a;
	int64 s = b;
	int64 tmp;
	while (s != 0) {
		tmp = r;
		r = s;
		s =  tmp % s;
	}
	return r;
}

int64 lcm(int64 a, int64 b){
	return a * b / (gcd(a, b));
}

void main() {
	int64 n = 1;
	for (int64 i = 2; i < 21; i++){
		n = lcm(n , i);
	}
	printf("%lld\n", n);
}
