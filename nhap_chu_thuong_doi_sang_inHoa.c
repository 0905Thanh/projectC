#include <stdio.h>
#include <math.h>
int main() {
	char a;
	printf ("Nhap 1 ki tu: ");
	scanf ("%c", &a);
	if (a >= 65 && a <=90) {
		a = a -32;
		printf ("Chu cai viet hoa : %s", a);
	} else {
		printf ("Chu cai viet thuong: %s", a);
	}
	
	return 0;
}
