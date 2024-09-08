#include <stdio.h>

void hoanchuyen (int *c, int *d)
{
	int 
	tam=*c;
	*c= *d;
	*d= tam;
	
}
int main ()
{
	int a,b;
	printf ("gia tri cua a= ");
	scanf ("%d", &a);
	printf ("gia tri cua b= ");
	scanf ("%d", &b);
	hoanchuyen (&a, &b);
	printf ("sau khi hoan chuyen : \n a = %d \n b= %d", a, b);
	return 0;
}
