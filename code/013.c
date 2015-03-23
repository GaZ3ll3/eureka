#include <stdio.h>

double mapping(char* c){

	double res = 0.;
	double d = 1.;
	for (int i = 0; i < 50; i++){
		res += d * (c[i] - '0');
		d /= 10.;
	}
	return res;
}

void main(){

	char digits[51];
	double res = 0.;
	FILE* file = fopen("../data/013.txt", "r");
	
	while (fgets(digits, 52, file)) {
		res += mapping(digits);
	}

	printf("%lld\n", (long long)(res * 10000000));

}
