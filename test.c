#include <stdio.h>

void kiemTraMK (int MK) {
	printf ("Nhap MK: ");
	scanf("%d", &MK);
	if (MK == 123) {
		printf ("MK dung");
	} else {
		printf ("MK sai");
	}
}

int main () {
	int MK;
//	printf ("Nhap MK: ");
//	scanf("%d", &MK);
	int i = 0;
	while (i <= 5) {
		kiemTraMK (MK);
		i++;
	}
	return 0;
}
