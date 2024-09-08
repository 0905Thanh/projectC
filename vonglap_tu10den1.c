#include <stdio.h>
void kiem_tra_so (int n) {
	do {
		if ( n >0 ) {
			printf ("n = %d",n);
		} else {
			printf ("Yeu cau nhap lai");
			printf ("\nn= ");
			
			scanf ("%d", &n);
		} 
		
		
	}while (n < 0);
	}
int main () {
	int n;
	scanf ("%d", &n);
	kiem_tra_so(n);
	
//	do {
//		scanf ("\n%d", &n);
//		if ( n <= 0) {
//			printf ("Yeu cau nhap lai\n");
//		} else {
//			printf ("n = %d",n);
//		} 
//		
//	}while (n <=0);
	return 0;
}
