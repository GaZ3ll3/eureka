#include <stdio.h>

void main(){
	int s = 0;
	for (int i = 1; i < 1000; i++){
		if (!(i % 3) || !(i % 5)) {
			 s += i;
		}
	}
	printf("%d\n", s);
}
