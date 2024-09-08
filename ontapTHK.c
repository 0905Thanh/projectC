#include <stdio.h>

int kiemTraSo (int n)
{
	int so_goc = n;
	int so_dao = 0;
	int don_vi;
	while (so_goc > 0)
	{
		don_vi = so_goc % 10;
		so_dao = so_dao * 10 + don_vi;
		so_goc = so_goc / 10;
	}
	
	if (so_dao == n)
	{
		printf ("\nDoi xung");
	} else {
		printf ("\nKhong doi xung");
	}
	return 0;
}

int main ()
{
	int n;
	int so_goc, so_dao, don_vi;
	printf ("Nhap n = ");
	scanf ("%d", &n);
	kiemTraSo (n);
//	so_goc = n;
//	so_dao = 0;
//	printf ("so goc = %d", so_goc);
//	printf ("\nso dao = %d", so_dao);
//	while (so_goc > 0)
//	{
//		don_vi = so_goc % 10;
//		so_dao = so_dao * 10 + don_vi;
//		so_goc = so_goc / 10;
//	}
//	
//	if (so_dao == n)
//	{
//		printf ("\nDoi xung");
//	} else {
//		printf ("\nKhong doi xung");
//	}
	return 0;
}
