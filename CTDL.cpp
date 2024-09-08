//nhap 100 phan tu 


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int arraySize = 100;
	int a[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cout << a[i] << " " ;
	}
	srand(time(0));
	
	
	bool check = false;
	int x;
	cout << endl;
	cout << "nhap gia tri x =" ; cin >> x;
	
	
//	bool check = false;
//	int x;
//	cout <<  endl;
//	cout << "nhap gia tri x: "; cin >> x;
//	for (int i = 0; i < arraySize; i++)
//	{
//		if (a[i] == x)
//		{
//			cout << "tim thay x tai vi tri " << i;
//			check = true;
//			break;
//		}
//	}
//	if (check == false)
//		cout << "ko tim thay x";

	return 0;
}
