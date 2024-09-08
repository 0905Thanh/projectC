#include <stdio.h>

void tinhTuoi2 (int ns, int *t) 
{
	*t = 2023 -ns;
	return;
}

int tinhTuoi(int ns) 
{
	int tuoi2;
	tuoi2 = 2023 - ns;
	return tuoi2;
}


int main ()
{
	int namSinh, tuoi, tuoi2;
	printf ("Nhap nam sinh la ");
	scanf ("%d", &namSinh);
//	goi ham
	tuoi2 = tinhTuoi (namSinh);
	tinhTuoi2(namSinh, &tuoi);
	printf ("Tuoi : %d", tuoi2);
	printf ("\nTuoi : %d", tuoi);
	return 0;
		
}

