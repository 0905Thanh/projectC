#include <stdio.h>

int main () {
	float a,b,x;
	printf ("a= ");
	scanf ("%f", &a);
	printf ("b= ");
	scanf ("%f", &b);
	if (a == 0 && b!= 0) {
		printf ("PT vo nghiem");
	} else {
		x = -(b/a);
		printf ("Ket qua cua PT = %f", x);
	}
	return 0;
}
