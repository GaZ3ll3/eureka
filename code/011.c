#include <stdio.h>

void main(){

        int A[20][20];

        FILE* file = fopen("../data/011.txt", "r");

        for (int i = 0; i < 20; i++) {
                for (int j = 0; j < 20; j++){
                        fscanf(file, "%d", &A[i][j]);
                }
        }

	int res = 0;
	int V = 0, H= 0, L = 0, R= 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			V = 0; H = 0; L = 0; R = 0;
			if (i <= 16) V = A[i][j]*A[i+1][j]*A[i+2][j]*A[i+3][j]; 
			if (j <= 16) H = A[i][j]*A[i][j+1]*A[i][j+2]*A[i][j+3];
                        if (i<=16 && j <=16) {
                                L = A[i][j]*A[i+1][j+1]*A[i+2][j+2]*A[i+3][j+3];
                                R = A[i+3][16 - j]*A[i+2][17 - j] * A[i+1][18 - j]*A[i][19 - j];
                        }
                        if (V > res) {res = V;}
                        if (H > res) {res = H;}
                        if (L > res) {res = L;}
                        if (R > res) {res = R;}
		}
	}
        printf("%d\n", res);
}
