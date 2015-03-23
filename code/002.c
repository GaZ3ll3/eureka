#include <stdio.h>

void main(){

	int s = 0;
	int x = 1, y = 1, z = 2;
	while (z <= 4000000){
		s +=z;
		x = y + z;
		y = z + x;
		z = x + y;
	}
	printf("%d\n", s);

}
