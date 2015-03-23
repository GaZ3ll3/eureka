#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define L 400

void multiply_2(char * res, int N){
	int carry = 0;
	for (int j = N - 1; j >=0; j--){
		if (carry + 2 * (res[j] - '0') >= 10) {
			res[j] = carry + 2 * (res[j]-'0') - 10 + '0';
			carry = 1;
		}
		else {
			res[j] = carry + 2 * (res[j] - '0') + '0';
			carry = 0;
		}
	}
}

int digitsum(char * res, int N){
	int n = 0;
	for (int j = 0 ; j < N; j++){
		n += res[j] - '0';
	}
	return n;
}

void main(){
	char res[L];
	for (int j = 0; j < L; j++){
		res[j] = '0';
	}
	res[L - 1] = '1';
	for (int j = 0; j < 1000; j++) {
		multiply_2(res, L);
	}
	printf("%d\n", digitsum(res, L));
}

