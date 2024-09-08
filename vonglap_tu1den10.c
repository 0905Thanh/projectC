#include <stdio.h>

void inSoTu_1_den_n (int a) {
	int i;
	for ( i = 1; i <= a; i++) {
		printf ("%d\n", i);
	}
}

int main () {
	int n = 10;
//	scanf ("%d", &n);
//	for ( i = 1; i <= n; i++) {
//		printf ("%d\n", i);
//	}
	inSoTu_1_den_n(n);
	return 0;
}
