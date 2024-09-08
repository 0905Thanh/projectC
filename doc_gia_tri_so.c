#include <stdio.h>

int main () {
	int a;
	printf ("a = ");
	scanf ("%d", &a);
	
	if (0 <=a && a<=9) {
		printf ("Gia tri doc duoc la : %d", a);
	} else {
		printf ("Khong doc duoc gia tri");
	}
	
	return 0;
}

